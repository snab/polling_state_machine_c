
#include <Adafruit_NeoPixel.h>

#include "my_state_machine.h"


#define LED_PIN    6

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 6
#define buttonLeftPin  10
#define buttonMiddlePin  11
#define buttonRightPin  12


STATE_MACHINE machine;
// The input ... can be replaced with a register / port.
char input = 'L';

int buttonLeftLast = LOW;
int buttonMiddleLast = LOW;
int buttonRightLast = LOW;



void setup() {
  // initialize the button pin as a input:
  pinMode(buttonLeftPin, INPUT);
  pinMode(buttonMiddlePin, INPUT);
  pinMode(buttonRightPin, INPUT);

  // initialize serial communication:
  Serial.begin(9600);


  // Define the functions for each state
  machine.strip = new Adafruit_NeoPixel(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
  machine.strip -> begin();
  initialize_states(&machine);
  initialize_transitions(&machine);
  initialize_exit_actions(&machine);
  initialize_entry_actions(&machine);
     //! We're currently in 'A' and remain there until something happens.
    // Define the current state
    machine.current_state = A;
    // Define the next state
    machine.next_state    = A;

    // Set the pointer to the input
    machine.input = &input;
}

void loop() {

  int buttonLeftState = digitalRead(buttonLeftPin);
  int buttonMiddleState = digitalRead(buttonMiddlePin);
  int buttonRightState = digitalRead(buttonRightPin);

    machine.strip->setPixelColor(0,144,0,0);
    machine.strip->setPixelColor(1,0,240,0);
    machine.strip->setPixelColor(2,0,233,0);
    machine.strip->setPixelColor(3,0,0,120);

  if (buttonLeftState != buttonLeftLast && buttonLeftState == HIGH) {
    input = 'L';
    
    machine.has_new_input = 1;
    Serial.println("L");
    Serial.println(*(machine.input));
    Serial.println(machine.current_state-machine.next_state);
  }

  if (buttonRightState != buttonRightLast && buttonRightState == HIGH) {
    input = 'R';
    machine.has_new_input = 1;
    Serial.println("R");
    Serial.println(*(machine.input));
    Serial.println(machine.current_state-machine.next_state);
  }

  
  machine.states[machine.current_state]((void*)&machine);
  
  buttonLeftLast = buttonLeftState;
  buttonMiddleLast = buttonMiddleState;
  buttonRightLast = buttonRightState;

 


}


/*
void loop() {
 
        input = input != 'd'? input + 1:'a';
        machine.has_new_input = 1;
        
        // This handles all the inputs and acts as the complete state machine. The self-reference makes it possible.
        //! Note: There is an exit() in my_exit_actions.h / exit_action_state_D.
        machine.states[machine.current_state]((void*)&machine);
        delay(1000);

}
*/

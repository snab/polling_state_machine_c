#include "my_states.h"
#include "my_entry_actions.h"
#include "my_transitions.h"
#include "my_state_machine.h"

//! README!
//! 1) This is a design for a polling state machine.
//! 2) Write non-blocking code.
//! 3) The functions are currently dummies, no real functionality
//! other than jumping to the next state. Modify accordingly

// The function for state A. Write non-blocking code only, this is a polling state machine.
void state_A(void* state_machine)
{
  entry_actions(state_machine);
  //((STATE_MACHINE*)state_machine)->next_state = B;

  STATE_MACHINE *state = (STATE_MACHINE *)state_machine;
  // Strobo-mode
  if (((STATE_MACHINE*)state_machine)->counter % 4 > 1) {
    state->strip->setPixelColor(0, 255, 255, 255);
    state->strip->setPixelColor(1, 255, 255, 255);
    state->strip->setPixelColor(2, 255, 255, 255);
    state->strip->setPixelColor(3, 255, 255, 255);
    state->strip->setPixelColor(4, 255, 255, 255);
    state->strip->setPixelColor(5, 255, 255, 255);
    state->strip->show();
  } else {
    state->strip->setPixelColor(0, 0, 0, 0);
    state->strip->setPixelColor(1, 0, 0, 0);
    state->strip->setPixelColor(2, 0, 0, 0);
    state->strip->setPixelColor(3, 0, 0, 0);
    state->strip->setPixelColor(4, 0, 0, 0);
    state->strip->setPixelColor(5, 0, 0, 0);
    state->strip->show();
  }
  Serial.println("Strobo-Mode1");
  transitions(state_machine);
}

// The function for state B. Write non-blocking code only, this is a polling state machine.
void state_B(void* state_machine)
{
  entry_actions(state_machine);


  STATE_MACHINE *state = (STATE_MACHINE *)state_machine;
  // Strobo-mode
  if (((STATE_MACHINE*)state_machine)->counter % 4 > 1) {
    state->strip->setPixelColor(0, 0, 0, 255);
    state->strip->setPixelColor(1, 0, 0, 255);
    state->strip->setPixelColor(2, 0, 0, 255);
    state->strip->setPixelColor(3, 0, 0, 255);
    state->strip->setPixelColor(4, 0, 0, 255);
    state->strip->setPixelColor(5, 0, 0, 255);
    state->strip->show();
  } else {
    state->strip->setPixelColor(0, 0, 0, 0);
    state->strip->setPixelColor(1, 0, 0, 0);
    state->strip->setPixelColor(2, 0, 0, 0);
    state->strip->setPixelColor(3, 0, 0, 0);
    state->strip->setPixelColor(4, 0, 0, 0);
    state->strip->setPixelColor(5, 0, 0, 0);
    state->strip->show();
  }
  Serial.println("Strobo-Mode2");
  transitions(state_machine);
}

// The function for state C. Write non-blocking code only, this is a polling state machine.
void state_C(void* state_machine)
{
  entry_actions(state_machine);

  STATE_MACHINE *state = (STATE_MACHINE *)state_machine;
  // Strobo-mode
  if (((STATE_MACHINE*)state_machine)->counter % 4 > 1) {
    state->strip->setPixelColor(0, 0, 255, 0);
    state->strip->setPixelColor(1, 0, 255, 0);
    state->strip->setPixelColor(2, 0, 255, 0);
    state->strip->setPixelColor(3, 0, 255, 0);
    state->strip->setPixelColor(4, 0, 255, 0);
    state->strip->setPixelColor(5, 0, 255, 0);
    state->strip->show();
  } else {
    state->strip->setPixelColor(0, 0, 0, 0);
    state->strip->setPixelColor(1, 0, 0, 0);
    state->strip->setPixelColor(2, 0, 0, 0);
    state->strip->setPixelColor(3, 0, 0, 0);
    state->strip->setPixelColor(4, 0, 0, 0);
    state->strip->setPixelColor(5, 0, 0, 0);
    state->strip->show();
  }

  Serial.println("Strobo-Mode3");
  transitions(state_machine);
}

// The function for state D. Write non-blocking code only, this is a polling state machine.
void state_D(void* state_machine)
{
  entry_actions(state_machine);

  STATE_MACHINE *state = (STATE_MACHINE *)state_machine;
  // Strobo-mode
  if (((STATE_MACHINE*)state_machine)->counter % 4 > 1) {
    state->strip->setPixelColor(0, 255, 0, 0);
    state->strip->setPixelColor(1, 255, 0, 0);
    state->strip->setPixelColor(2, 255, 0, 0);
    state->strip->setPixelColor(3, 255, 0, 0);
    state->strip->setPixelColor(4, 255, 0, 0);
    state->strip->setPixelColor(5, 255, 0, 0);
    state->strip->show();
  } else {
    state->strip->setPixelColor(0, 0, 0, 0);
    state->strip->setPixelColor(1, 0, 0, 0);
    state->strip->setPixelColor(2, 0, 0, 0);
    state->strip->setPixelColor(3, 0, 0, 0);
    state->strip->setPixelColor(4, 0, 0, 0);
    state->strip->setPixelColor(5, 0, 0, 0);
    state->strip->show();
  }

  Serial.println("Strobo-Mode4");
  transitions(state_machine);
}


// The function for state AA. Write non-blocking code only, this is a polling state machine.
void state_AA(void* state_machine)
{
  entry_actions(state_machine);
  STATE_MACHINE *state = (STATE_MACHINE *)state_machine;

  Serial.println("wahhhhhhhhhhhhhh AA");
  transitions(state_machine);
}

// The function for state BB. Write non-blocking code only, this is a polling state machine.
void state_BB(void* state_machine)
{
  entry_actions(state_machine);
  STATE_MACHINE *state = (STATE_MACHINE *)state_machine;

  Serial.println("BB");
  transitions(state_machine);
}

// The function for state CC. Write non-blocking code only, this is a polling state machine.
void state_CC(void* state_machine)
{
  entry_actions(state_machine);
  STATE_MACHINE *state = (STATE_MACHINE *)state_machine;

  Serial.println("CC");
  transitions(state_machine);
}

// The function for state DD. Write non-blocking code only, this is a polling state machine.
void state_DD(void* state_machine)
{
  entry_actions(state_machine);
  STATE_MACHINE *state = (STATE_MACHINE *)state_machine;

  Serial.println("DD");
  transitions(state_machine);
}

//! Modify if number of states or function names changed.
void initialize_states(void* state_machine)
{
  ((STATE_MACHINE*)state_machine)->states[A]    = &state_A;
  ((STATE_MACHINE*)state_machine)->states[B]    = &state_B;
  ((STATE_MACHINE*)state_machine)->states[C]    = &state_C;
  ((STATE_MACHINE*)state_machine)->states[D]    = &state_D;
  ((STATE_MACHINE*)state_machine)->states[AA]    = &state_AA;
  ((STATE_MACHINE*)state_machine)->states[BB]    = &state_BB;
  ((STATE_MACHINE*)state_machine)->states[CC]    = &state_CC;
  ((STATE_MACHINE*)state_machine)->states[DD]    = &state_DD;
}

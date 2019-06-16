#include "my_entry_actions.h"
#include "my_state_machine.h"
#include <Adafruit_NeoPixel.h>
//! README!
//! 1) This is a design for a polling state machine.
//! 2) Write non-blocking code.
//! 3) The functions are currently dummies, no real functionality. Modify accordingly.

// The entry action of state A. Write non-blocking code only, this is a polling state machine.
void entry_action_state_A(void* state_machine)
{
	STATE_MACHINE *state = (STATE_MACHINE *)state_machine;
	state->strip->setPixelColor(0,200,0,0);
	state->strip->show();
}

// The entry action of state B. Write non-blocking code only, this is a polling state machine.
void entry_action_state_B(void* state_machine)
{
	STATE_MACHINE *state = (STATE_MACHINE *)state_machine;
	state->strip->setPixelColor(1,0,200,0);
	state->strip->show();
}

// The entry action of state C. Write non-blocking code only, this is a polling state machine.
void entry_action_state_C(void* state_machine)
{
	STATE_MACHINE *state = (STATE_MACHINE *)state_machine;
	state->strip->setPixelColor(2,0,0,200);
	state->strip->show();
}

// The entry action of state D. Write non-blocking code only, this is a polling state machine.
void entry_action_state_D(void* state_machine)
{
	STATE_MACHINE *state = (STATE_MACHINE *)state_machine;
	state->strip->setPixelColor(3,200,200,200);
	state->strip->show();
}

//! Modify if number of states or function names changed.
void initialize_entry_actions(void* state_machine)
{
    ((STATE_MACHINE*)state_machine)->entry_actions[A] = &entry_action_state_A;
    ((STATE_MACHINE*)state_machine)->entry_actions[B] = &entry_action_state_B;
    ((STATE_MACHINE*)state_machine)->entry_actions[C] = &entry_action_state_C;
    ((STATE_MACHINE*)state_machine)->entry_actions[D] = &entry_action_state_D;
}

//! DO NOT TOUCH. Explanation: This handles the entry actions autonomously, by using enums, and the indexed function pointers in the arrays.
void entry_actions(void* state_machine)
{
    if(((STATE_MACHINE*) state_machine)->has_new_input == 1)
    {
        ((STATE_MACHINE*) state_machine)->entry_actions[((STATE_MACHINE*) state_machine)->current_state](state_machine);
        ((STATE_MACHINE*) state_machine)->has_new_input = 0;
    }
}

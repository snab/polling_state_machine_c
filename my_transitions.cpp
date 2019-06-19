#include "my_transitions.h"
#include "my_state_machine.h"

//! README!
//! 1) This is a design for a polling state machine.
//! 2) Write non-blocking code.
//! 3) The functions are currently dummies, no real functionality. Modify accordingly.

// The transitions from state A to ?. Write non-blocking code only, this is a polling state machine.
void transitions_A(void* state_machine)
{
}

// The transitions from state B to ?. Write non-blocking code only, this is a polling state machine.
void transitions_B(void* state_machine)
{
}

// The transitions from state C to ?. Write non-blocking code only, this is a polling state machine.
void transitions_C(void* state_machine)
{
}

// The transitions from state D to ?. Write non-blocking code only, this is a polling state machine.
void transitions_D(void* state_machine)
{
}

// The transitions from state AA to ?. Write non-blocking code only, this is a polling state machine.
void transitions_AA(void* state_machine)
{
}

// The transitions from state BB to ?. Write non-blocking code only, this is a polling state machine.
void transitions_BB(void* state_machine)
{
}

// The transitions from state BB to ?. Write non-blocking code only, this is a polling state machine.
void transitions_CC(void* state_machine)
{
}

// The transitions from state BB to ?. Write non-blocking code only, this is a polling state machine.
void transitions_DD(void* state_machine)
{
}

//! Modify if number of states or function names changed.
void initialize_transitions(void* state_machine)
{
  ((STATE_MACHINE*)state_machine)->transitions[A] = &transitions_A;
  ((STATE_MACHINE*)state_machine)->transitions[B] = &transitions_B;
  ((STATE_MACHINE*)state_machine)->transitions[C] = &transitions_C;
  ((STATE_MACHINE*)state_machine)->transitions[D] = &transitions_D;
  ((STATE_MACHINE*)state_machine)->transitions[AA] = &transitions_AA;
  ((STATE_MACHINE*)state_machine)->transitions[BB] = &transitions_BB;
  ((STATE_MACHINE*)state_machine)->transitions[CC] = &transitions_CC;
  ((STATE_MACHINE*)state_machine)->transitions[DD] = &transitions_DD;
}

//! DO NOT TOUCH. Explanation: This handles the transitions autonomously, by using enums, and the indexed function pointers in the arrays.
void transitions(void *state_machine)
{
  if ((((STATE_MACHINE*)state_machine)->next_state) != (((STATE_MACHINE*)state_machine)->current_state))
  {
    ((STATE_MACHINE*)state_machine)->exit_actions[((STATE_MACHINE*)state_machine)->current_state](state_machine);
    ((STATE_MACHINE*)state_machine)->transitions[((STATE_MACHINE*)state_machine)->current_state](state_machine);
    ((STATE_MACHINE*)state_machine)->has_new_input = 0;
    ((STATE_MACHINE*)state_machine)->current_state = ((STATE_MACHINE*)state_machine)->next_state;
  }


}

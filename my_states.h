#ifndef _my_states_h_
#define _my_states_h_


// Number of states
#define MAX_STATES 8

//! States as enum: allows easy and correct indexing of function arrays.
typedef enum STATE{A=0, B, C, D, AA, BB, CC, DD} STATE;

//! A state function for each state. If no functionality is needed, provide an empty function.
//! This state machine architecture is designed for a polling state machine, refrain from writing
//! blocking funcitons, or endless loops.
// Function for state A
void state_A(void* state_machine);
// Function for state B
void state_B(void* state_machine);
// Function for state C
void state_C(void* state_machine);
// Function for state D
void state_D(void* state_machine);
// Function for state AA
void state_AA(void* state_machine);
// Function for state BB
void state_BB(void* state_machine);
// Function for state CC
void state_CC(void* state_machine);
// Function for state DD
void state_DD(void* state_machine);

//! Initializes the state function array of the state machine, modify if the number of states, functions or names of functions change.
void initialize_states(void* state_machine);

#endif

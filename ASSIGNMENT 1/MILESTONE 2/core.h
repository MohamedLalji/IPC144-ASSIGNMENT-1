/*
*****************************************************************************
                        Assignment 1 - Milestone 2
Full Name  : Mohamed Lalji
Student ID#: Your ID
Email      : mlalji@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

// SAFE-GUARD: 
// It is good practice to apply safe-guards to header files
// Safe-guard's ensures only 1 copy of the header file is used in the project build
// The macro name should be mirroring the file name with _ for spaces, dots, etc.

// !!! DO NOT DELETE THE BELOW 2 LINES !!!
#ifndef CORE_H
#define CORE_H

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// 
// Copy your work done from Milestone #1 (core.h) into this file
// 
// NOTE:
// - Organize your functions into the below categories
// - Make sure the core.c file also lists these functions in the same order!
// - Be sure to provide a BRIEF comment for each function prototype
// - The comment should also be copied to the core.c function definition
//
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


//////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////

// Clear the standard input buffer
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue
void suspend(void);


//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////

int inputInt(void);                                          // Checks for input being an int and returns an int. Displays an error if input is invalid.

int inputIntPositive(void);                                 // Checks for input entered is a positive number and returns an int. Displays error if input is not positive. 

int inputIntRange(int Min, int Max);                       // Checks for input entered is within the range (min - max) and returns an int. Displays error if input is outside the range.

char inputCharOption(const char* inputchar);              // Checks for input entered is a single character and returns a char. Displays an error if input is not in the list.

void inputCString(char* string, int min, int max);       // Checks for input entered is within the string length (min - max) and doesnt return anything. 

void displayFormattedPhone(const char* string);         // Displays the phone number based on the string length.



// !!! DO NOT DELETE THE BELOW LINE !!!
#endif // !CORE_H

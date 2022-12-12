/*
*****************************************************************************
                        Assignment 1 - Milestone 1
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

// Clear the standard input buffer
void clearInputBuffer(void);

// Wait for user to input the "enter" key to continue
void suspend(void);

//Function Prototypes
int inputInt(void);

int inputIntPositive(void);

int inputIntRange(int Min, int Max);

char inputCharOption(const char* inputchar);

void inputCString(char* string, int min, int max);

void displayFormattedPhone(const char* string);
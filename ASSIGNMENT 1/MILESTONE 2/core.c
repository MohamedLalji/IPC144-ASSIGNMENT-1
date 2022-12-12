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

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>

#include "core.h"

//
// Copy your work done from Milestone #1 (core.c) into this file
// - Organize your functions in the same order as they are listed in the core.h file
// - Also copy the commented "sections" to help with finding functions quickly!
//

// Clear the standard input buffer
void clearInputBuffer(void)
{
	// Discard all remaining char's from the standard input buffer:
	while (getchar() != '\n')
	{
		; // do nothing!
	}
}

// Wait for user to input the "enter" key to continue
void suspend(void)
{
	printf("<ENTER> to continue...");
	clearInputBuffer();
	putchar('\n');
}

//Function prototypes defined

int inputInt(void)												// Checks for input being an int and returns an int. Displays an error if input is invalid.
{
	int value = 0;
	char newLine = 'X';

	while (newLine != '\n')
	{

		scanf("%d%c", &value, &newLine);

		if (newLine != '\n')
		{
			clearInputBuffer();
			printf("Error! Input a whole number: ");
		}

		else
		{
		}

	}

	return value;
}

int inputIntPositive(void)								// Checks for input entered is a positive number and returns an int. Displays error if input is not positive.
{

	int IntPositive = 0;

	while (IntPositive <= 0)
	{

		IntPositive = inputInt();

		if (IntPositive == 0)
		{
		}

		else if (IntPositive <= 0)
		{
			printf("ERROR! Value must be > 0: ");
		}
	}


	return IntPositive;
}

int inputIntRange(int Min, int Max)						// Checks for input entered is within the range (min - max) and returns an int. Displays error if input is outside the range.
{
	int value = 0;
	int flag = 0;

	do
	{
		value = inputInt();

		if (value >= Min && value <= Max)
		{
			flag += 1;
		}

		else
		{
			printf("ERROR! Value must be between %d and %d inclusive: ", Min, Max);
		}

	} while (flag == 0);


	return value;
}

char inputCharOption(const char* inputchar)					 // Checks for input entered is a single character and returns a char. Displays an error if input is not in the list.
{
	int i;
	char userInput;
	char NewLine = 'X';
	int  flag = 0;


	do
	{

		scanf(" %c%c", &userInput, &NewLine);

		if (NewLine == '\n')
		{
			for (i = 0; i < 31 && (inputchar[i] != '\0'); i++)
			{
				if (inputchar[i] == userInput)
				{
					flag = 1;
				}
			}

			if (flag == 0)
			{
				printf("ERROR: Character must be one of [%s]: ", inputchar);
			}
		}

		else
		{
			clearInputBuffer();
		}

	} while (flag == 0);

	return userInput;
}

void inputCString(char* string, int min, int max)			// Checks for input entered is within the string length (min - max) and doesnt return anything.
{
	int i;
	int flag = 0;
	int stringLength = 0;
	char RightString[31];

	do
	{
		scanf("%30[^\n]", RightString);

		for (i = 0; RightString[i] != '\0'; i++)
		{

		}

		stringLength = i;

		if (min == max && (stringLength != max))
		{
			printf("ERROR: String length must be exactly %d chars: ", max);
		}

		else if (stringLength > max)
		{
			printf("ERROR: String length must be no more than %d chars: ", max);
		}

		else if (stringLength < min)
		{
			printf("ERROR: String length must be between %d and %d chars: ", min, max);
		}

		else if (stringLength >= min && stringLength <= max)
		{
			flag += 1;
		}

		clearInputBuffer();

	} while (flag == 0);

	for (i = 0; i < 7; i++)
	{
		string[i] = RightString[i];
	}
}

void displayFormattedPhone(const char* string)						// Displays the phone number based on the string length.
{
	int i = 0;
	int arrSize = 0;

	for (; string != NULL && string[arrSize] && isdigit(string[arrSize]);)
	{
		arrSize++;
	}

	if (arrSize != 10)
	{
		printf("(___)___-____");
	}

	else
	{
		printf("(");

		do
		{
			printf("%c", string[i]);
			i++;
		} while (i < 3);

		printf(")");

		do
		{
			printf("%c", string[i]);
			i++;
		} while (i < 6);

		printf("-");

		do
		{
			printf("%c", string[i]);
			i++;
		} while (i < 10);
	}

	if (string != 0)
	{
		for (i = 0; string[i] != '\0'; i++)
			arrSize++;
	}

}
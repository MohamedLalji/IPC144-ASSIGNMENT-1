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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

#include "core.h"

// As demonstrated in the course notes: 
// https://intro2c.sdds.ca/D-Modularity/input-functions#clearing-the-buffer
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
int inputInt(void)
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

int inputIntPositive(void) 
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

int inputIntRange(int Min, int Max)
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

char inputCharOption(const char* inputchar)
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

void inputCString(char* string, int min, int max)
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

void displayFormattedPhone(const char* string)
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
/*
*****************************************************************************
                        Assignment 1 - Milestone 3
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
#include <stdio.h>

#include <ctype.h>
#include <string.h>

                                                                                           // Clear the standard input buffer
void clearInputBuffer(void)
{
   
    while (getchar() != '\n')
    {
        ; 
    }
}

// Wait for user to input the "enter" key to continue 
void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}


int inputInt(void)                                                              	// Checks for input being an int and returns an int. Displays an error if input is invalid.
{
    char character = ' ';
    int userValue;

    do 
    {
        scanf("%d%c", &userValue, &character);

        if (character != '\n') 
        {

            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }

    } while (character != '\n');


    return userValue;
}


int inputIntPositive(void)                                                      // Checks for input entered is a positive number and returns an int. Displays error if input is not positive.
{
    char character = ' ';
    int userValue;

    do 
    {
        scanf("%d%c", &userValue, &character);

        if (character != '\n') 
        {
            clearInputBuffer();
            printf("Error! Input a number: ");
        }

        if (userValue <= 0) 
        {
            printf("ERROR! Value must be > 0: ");
        }

    } while (userValue <= 0);

    return userValue;
}

int inputIntRange(int lowerBound, int upperBound)                           // Checks for input entered is within the range (min - max) and returns an int. Displays error if input is outside the range.
{
    char character = ' ';
    int userValue;

    do 
    {
        scanf("%d%c", &userValue, &character);

        if (character != '\n') 
        {
            clearInputBuffer();
            printf("Error! Input a whole number: ");
        }

        else if (!(userValue <= upperBound && userValue >= lowerBound)) 
        {
            printf("ERROR! Value must be between %d and %d inclusive: ", lowerBound, upperBound);
        }
    
    } while (!(userValue <= upperBound && userValue >= lowerBound));
    return userValue;
}


char inputCharOption(char str[])                                         // Checks for input entered is a single character and returns a char. Displays an error if input is not in the list.
{
    int i = 0, 
        Record = 0;
    char userInput;

    do 
    {
        scanf(" %c", &userInput);


        for (i = 0; str[i] != '\0'; i++) 
        {
            if (userInput == str[i]) 
            {
                Record++;
            }
        }

        if (Record == 0) 
        {
            printf("ERROR: Character must be one of [%s]: ", str);
        }

    } while (Record == 0);

    clearInputBuffer();
    
    return userInput;
}

void inputCString(char* str, int minChar, int maxChar)              // Checks for input entered is within the string length (min - max) and doesnt return anything.
{
    int flag = 1;
    char character = 'a';

    while (flag) 
    {
        int len = 0;
     
        while (character != '\n' && len <= maxChar) 
        {

            character = getchar();
            str[len] = character;
            len++;
        };

        if (character == '\n' && len <= (maxChar + 1)) 
        {
            len--;
            str[len] = '\0';
        }


        
        else 
        {

            str[maxChar] = '\0';
            clearInputBuffer();
        }

        if (minChar == maxChar && len != minChar) 
        {

            printf("ERROR: String length must be exactly %d chars: ", minChar);
            character = 'a';
        }
        
        else if (len < minChar || len > maxChar) 
        {

            if (len > maxChar) 
            {

                printf("ERROR: String length must be no more than %d chars: ", maxChar);
                character = 'a';
            }
            
            else if (len < minChar) 
            {

                printf("ERROR: String length must be between %d and %d chars: ", minChar, maxChar);
                character = 'a';
            }
        }
        
        else 
        {
            flag = 0;
        }

    }



}

void inputCStringNumbers(char* str, int minChar, int maxChar)                   // This function is the same as inputCString but is exclusively for numbers
{
    int flag = 1;
    char character = 'a';

    while (flag) 
    {
        int len = 0;
    
        while (character != '\n' && len <= maxChar) 
        {

            character = getchar();
            str[len] = character;
            len++;
        };

        if (character == '\n' && len <= (maxChar + 1)) 
        {
            len--;
            str[len] = '\0';
        }
        
        else 
        {

            str[maxChar] = '\0';
            clearInputBuffer();
        }

        if (minChar == maxChar && len != minChar) 
        {

            printf("Invalid 10-digit number! Number: ");
            character = 'a';
        }
        
        else 
        {
            flag = 0;
        }
    }
}

void displayFormattedPhone(const char* str)                 // Displays the phone number based on the string length.
{
    int Length = 0,
        i;

    Length = strlen(str);

    if (Length == 10) 
    {
        i = 0;
        printf("(");
        while (i < 3) 
        {
            printf("%c", str[i]);
            i++;
        }

        printf(")");
        
        while (i < 6) 
        {
            printf("%c", str[i]);
            i++;
        }
        
        printf("-");
        
        while (i < 10) 
        {
            printf("%c", str[i]);
            i++;
        }
    }

    else 
    {
        printf("(___)___-____");
    }
    
    if (str != 0) 
    {

        for (i = 0; str[i] != '\0'; i++)
            Length++;
    }


}
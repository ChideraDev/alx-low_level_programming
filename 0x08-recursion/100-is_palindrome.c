#include "main.h"
/**
* strlen_recursion - recursively print the length of a string
* @str: the string to be get its length recursively
* Return: the length (integer)
*/
int strlen_recursion(char *str)
{
        if (*str == '\0')
                return (0);

        str++;
        return (strlen_recursion(str) + 1);
}

/**
* palindrome_validator - function to check the string length at both ends
* @str: string to check if it is a palindrome
* @length: the length of the string
* @counter: number of recursion
* Return: 1 if true or 0 if false
*/

int palindrome_validator(char *str, int length, int counter)
{
        if (counter >= length)
                return (1);
        else if (str[length] == str[counter])
                return (palindrome_validator(str, (length - 1), (counter + 1)));
        return (0);
}
/**
* is_palindrome - function to check if a string is a palindrome
* @str: string to check
* Return: 1 if true or 0 if false
*/
int is_palindrome(char *str)
{
        int length = strlen_recursion(str);
        int counter = 0;

        return (palindrome_validator(str, (length - 1), counter));
}
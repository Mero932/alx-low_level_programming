#include <stdio.h>
#include <main.h>

int _isupper(int c) {
    /*
    This function checks if a character is uppercase.
    
    Parameters:
    c (char): The character to be checked
    
    Returns:
    int: 1 if the character is uppercase, 0 otherwise
    */
    
    if (c >= 'A' && c <= 'Z') {
        return (1);
    } else {
        return (0);
    }
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void) {
    int c;
    
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (_isupper(c)) {
       // printf("The character is uppercase.\n");
       printf("%c: %d\n", c, _isupper(c));
    } else {
        printf("The character is not uppercase.\n");
    }
    
    return (0);
}

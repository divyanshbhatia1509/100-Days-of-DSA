/*
Problem:
A secret system stores code names in forward order.
To display them in mirror format, you must transform the given
code name so that its characters appear in the opposite order.

Input:
- A single line sentence containing alphabetic characters and spaces

Output:
- Print the transformed sentence after applying the mirror operation

Example:
Input:
hello world

Output:
dlrow olleh
*/

#include <stdio.h>

int main() {
    char str[200];
    int i, len = 0;
    char temp;

    // Prompt user for input
    printf("Enter a string: ");

    // Read sentence including spaces (without using fgets)
    scanf(" %[^\n]", str);

    // Calculate length of the string
    while (str[len] != '\0') {
        len++;
    }

    // Reverse the sentence
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    // Display output
    printf("Mirrored :- %s\n", str);

    return 0;
}

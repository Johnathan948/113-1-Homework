#include <stdio.h>

// Recursive function to print a string in reverse
void stringReverse(char str[]) {
    // Base case: stop when the null character is encountered
    if (*str == '\0') {
        return;
    }

    // Recursive case: process the rest of the string
    stringReverse(str + 1);

    // Print the current character after the recursive call
    putchar(*str);
}

int main() {
    // Input string
    char string[] = "Hello, World!";

    printf("Original string: %s\n", string);
    printf("Reversed string: ");
    stringReverse(string); // Call the recursive function
    printf("\n");

    return 0;
}
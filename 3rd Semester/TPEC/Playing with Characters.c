#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    // Declare variables
    char ch;
    char str[100];
    char sentence[100];

    // Input character
    scanf("%c", &ch);
    
    // Input string (skip the newline character after character input)
    scanf("%s", str);
    
    // Input sentence (read the entire line including spaces)
    getchar();  // To consume the leftover newline character
    fgets(sentence, sizeof(sentence), stdin);

    // Output the character, string, and sentence
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s", sentence);  // No extra newline needed as fgets captures it

    return 0;
}

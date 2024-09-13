#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

  ;

    // Check if the character is a vowel or consonant using a switch statement
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The character '%c' is a vowel.\n", ch);
            break;
        default:
            // Check if the character is a letter
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("The character '%c' is a consonant.\n", ch);
            } else {
                printf("The character '%c' is not an alphabet.\n", ch);
            }
            break;
    }

    return 0;
}


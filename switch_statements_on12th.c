#include <stdio.h>
int main()
{
    char input;
    printf("Enter a letter: ");
    scanf("%c", &input);
    switch (input){
        case 'A':
        case 'a':
            printf("Ada\n");
            break;
        case 'B':
        case 'b':
            printf("Basic\n");
            break;
        case 'C':
        case 'c':
            printf("Cobol\n");
            break;
        case 'D':
        case 'd':
            printf("dBase III\n");
            break;
        case 'F':
        case 'f':
            printf("Fortran\n");
            break;
        case 'P':
        case 'p':
            printf("Pascal\n");
            break;
        case 'V':
        case 'v':
            printf("Visual C++\n");
            break;
        default:
            printf("Input does not match any known language or package.\n");
    }
    return 0;
}

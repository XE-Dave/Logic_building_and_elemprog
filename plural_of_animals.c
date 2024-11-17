/*Write a C program using pointers to string to accept the names
of an animal and a bird and print out the plural forms of both words*/
#include <stdio.h>
#include <string.h>
int main ()
{
    //declare a variable "bird"
    char animal [10], bird [10];
    //declare a pointer to both variables
    //prompt the user for an animal name & bird name
    printf("enter an animal and a bird name:\n");
    //store both names in their respective values
    scanf("%s", animal);
    scanf("%s", bird);
    /*use an if statement to check if the last character=='s', and 
    then add "es" to the word. If not, just add an 's' to the word*/
    int length=strlen(animal);
    int lenth=strlen(bird);
    if(animal[length-1]=='s'){
        printf("%ses\n", animal);
    }else{
        printf("%ss\n", animal);
    }
    if(bird[lenth-1]=='s'){
        printf("%ses\n", bird);
    }else{
        printf("%ss\n", bird);
    }
    return 0;
}
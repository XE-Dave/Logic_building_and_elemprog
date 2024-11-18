#include <stdio.h>
int main ()
{
    char word[10];
    int count=0;
    printf("enter a word:\n");
    scanf("%s", word);
    for(int i=1; i<10; i++){
        if (word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
            count+=1;
    }
    printf("the number of vowels is %d\n", count); 
    return 0;
}
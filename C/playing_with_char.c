#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Task
You have to print the character in the first line. Then print 
in next line. In the last line print the sentence
*/

int main(void) 
{
    char ch;
    char word[100];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s\n", &word);
    scanf(" %[^\n]s", sen);
    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s\n", sen);
    return 0;
}

#include <stdio.h>

int main() {

    char n;
   
    
    printf("enert a character to check vowel or consonant --->");
    scanf("%c",&n);
    if((n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'))
    {
        printf("you enter a vowel|\n\n");
    }
    else
    {
        printf("you enter a consonant\n\n");
    }

  
   
    return 0;
}
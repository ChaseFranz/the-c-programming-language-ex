#include <stdio.h>
#define MAX_STRING_LENGTH 100

// Write a loop equivilalent to the for loop above without using && or ||

int main(void)
{

    /*
    for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
    */

    int i = 0;
    int lim = MAX_STRING_LENGTH;
    int c;

    char s[MAX_STRING_LENGTH];

    while (i < (lim-1))
    {
        c = getchar();

        if (c == EOF)
        {
            break;
        }
        else if (c == '\n')
        {
            break;
        }

        s[i++] = c;
    }

    s[i] = '\0'; // terminate the string
    
    return 0;
}
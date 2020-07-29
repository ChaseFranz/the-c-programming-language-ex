#include <stdio.h>
 // copy input to output.
int main()
{
    int c;

    printf("Enter character(s):");    
    while((c = getchar()) != EOF)
    {
        putchar(c);
    }

    return 0;
}
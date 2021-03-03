#include <stdio.h>
#include <limits.h>

int main() 
{
   // char
   printf("Size of char: %d\n", CHAR_BIT);
   printf("Size of char Min: %d\n", CHAR_MIN);
   printf("Size of char Max: %d\n", CHAR_MAX);

   // short
   printf("Size of short min: %d\n", SHRT_MIN);
   printf("Size of short max: %d\n", SHRT_MAX);

   // int
   printf("Size of int min: %d\n", INT_MIN);
   printf("Size of int max: %d\n", INT_MAX);

   // long
   printf("Size of long min: %ld\n", LONG_MIN);
   printf("Size of long max: %ld\n", LONG_MAX);

	// unasigned
   printf("Size of unsigned char: %u\n", UCHAR_MAX);
   printf("Size of unsigned short: %u\n", USHRT_MAX);
   printf("Size of unsigned int: %lu\n", UINT_MAX);
   printf("Size of unsigned long: %u\n", ULONG_MAX);
   
   return 0;
}
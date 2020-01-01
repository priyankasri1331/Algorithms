#include <stdio.h>
#include <string.h>
int output[256];//Accommodate all characters possible even those that you can't type.
int main()
{
	char str[100];
	char int_to_char;
	int i,j,length;
	int char_to_int;
	printf("Enter the string of size less than 99 char:\n");
	gets(str);
	length = strlen(str);

	for(i = 0; i < length; i++)
    {
        char_to_int = str[i]; //char is automatically treated as integer.This line is redundant
        //printf("%d\n",char_to_int);
        output[char_to_int] += 1;

    }
    for(j=0;j<256;j++)
    {
        if (output[j]!=0)
        {
            int_to_char = j;
            printf("%c = %d\n",int_to_char,output[j]);
        }

    }
}
//Analysis: The above algorithm runs in O(n) time.

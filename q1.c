#include <stdio.h>

int main()
{
    int no = 734;  
    int reversed = 0, remainder;

   
    while (no != 0)
    {
        remainder = no % 10;         
        reversed = reversed * 10 + remainder;  
        no /= 10;                  

   
    printf("Reversed number: %d\n", reversed);

    return 0;
    }
}

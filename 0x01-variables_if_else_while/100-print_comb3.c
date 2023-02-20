#include <stdio.h>
/**
 * main -  is the main function 
 * Return: Always 0
 */
int main() 

{
    int a, b;
    
    for (a = '0'; a <= '9'; a++)
    {
        for (b = a+1; b <= '9'; b++)
        {
            if (a != b)
            {
                putchar(a);
                putchar(b);
                if(a == '0' && b == '9')
                continue;
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}

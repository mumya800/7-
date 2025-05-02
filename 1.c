#include <stdio.h>
#include <string.h>

int max(int a, int b) 
{
    if (a > b) 
    {
        return a;
    } 
    else 
    {
        return b;
    }
}

int main() 
{

    int num1 = 5;
    int num2 = 10;

    int maximum = max(num1, num2);
    printf("Максимальное число: %d\n", maximum);

    return 0;
}

#include <stdio.h>

int function()
{
    static int age = 0;
    age++;
    return age;
}

int main()
{
    printf("\n%d", function());
    printf("\n%d", function());
    printf("\n%d\n", function());
    

    return 0;
}
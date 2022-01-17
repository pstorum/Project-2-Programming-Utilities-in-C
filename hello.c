#include <stdio.h>

int main()
{
    int x = 12;
    float y = 3.14;
    char s[] = "Hello, World!";
    printf("x is %i, y is %f", x, y);
    printf("\n%s", s);
    
    for(int i=0; i<=4; i = i + 1){
        printf("\n%i * 5 = %i", i, i*5);
    }
}
#include<stdio.h>
  int main()
{
    {
    printf("celsius fahr\n");
    } 
    int celsius, fahr;
    int lower, upp, step;
    upp = 100;
    lower = 0;
    step = 5;
    celsius = lower;
    while (celsius <= upp) {
        fahr = 32+(9*celsius/5);
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + step;
    }
}

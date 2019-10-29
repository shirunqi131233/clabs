#include<stdio.h>
#define LOWER 0
#define UPPER 100
#define STEP 5
#include<stdlib.h>
int main()
{
    double c,f;
    for(c=0;c<=100;c+=10){
        f=c/5.0*9.0+32;
        printf("%8.2f\n",c,f);
    }
    system("pause");
    return 0;
} 
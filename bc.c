#include<stdlib.h>
#include<stdio.h>
int count1InNum(int num)
{
int result=0;
while(num!=0)
{
num &=(num-1);
result++;
}
return result;
}
int count(int num)
{
int result=0;
while(num!=0)
{ if(num%2!=0) result++; num /= 2; }
return result;
}
int main()
{
int num;
scanf("%d",&num);
while(num!=0)
{ char s[33]; itoa(num, s, 2);
printf("The number of 1 in %d (%s) is %d.\n",num,s,count1InNum(num));
printf("The number of 1 in %d (%s) is %d.\n",num,s,count(num));
scanf("%d",&num); }
getchar();
return 0;
} 
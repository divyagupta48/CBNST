#include<stdio.h>
#include<conio.h>
/*write a program to implement TRAPEZOIDAL METHIOD
Name-Divya Gupta
Course-Btech(cse)'A'
Roll no.-47
Sem-4th*/
float f(float x)
{
      return 1/(1+(x*x));
}
int main()
{
    float low,I,sum,h,high;
    int n,i;
    printf("enter low limit:");
    scanf("%f",&low);
    printf("enter high limit:");
    scanf("%f",&high);
    printf("enter no. of intervals");
    scanf("%d",&n);
    h=(high-low)/n;
    sum=0;
    I=0;
    sum=f(low)+f(high);
    for(i=1;i<n;i++)
    I=I+f(low+(i*h));
    sum=(sum+(2*I))*(h/2);
    printf("sum=%f",sum);
    getch();
    return 0;
}

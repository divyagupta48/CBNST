/*write a program to implement SIMPSON 3/8 TH RULE
Name-Divya Gupta
Course-Btech(cse)'A'
Roll no.-47
Sem-4th*/
#include<stdio.h>
#include<conio.h>
float f(float x)
{
      return 1/(1+(x*x));
}
int main()
{
    float low,I,sum,T,h,high;
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
    T=0;
    sum=f(low)+f(high);
    for(i=1;i<n;i++)
    {
     if(i%3==0)
    I=I+f(low+(i*h));
    else
    T=T+f(low+(i*h));
}
    sum=(sum+(2*I)+(3*T))*((3*h)/8);
    printf("sum=%f",sum);
    getch();
    return 0;
}

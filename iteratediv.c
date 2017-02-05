#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
      return (2*x-cos(x)-3);
}
void line()
{
     int i;
     for(i=1;i<=24;i++)
     printf("-");
     }
float fz(float x)
{
      return ((cos(x)+3)/2);
      }
float fk(float x)
{
      return (-sin(x)/2);
      }
int main()
{
    int i;
    float x,a,b,xo,x1;
    x=0;
    printf("\t\t\t*****Iteration method*****\n");
    line();
    while(1)
    {
    if(f(x)*f(x+1)<0)
    {
    a=x;
    b=x+1;
    break;
    }
    x=x+1;
    }
    printf("\ninitial roots are: %f  %f\n",a,b);
    line();
if(fabs(fk(xo))<=1.0)
{
xo=a;i=1;
while(1)
{
if(i!=1)
x1=fz(xo);
printf("\n%d           %f\n",i,x1);
line();
  if(f(x1)==0)
 { printf("\nfinal root:%f\n",x1); break;}
  
  else if(fabs(x1-xo)<=0.00001) 
       {printf("\nfinal root:%f\n",x1);  break;}

  
  xo=x1;
  i=i+1;
 }


 }
getch();
return 0;
}

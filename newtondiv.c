#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
      return (x*x*x-4*x-9);
}
void line()
{
     int i;
     for(i=1;i<=24;i++)
     printf("-");
     }
float fk(float x)
{
      return (3*x*x-4);
      }
int main()
{
    int i;
    float x,a,b,xo,x1;
    printf("\t\t\t*****Newton Rapson method*****\n");
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
xo=(a+b)/2;i=1;
while(1)
{
x1=xo-(f(xo)/fk(xo));
printf("\n%d           %f\n",i,x1);
line();
  if(f(x1)==0)
 { printf("\nfinal root:%f\n",x1); break;}
  
  else if(fabs(x1-xo)<=0.00001) 
       {printf("\nfinal root:%f\n",x1); 
        break;}
        xo=x1;
  i=i+1;
 }
getch();
return 0;
}

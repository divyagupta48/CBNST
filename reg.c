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
     for(i=1;i<=96;i++)
     printf("-");
     }
int main()
{
    int i=1;
    float x,a,b,t;
    printf("\t\t\t***REGULA FALSI METHOD***\n");
    line();
  x=1;
  while(1)
  {
   if(f(x)*f(x+1)<0)
   {
    a=x;
    b=x+1;
    break;
}x++;
}
    printf("\ninitial roots are:%f %f\n",a,b);
   line();
  printf("\ni\ta\t\tb\t\tf(a)\t\tf(b)\t\tt-x\t\tx(root)\n");
   line();
 i=1;   t=0;
    while(1)
    {
         
    if(i!=1)
    t=x;
    x=b-((b-a)/(f(b)-f(a))*f(b));
    if(f(x)==0)
    {printf("\n final root=%f",x);
    break;
    }
    if(f(a)*f(x)<0)
    b=x;
    else
    a=x;
    printf("\n%d\t%f\t%f\t%f\t%f\t%f\t%f\n",i,a,b,f(a),f(b),fabs(t-x),x);
    line();
    if(fabs(t-x)<=0.00001)
    {
    printf("\n final root=%f",x);
    break;
    }
    i=i+1;
    }
getch();
return 0;
}
    

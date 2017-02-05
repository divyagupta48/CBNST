#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    int i,f=1;
    for(i=2;i<=n;i++)
    f=f*i;
    return f;
}
int main()
{
    float x[50],y[50],diff[50][50],P,X,sum,a;
    int n,i,j;
    printf("enter the limit:");
    scanf("%d",&n);
    printf("enter the array x\n");
    for(i=0;i<n;i++)
    {
    scanf("%f",&x[i]);
}
    printf("enter the array y\n");
    for(i=0;i<n;i++)
    scanf("%f",&y[i]);
    for(i=0;i<=n-2;i++)
    diff[i][1]=y[i+1]-y[i];
    for(i=2;i<=n-1;i++)
    {
    for(j=0;j<n-i;j++)
    diff[j][i]=diff[j+1][i-1]-diff[j][i-1];
}
    printf("\n FINITE DIFFERENCE TABLE \n");
    for(i=0;i<n;i++)
    {
    for(j=1;j<n-i;j++)
    printf("%f\t",diff[i][j]);
    printf("\n");
}
printf("enter the value of X at which you want to find out the value:\n");
scanf("%f",&X);
P=(X-x[0])/(x[1]-x[0]);
sum=0.0;
sum=sum+y[0];
for(i=0;i<=n-1;i++)
{
a=1.0;
for(j=0;j<=i-1;j++)
a=a*(P-j);
sum=sum+(a*diff[0][i])/fact(i);
}
printf("Value at X:%f",sum);
getch();
return 0;
}
    
    

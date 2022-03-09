#include<stdio.h>
#include<math.h>
int input_n_and_r(int*n,int*r)
{
  printf("enter the value of n\n");
  scanf("%d",n);
  printf("enter the value of r\n");
  scanf("%d",r);
}
int fact(int n)
{
  int f=1;
  for(int i=n;i>0;i--)
    {
      f=f*i;
    }
  return f;
}
int ncr(int n,int r)
{
 int result=fact(n)/(fact(n-r)*fact(r));
  return result;
  }
void output(int n,int r,int fact)
{
  printf("the valuse of %d C %d if %d\n",n,r,fact);
}
int main()
{
 int a,b,c;
  input_n_and_r(&a,&b);
  c=ncr(a,b);
  output(a,b,c);
  return 0;
}
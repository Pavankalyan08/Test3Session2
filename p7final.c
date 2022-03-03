#include <stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction fraction;
  int gcd(int a,int b)
  {
    int t;
    while(b!=0)
      {
        t=b;
        b=a%b;
        a=t;
      }
    return a;
  }
  fraction input_fraction()
  {
  fraction f;
  printf("input a fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
  }
  int main()
  {
    fraction f;
    f=input_fraction();
    printf("the fraction is %d/%d\n",f .num,f .den);
  }

    


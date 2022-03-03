#include <stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction fraction;

  int gcd(int a,int b)
{
  int t=1;
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
fraction add_fractions(fraction f1,fraction f2)
{
  fraction sum;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g= gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
}
void output(fraction f1,fraction f2,fraction sum)
{
  printf("the sum of the fractions %d/%d and %d/%d is  %d/%d"
,f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  fraction f1,f2,sum;
  f1= input_fraction();
  f2= input_fraction();
  sum=add_fractions(f1,f2);
  output(f1,f2,sum);
  return 0;
}

    


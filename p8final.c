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
int input_n()
{
  printf("enter n\n");
  scanf("%d",&n);
  return n;
}
fraction input_fraction()
{
  fraction f;
  printf("input a fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
  }
void input_n_fractions(int n,Fraction f[n])
{
  for (int i=0;i<n;i++)
    {
      f[i]=input_fractions;
    }
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
fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction sum;
  sum=f[0];
  for (int i=0;i<n;i++)
    {
      sum=add_n_fractions(sum);
    }
}
void output(fraction f1,fraction f2,fraction sum)
{
  printf("the sum of the fractions %d/%d and %d/%d is  %d/%d"
,f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  int n;
  n=input_n();
  Fraction f[n],sum;
  input_n_fractions(n,f);
  sum= add_n-fractions(n,f);
  output_n_fractions(n,f,sum);
  return 0;
}

    



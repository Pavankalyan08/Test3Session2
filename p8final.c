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
  int n;
  printf("enter n\n");
  scanf("%d",&n);
  return n;
}
fraction input_fraction()
{
  fraction f;
  printf("input the fraction\n");
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
fraction add_n_fractions(int n,fraction f[n])
{
  fraction sum;
  sum=f[0];
  for (int i=0;i<n;i++)
    { 
      sum=add_fractions(f[i],sum);
    }
  return sum;
  
}
void output(int n,fraction f[n],fraction sum)
{
  int i;
  for(i=0;i<n-1;i++)
    {
      printf("%d/%d",f[i].num,f[i].den);
    }
  printf("%d%d",f[i].num,f[i].den);
  printf(" is %d/%d\n",sum.num,sum.den);
}
int main()
{
  int n;
  n=input_n();
  fraction f[n],sum;
  n=input_n();
  sum= add_n_fractions(n,f);
  output(n,f,sum);
  return 0;
}

    



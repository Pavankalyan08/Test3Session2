#include <stdio.h>
#include<math.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction fraction;
int find_gcd(int a,int b)
{
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
  int main()
  {
    printf("%d\n",gcd(16,24));
  }
}
    


#include<stdio.h>

int gcd(int a, int b)
{
        while (a!=b)
        {
          if (a>b)
         {
                return gcd(a-b, b);
         }
            else 
         {
             return gcd(a, b-a);
         }
        
        }
        return a;
}


int main(){
    int a ,b;
    scanf("%d%d", &a, &b);
    printf("The gcd was %d", gcd(a,b));

}
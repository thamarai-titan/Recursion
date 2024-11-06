#include<stdio.h>
int lcm(int a, int b)
{
    while(a!=0)
    {
        if (a>b)
        {
            return lcm(a-b,b);
        }
        else{

            return lcm(a,b-a);
        }
        
    }
    return 
}
int main(){
    int  a,b;
    scanf("%d%d", &a, &b);
    int gcd = lcm(a,b);
    int lcm = a * b / gcd;
    printf("%d", lcm);
}
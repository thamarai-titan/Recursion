#include <stdio.h>

int climbingstairs(int n){
    if(n<=1) return n;
    return climbingstairs(n - 1) + climbingstairs(n -2);
}
int count(int x){
    return climbingstairs(x+1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("The number of possible ways =  %d", count(n) );
    return 0;
}

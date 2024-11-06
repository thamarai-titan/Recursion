#include <stdio.h>
int sumofn(int n){
    if(n == 0) return 0;
    return sumofn(n-1)+n;
}
int main() {
   int n;
   scanf("%d", &n);
   printf("%d", sumofn(n));
    return 0;
}

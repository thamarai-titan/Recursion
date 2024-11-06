#include <stdio.h>
int countDigits(int n){
    int count = 1;
    if(n <= 0) return 0;
    
    return count + countDigits(n/10);
}
int main() {
   int n;
   scanf("%d", &n);
   printf("%d", countDigits(n));
    return 0;
}

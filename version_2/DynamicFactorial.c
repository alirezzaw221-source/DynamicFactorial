#include <stdio.h>

long long fact(int n, int k) {
    if(k < 0 || k > n) return 0;
    if(k > n - k ) k = n - k;
    
    long long result = 1;
    for (int i = 1; i <= k; i++) {
        result = result * (n-k+i) / i;
    }
    return result;
}

int main(void) {
    int n,k;
    printf("Enter (n k): ");
    scanf("%d %d", &n, &k);

    printf("\nResult: %lld \n\n", fact(n,k));
}
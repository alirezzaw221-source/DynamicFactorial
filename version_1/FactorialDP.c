#include <stdio.h>

int dynamic(int n, int k, int dp[n+1][k+1])
{
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= (i < k? i: k); j++) {
            if(j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    return dp[n][k];
}

int main(void) {
    int n, k;
    printf("Enter (n k): ");
    scanf("%d %d", &n, &k);

    if (n < 0 || k < 0 || k > n){
        printf("Result: 0\n\n");
        return 0;
    }

    int dp[n+1][k+1];

    printf("\nResult: %d\n\n", dynamic(n, k, dp));
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int num;
        if (num % 2 == 1) {
                num=1;
            } else {
                num=0;
            }
        for (int j = 1; j <= i; j++) {
            printf("%d ",num);
        }
        printf("\n");
    }

    return 0;
}

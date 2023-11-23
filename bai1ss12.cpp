#include <stdio.h>

int main() {
    // Khai báo bi?n
    int a, b, c, sum, diff;

    printf("nhap so a: ");
    scanf("%d", &a);
    printf("nhap so b: ");
    scanf("%d", &b);
    printf("nhap so c: ");
    scanf("%d", &c);

    printf("tong va hieu:\n");
    
    sum = a + b;
    diff = a - b;
    if (sum > diff) {
        printf("tong: %d, hieu: %d\n", sum, diff);
    } else {
        printf("tong: %d, hieu: %d\n", diff, sum);
    }

    sum = b + c;
    diff = b - c;
    if (sum > diff) {
        printf("tong: %d, hieu: %d\n", sum, diff);
    } else {
        printf("tong: %d, hieu: %d\n", diff, sum);
    }

    sum = a + c;
    diff = a - c;
    if (sum > diff) {
        printf("tong: %d, hieu: %d\n", sum, diff);
    } else {
        printf("tong: %d, hieu: %d\n", diff, sum);
    }

    return 0;
}


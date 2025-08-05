#include <stdio.h>
int factorial(int n) {
    int f = 1;
    int i;
    for(i = 1; i <= n; i++)
        f = f * i;
    return f;
}
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    int rows, i, j;

    printf("Enter the number of rows:-");
    scanf("%d", &rows);

    i = 0;
    while(i < rows) {
        j = 0;
        while(j < rows - i - 1) {
            printf("  ");
            j++;
        }
        j = 0;
        while(j <= i) {
            printf("%4d", combination(i, j));
            j++;
        }

        printf("\n");
        i++;
    }

}

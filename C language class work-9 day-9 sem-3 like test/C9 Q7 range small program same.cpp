#include <stdio.h>
int main() {
    int p, q, r;
	printf("Enter the value of p, q and r: ");
    scanf("%d %d %d", &p, &q, &r);
	for (int i = p; i <= q; i++) {
        if (i % 10 == r || i == r) {
            continue;
        }
        printf("%d ", i);
    }
return 0;
}

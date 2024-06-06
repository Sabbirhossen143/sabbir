#include<stdio.h>
int main() {
	int n, k,m;
	while (scanf("%d %d", &n, &k) == 2) {
            m=n + (n - 1) / (k - 1);
		printf("%d\n",m );
	}
	return 0;
}

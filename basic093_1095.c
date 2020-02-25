#include <stdio.h>

int main() {
	int n, k, min;
	scanf("%d", &n);

	min = 23;
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		min = min < k ? min : k;
	}

	printf("%d", min);

	return 0;
}
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 1; ; i++) {
		sum += i;
		if (sum >= n) {
			printf("%d", i);
			break;
		}
	}

	return 0;
}
#include <stdio.h>

int gcd(int x, int y) {
	if (y == 0) return x;
	else return gcd(y, x%y);
}

int main() {
	int a, b, c, result;
	scanf("%d %d %d", &a, &b, &c);

	result = gcd(a, b);
	result = gcd(result, c);
	if (result == 0)
		printf("%d", result);
	else
		printf("%d", (a * b * c) / result);

	return 0;
}
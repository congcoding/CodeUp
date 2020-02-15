#include <stdio.h>

int main() {
	int h, b, c, s;
	scanf("%d %d %d %d", &h, &b, &c, &s);
	printf("%.1f MB", h / 8.0 * b * c * s / 1024 / 1024);
	return 0;
}
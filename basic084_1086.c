#include <stdio.h>

int main() {
	int w, h, b;
	scanf("%d %d %d", &w, &h, &b);
	printf("%.2f MB", w / 8.0 * h * b / 1024 / 1024);
	return 0;
}
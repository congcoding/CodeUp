#include <stdio.h>

int main() {
	int a, b, c, day;
	scanf("%d %d %d", &a, &b, &c);

	day = 1;
	while (day % a != 0 || day % b != 0 || day % c != 0) {
		day++;
	}

	printf("%d", day);

	return 0;
}
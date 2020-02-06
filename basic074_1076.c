#include <stdio.h>

int main() {
	char c;
	scanf("%c", &c);

	char result = 'a';
	while (result <= c) {
		printf("%c\n", result++);
	}

	return 0;
}
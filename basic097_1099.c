#include <stdio.h>

int main() {
	int r = 1, c = 1;
	int a[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	while (1) {
		if (r == 1 && c == 1) {
			if (a[r][c] == 2) {
				a[r][c] = 9;
				break;
			}
			a[r][c] = 9;
		}
		if (a[r][c + 1] == 0 || a[r][c + 1] == 2) {
			if (a[r][c + 1] == 2) {
				a[r][c + 1] = 9;
				break;
			}
			a[r][++c] = 9;
		}
		else if (a[r + 1][c] == 0 || a[r + 1][c] == 2) {
			if (a[r + 1][c] == 2) {
				a[r + 1][c] = 9;
				break;
			}
			a[++r][c] = 9;
		}
		else {
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
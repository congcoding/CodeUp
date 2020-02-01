#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int cnt = 0;
	again : 
	if (cnt < n) {
		int num;
		scanf("%d", &num);
		printf("%d\n", num);
		cnt++;
		goto again;
	}

	return 0;
}
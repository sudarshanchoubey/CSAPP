#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int uadd_ok(unsigned x, unsigned y) {
	unsigned sum = x + y;
	printf("FYI\tUNINT_MAX\tINT_MAX\tINT_MIN\n");
	printf("   %12u%12u%12d\n", UINT_MAX, INT_MAX, INT_MIN);
	printf("sum is %u\n", sum);
	return sum >= x;
}

int main(int argc, char *argv[]) {
	unsigned x, y;
	char *ptr;
	x = strtoul(argv[1], &ptr, 10);
	y = strtoul(argv[2], &ptr, 10);
	printf("uadd_ok: %d\n", uadd_ok(x, y));
	return 0;
}


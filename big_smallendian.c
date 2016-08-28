#include <stdio.h>

void big_smallendian() {
	int i = 1;
	unsigned char *c = (unsigned char*) &i;
	if(*c == 1) {
		printf("little endian\n");
	} else {
		printf("Big endian\n");
	}
}

int main() {
	big_smallendian();
	return 0;
}

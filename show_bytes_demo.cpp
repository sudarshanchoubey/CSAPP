#include "show_bytes_template.h"
#include <stdlib.h>

int main(int argc, char* arv[]) {
	int i = atoi(arv[1]);
	show_bytes(&i);
	show_bytess(&i);
	float f = 123;
	show_bytes(&f);
	show_bytess(&f);
	void *ptr;
	show_bytes(&ptr);
	show_bytess(&ptr);
	return 0;
}

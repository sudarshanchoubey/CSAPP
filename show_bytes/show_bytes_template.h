#include <stdio.h>

typedef unsigned char *byte_ptr;
typedef char *byte_ptrsigned;

template <class T>
void show_bytes(T *input) {
	byte_ptr input_bytes = (byte_ptr) input;
	for (int i = 0; i < sizeof (T); i++) {
		printf("%.2x ", input_bytes[i]);
	}
	printf("\n");
}

/*
 * %x is hexadecimal representation of unsigned integer.
 * If you print a number larger than 127 example 128 using a char *ptr like
 * in the function below instead of seeing 80 you shall see
 * ffffff80, because 128 is interpreted as -128 for signed char which when expanded to
 * integer becomes ffffff80 as expansion of signed numbers adds 1s to left.
 */

template <class T>
void show_bytess(T *input) {
	byte_ptrsigned input_bytes = (byte_ptrsigned) input;
	for (int i = 0; i < sizeof (T); i++) {
		printf("%.2x ", input_bytes[i]);
	}
	printf("\n");
}

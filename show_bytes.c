#include<stdio.h>

typedef unsigned char* byte_type;

void show_bytes(byte_type byte_sequence, size_t length) {
	for(int i = 0; i < length; i++) {
		printf("%.2x ", byte_sequence[i]);
	}
	printf("\n");
}

void show_int(int i) {
	show_bytes((byte_type) &i, sizeof (int));
}

void show_float(float i) {
	show_bytes((byte_type) &i, sizeof (float));
}

void show_double(double i) {
	show_bytes((byte_type) &i, sizeof (double));
}

int main(int argc, char **argv) {
	int i = 1;
	float k = 12345;
	double j = 12345;

	show_int(i);
	show_float(k);
	show_double(j);
	return 0;
}

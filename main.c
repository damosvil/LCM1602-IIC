#include <stdio.h>

#include "LCM1602-IIC.h"


int main(int argc, const char *argv[])
{
	
	if (argc != 3) {
		printf("Ejemplo: LCD /dev/i2c-0 0x20\r\n");
		return -1;
	}

	int file = initialize(argv[1], atoi(argv[2]));
	locate(file, 1, 0);
	print(file, "Hola mundo 2");
	finalize();

	printf("Used device %s 0x%x\r\n", argv[1], atoi(argv[2]));
}

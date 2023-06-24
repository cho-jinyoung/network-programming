// NBO(network byte order)
// HBO(host byte order)

#include <stddef.h>	// for size_t
#include <stdint.h>	// for uint8_t
#include <stdio.h>	// for printf

void dump(void *p, size_t n) {
	unit8_t* u8 = static_cast<unit8_t*>(p);
	size_t i=0;
	while(True){
		printf("%02X ", *u8++);
		if (++i >= n) break;
		if (i%8 == 0) printf(" ");
		if (i%16 == 0) printf("\n");
	}
	printf("\n")
}

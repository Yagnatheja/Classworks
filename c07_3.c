#include <stdio.h>
#define MAN(x, y, z) x > y ? 1 : z

int main(void) {
	int i=5, j=5, k=0;
    k = MAN(++i, j++, k);
    printf("%d, %d, %d\n", i, j, k);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,karesi,kupu;
	printf("SAYI     KARESI     KUPU\n");
	for(i=0;i<=10;i++)
	{
	karesi=i*i;
	kupu=i*i*i;
	printf("\n%2d %8d %10d\n",i,karesi,kupu);
	}
	getche();
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayi1,sayi2;
	printf("Ilk sayiyi giriniz:\n");
	scanf("%d", &sayi1);
	printf("Ikinci sayiyi giriniz:\n");
	scanf("%d", &sayi2);
	if(sayi1%sayi2==0)
	{
		printf("%d sayisi %d sayisinin tam katidir.", sayi1, sayi2);
	}
	else
	printf("%d sayisi %d sayisinin tam kati degildir.", sayi1, sayi2);
	getche();
	return 0;
}

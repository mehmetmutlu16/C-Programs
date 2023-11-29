#include <stdio.h>
#include <stdlib.h>

int main() {
	int kenar1,kenar2,kenar3;
	printf("Ucgenin ilk kenarini giriniz:\n");
	scanf("%d", &kenar1);
	printf("Ucgenin ikinci kenarini giriniz:\n");
	scanf("%d", &kenar2);
	printf("Ucgenin ucuncu kenarini giriniz:\n");
	scanf("%d", &kenar3);
	if(kenar1*kenar1==kenar2*kenar2+kenar3*kenar3)
		printf("Ucgeniniz dik ucgendir.");
	else if(kenar2*kenar2==kenar1*kenar1+kenar3*kenar3)
		printf("Ucgeniniz dik ucgendir.");
	else if(kenar3*kenar3==kenar1*kenar1+kenar2*kenar2)
		printf("Ucgeniniz dik ucgendir");
	else 
	printf("Ucgeniniz dik ucgen degildir");
	getche();
	return 0;
}

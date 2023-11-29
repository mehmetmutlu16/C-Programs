#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayi,onbinler,binler,yuzler,onlar,birler;
	printf("Bes basamakli bir sayi giriniz:\n");
	scanf("%d", &sayi);
	birler= sayi%10;
	onlar= sayi/10;
	onlar= onlar%10;
	yuzler= sayi/100;
	yuzler= yuzler%10;
	binler= sayi/1000;
	binler= binler%10;
	onbinler= sayi/10000;
	onbinler= onbinler%10;
	printf("%d %3d %3d %3d %3d", onbinler, binler, yuzler, onlar, birler);
	
	getche();
	
	return 0;
}

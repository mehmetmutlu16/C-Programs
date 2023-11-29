#include <stdio.h>
#include <stdlib.h>

int main() {
	int binler,yuzler,onlar,birler,gecici1,gecici2,gecici3,gecici4,secim,sayi;
	printf("Sifreleme icin 1, cozumleme icin 2 yaziniz.\n");
	scanf("%d", &secim);
	
	switch(secim){
		case 1:
		{printf("Lutfen bir sayi giriniz.\n");
		scanf("%d", &sayi);
		birler=sayi%10;
		binler=sayi/1000;
		yuzler=sayi/100;
		yuzler=yuzler%10;
		onlar=sayi/10;
		onlar=onlar%10;
		
		birler=birler+7;
		onlar=onlar+7;
		yuzler=yuzler+7;
		binler=binler+7;
		
		gecici1=birler;
		gecici2=yuzler;
		birler=gecici2;
		yuzler=gecici1;
		gecici3=onlar;
		gecici4=binler;
		onlar=gecici4;
		binler=gecici3;
		
		printf("%d %d %d %d", binler,yuzler,onlar,birler);
		break;
			}
			
		case 2:{
		printf("Lutfen binler basamagini giriniz.\n");
		scanf("%d", &binler);
		printf("Lutfen yuzler basamagini giriniz.\n");
		scanf("%d", &yuzler);
		printf("Lutfen onlar basamagini giriniz.\n");
		scanf("%d", &onlar);
		printf("Lutfen birler basamagini giriniz.\n");
		scanf("%d", &birler);
		
		binler=binler-7;
		yuzler=yuzler-7;
		onlar=onlar-7;
		birler=birler-7;
	
		gecici1=birler;
		gecici2=yuzler;
		birler=gecici2;
		yuzler=gecici1;
		gecici3=onlar;
		gecici4=binler;
		onlar=gecici4;
		binler=gecici3;
	
		printf("%d %d %d %d", binler,yuzler,onlar,birler);
		break;
		}
		
		default:{
			printf("Gecersiz sayi girisi yaptiniz.");
			break;
		}
	}
	getch();
	return 0;
}

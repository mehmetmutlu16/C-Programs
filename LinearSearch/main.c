#include <stdio.h>
#include <stdlib.h>

void linearSearch(int dizi[], int boyut,int aranan){
	int i;
	for(i=0;i<boyut;i++){
		if(aranan==dizi[i]){
			printf("Bulundu");
		}
	}
	else{
		printf("Bulunamadi");
	}
}

int main(int argc, char *argv[]) {
	
	int sayi;
	int boyut;
	int i;
	
	printf("Dizi boyutu giriniz:\n");
	scanf("%d", &boyut);
	
	int dizi[boyut];
	
	for(i=0;i<boyut;i++){
		printf("Dizinin %d. indisini giriniz:\n",i);
		scanf("%d", &dizi[i]);
	}
	
	int aranan;
	
	printf("Aramak istediginiz sayiyi giriniz:\n");
	scanf("%d", &aranan);
	
	linearSearch(dizi,boyut,aranan);
	
	return 0;
}

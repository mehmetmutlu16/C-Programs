#include <stdio.h>
#include <stdlib.h>


int BinarySearch(int dizi[], int boyut, int aranacak){
	int i,j,k;
	int sayi=boyut/2;
	
	for(k=0;k<boyut;k++){
		if(dizi[sayi]==aranacak){
		printf("Aradiginiz deger bulundu %d", dizi[sayi]);
		return 1;
		}
	else if(aranacak>dizi[sayi]){
		for(i=sayi;i<boyut;i++){
			if(aranacak==dizi[i]){
				printf("Bulundu %d", dizi[i]);
				return 1;
			}
		}
	}
	else{
		for(j=0;j<sayi;j++){
			if(aranacak==dizi[j]){
				printf("Bulundu %d", dizi[j]);
				return 1;
			}
		}
	}
}
}

int main(int argc, char *argv[]) {
	
	int i,boyut,aranacak;
	
	printf("Dizinin boyutunu giriniz:\n");
	scanf("%d", &boyut);
	
	int dizi[boyut];
	
	for(i=0;i<boyut;i++){
		printf("%d. indisi giriniz:\n", i);
		scanf("%d", &dizi[i]);
	}
	
	printf("Aramak istediginiz degeri giriniz:\n");
	scanf("%d", &aranacak);
	
	BinarySearch(dizi,boyut,aranacak);
	
	return 0;
}

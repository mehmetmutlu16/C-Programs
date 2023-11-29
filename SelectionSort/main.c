#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n,i,j;
	printf("Dizinizin boyutunu giriniz: \n");
	scanf("%d", &n);
	
	int dizi[n];
	
	printf("Dizinizi girin: \n");
	for(i=0;i<n;i++){
		scanf("%d", &dizi[i]);	
	}
		
	for(i=0;i<n;i++){
		int sayi = i;
		for(j=i+1;j<n;j++){
			if(dizi[j] <= dizi[sayi]){
				sayi = j;			
			}
		}
		swap(&dizi[sayi], &dizi[i]);
	}
	
	for(i=0;i<n;i++){
		printf("%d ", dizi[i]);
	}
	
	return 0;
}

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

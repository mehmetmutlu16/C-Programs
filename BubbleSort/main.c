#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void BubbleSort(int dizi[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(dizi[j]>dizi[j+1]){
				swap(&dizi[j], &dizi[j+1]);
			}
		}
	}
}

void DiziYazdir(int dizi[], int uzunluk){
	int i;
	for(i=0;i<uzunluk;i++){
		printf("%d ",dizi[i]);
	}	
}

int main(int argc, char *argv[]) {
	
	int dizi[] = {64,34,25,12,22,11,90};
	int n = sizeof(dizi) / sizeof(dizi[0]);
	BubbleSort(dizi,n);
	printf("Siralanan dizi: \n");
	DiziYazdir(dizi, n);


	return 0;
}

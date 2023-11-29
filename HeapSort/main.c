#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int dizi[], int N, int i){
	int uzunluk = i;
	int sol = 2*i+1;
	int sag = 2*i+2;
	
	if(sol<N && dizi[sol] > dizi[uzunluk]){
		uzunluk=sol;
	}
	
	if(sag<N && dizi[sag] > dizi[uzunluk]){
		uzunluk=sag;
	}
	
	if(uzunluk!=i){
		swap(&dizi[i], &dizi[uzunluk]);
		heapify(dizi, N, uzunluk);
	}
}

void heapSort(int dizi[], int N){
	int i;
	for(i = N/2-1; i>=0; i--){
		heapify(dizi,N,i);
	}
	for(i=N-1;i>=0;i--){
		swap(&dizi[0], &dizi[i]);
		heapify(dizi,i,0);
	}
}

void printArray(int dizi[], int N){
	int i;
	for(i=0; i<N;i++){
		printf("%d ", dizi[i]);
	}
}


int main(int argc, char *argv[]) {
	int dizi[] = {12,11,13,5,6,7};
	int N = sizeof(dizi)/sizeof(dizi[0]);
	
	heapSort(dizi, N);
	printf("Siralanmis dizi: \n");
	printArray(dizi, N);
	
	return 0;
}

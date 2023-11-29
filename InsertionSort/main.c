#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n;
	printf("Dizi Boyutunu Giriniz:\n");
	scanf("%d" , &n);
	
	int D[n],i;
	printf("Dizinizi doldurun: \n");
	for(i=0; i<n; i++){
		scanf("%d", &D[i]);
	}
	
	for(i=1;i<n;i++){
		int sayi = D[i];
		int j = i-1;
		while(j>=0 && D[j]>sayi){
			D[j+1] = D[j];
			j=j-1;
		}
		
		D[j+1] = sayi;
	}
	
	for(i=0; i<=6; i++){
		printf("%d ", D[i]);
	}
	return 0;
}

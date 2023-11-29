#include <stdio.h>
#include <stdlib.h>

insertionSort(int dizi[], int indeks){
	int i,k,ekle;
	
	for(i=1;i<indeks;i++){
		ekle = dizi[i];
		for(k=i-1;k>=0 && ekle<=dizi[k];k--){
			dizi[k+1]=dizi[k];
		}
		dizi[k+1]=ekle;
	}
}

selectionSort(int dizi[], int indeks){
	int i, j, enKucuk, index;
	for(i=0;i<(indeks-1);i++){
		enKucuk = dizi[indeks-1];
		index=indeks-1;
		for(j=i;j<(indeks-1);j++){
			if(dizi[j]<enKucuk){
				enKucuk=dizi[j];
				index = j;
			}
		dizi[index]=dizi[i];
		dizi[i]=enKucuk;
		}
	}
}

bubbleSort(int dizi[], int indeks){
	int gecici, k, hareket;
	for(hareket=0;hareket<indeks-1;hareket++){
		for(k=0;k<indeks-1-hareket;k++){
			if(dizi[k]>dizi[k+1]){
				gecici=dizi[k];
				dizi[k] = dizi[k+1];
				dizi[k+1]=gecici;
			}
		}
	}
}

/*mergeBirlesmeli(int dizi[], int sag, int sol){
	if((sol+sag)/2){	
		mergeBirlesmel(dizi,sol,k);
		mergeBirlesmel(dizi,k+1,sag);
		birlestir(dizi,sol,k,sag);
	}
}*/

/*mergeBirlestir(int dizi[], int sol, int k, int sag){
	int i,j;
	int M[];
	for(i=sol;j=k+1;i<=k && j<=sag){
		if(dizi[i]<dizi[j]){
			dizi[i];
			i++;
		}
		else{
			dizi[j];
			j++;
		}
	}
}*/

quickSort(int dizi[], int sol, int sag){
	
	int k, j;
	int ortadaki, gecici;
	
	k=sol;
	j=sag;
	ortadaki=dizi[(sol+sag)/2];
	do{
		while(dizi[k]<ortadaki && k<sag){
			k++;
		}
		while(ortadaki<dizi[j] && j>sol){
			j--;
		}
		if(k<=j){
			gecici=dizi[k];
			dizi[k]=dizi[j];
			dizi[j]=gecici;
			k++;
			j--;
		}
	}while(k<=j);
	
	if(sol<j){
		quickSort(dizi, sol, j);
	}
	if(k<sag){
		quickSort(dizi, k, sag);
	}
}

int main(int argc, char *argv[]) {
	
	int indeks,i;
	
	printf("Dizinin indeks sayisini giriniz:\n");
	scanf("%d", &indeks);
	
	int dizi[indeks];
	
	for(i=0;i<indeks;i++){
		printf("Dizinizin %d. indisini giriniz:\n", i);
		scanf("%d", &dizi[i]);	
	}
	
	for(i=0;i<indeks;i++){
		printf("%d ", dizi[i]);
	}
	printf("\n\n");
	
	int sol=0;
	int sag=indeks-1;
	
	//insertionSort(dizi,indeks);
	//selectionSort(dizi,indeks);
	//bubbleSort(dizi,indeks);
	quickSort(dizi,sol,sag);
	
	for(i=0;i<indeks;i++){
		printf("%d ", dizi[i]);
	}
	
	return 0;
}

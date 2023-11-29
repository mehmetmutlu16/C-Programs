#include <stdio.h>
#include <stdlib.h>

int *dizi = NULL;
int sira = 0;
int sirabasi = 0;
int boyut = 2;

int deque(){
	if(sira==sirabasi){
		printf("Sira bos");
		return -1;
	}
	return dizi[sirabasi++];
}

void toparla(){
	int i;
	
	if(sirabasi==0){
		return;
	}	
	for(i=0;i<boyut;i++){
		dizi[i]=dizi[i+sirabasi];
	}
	sira -= sirabasi;
	sirabasi = 0;
}

void enque(int a){
	int i;
	
	if(dizi==NULL){
		dizi = (int*)malloc(sizeof(int)*2);
	}
	if(sira>=boyut){
		boyut*=2;
		int *dizi2 = (int*)malloc(sizeof(int)*boyut);
		for(i=0;i<boyut/2;i++){
			dizi2[i] = dizi[i];
		}
		free(dizi);
		dizi=dizi2;
	}
	dizi[sira++]=a;	
}

int main() {
	int i;
	
	for(i=0;i<20;i++){
		enque(i*10);
	}
	for(i=0;i<10;i++){
		printf("%d ", deque());
	}
	
	
	return 0;
}

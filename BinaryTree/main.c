#include <stdio.h>
#include <stdlib.h>

struct n{
	int data;
	struct n *sol;
	struct n *sag;	
}dizi[2];

struct n* ekle(struct n* agac, int x){
	if(agac==NULL){
		struct n* root = (struct n*)malloc(sizeof(struct n));
		root->sol = NULL;
		root->sag = NULL;
		root->data = x;
		return root;
	}
	
	if(agac->data<x){
		agac->sag = ekle(agac->sag,x);
		return agac;
	}
	agac->sol = ekle(agac->sol,x);
	return agac;
}

void LNR(struct n *agac){
	if(agac==NULL){
		return;
	}
	LNR(agac->sol);
	printf("%d ", agac->data);
	LNR(agac->sag);
}

void RNL(struct n *agac){
	if(agac==NULL){
		return;
	}
	RNL(agac->sag);
	printf("%d ", agac->data);
	RNL(agac->sol);
}

int bul(struct n* agac, int aranan){
	if(agac==NULL){
		return -1;
	}
	if(agac->data == aranan){
		return 1;
	}
	if(bul(agac->sag,aranan)==1){
		return 1;
	}
	if(bul(agac->sol,aranan)==1){
		return 1;
	}
	return -1;
}



int main() {
	
	struct n* agac = NULL;
	
	agac=ekle(agac,12);
	agac=ekle(agac,20);
	agac=ekle(agac,132);
	agac=ekle(agac,214);
	agac=ekle(agac,11);
	agac=ekle(agac,30);
	agac=ekle(agac,31);
	agac=ekle(agac,34);
	agac=ekle(agac,54);
	agac=ekle(agac,45);
	agac=ekle(agac,13);
	
	LNR(agac);
	printf("\n");
	RNL(agac);
	printf("\nArama sonucu: %d ", bul(agac, 100));
	
	
	return 0;
}

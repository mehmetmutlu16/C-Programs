#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sayiuret(int s1)
{
	srand(time(NULL));	
	s1=rand()%1000+1;
	return s1;
}

int main(){
	int sayi,tahmin,i;
	char yenioyun='E';
	
	
	while(yenioyun=='E'||yenioyun=='e')
	{
		sayi=sayiuret(sayi);
		
		printf("Tahmin oyununa hosgeldiniz. 1 ile 1000 arasinda tahminde bulunun: ");
		scanf("%d",&tahmin);
		
		for(i=1;;i++)
		{	
			if(tahmin<sayi)
			{
		   		printf("\nCok kucuk. Tekrar deneyin: ");
				scanf("%d",&tahmin);		
     		}
     	
     		else if(tahmin>sayi)
			{
     	   		printf("\nCok buyuk. Tekrar deneyin: ");
				scanf("%d",&tahmin);
     		}
     	
     		else if(tahmin==sayi)
			{
     			printf("\nMukemmel bildiniz !\n");
		   		break;
        	}
		}
		printf("Tekrar oynamak ister misiniz(E/H): ");
		scanf(" %c",&yenioyun);
			
		if(yenioyun=='E'||yenioyun=='e')
		{
			continue;
		}
		if(yenioyun=='H'||yenioyun=='h')
		{
			break;
		}	
		else
		{
			break;
		}	
	}
	getch();
	return 0;
}

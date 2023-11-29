#include <stdio.h>
#include <stdlib.h>

void aylar (int ilkgun, int gunler,int ay);

int main(void) {
	
	int yil;
	printf("1994 ile 1999 arasinda bir yil giriniz.\n");
	scanf("%d", &yil);
	
	switch(yil)
	{
		case 1994:		
	aylar(5,31,1);
	aylar(1,28,2);
	aylar(1,31,3);
	aylar(4,30,4);
	aylar(6,31,5);
	aylar(2,30,6);
	aylar(0,31,7);
	aylar(0,31,8);
	aylar(3,30,9);
	aylar(5,31,10);
	aylar(1,30,11);
	aylar(3,31,12);
	
	break;
	
		case 1995:			
	aylar(6,31,1);
	aylar(2,28,2);
	aylar(2,31,3);
	aylar(5,30,4);
	aylar(0,31,5);
	aylar(3,30,6);
	aylar(5,31,7);
	aylar(1,31,8);
	aylar(4,30,9);
	aylar(6,31,10);
	aylar(2,30,11);
	aylar(4,31,12);
	
	break;
		
		case 1996:		
	aylar(0,31,1);
	aylar(3,29,2);
	aylar(4,31,3);
	aylar(0,30,4);
	aylar(2,31,5);
	aylar(5,30,6);
	aylar(0,31,7);
	aylar(3,31,8);
	aylar(6,30,9);
	aylar(1,31,10);
	aylar(4,30,11);
	aylar(6,31,12);
	
	break;
		
		case 1997:		
	aylar(2,31,1);
	aylar(5,28,2);
	aylar(5,31,3);
	aylar(1,30,4);
	aylar(3,31,5);
	aylar(6,30,6);
	aylar(1,31,7);
	aylar(4,31,8);
	aylar(0,30,9);
	aylar(2,31,10);
	aylar(5,30,11);
	aylar(0,31,12);
	
	break;
		
		case 1998:		
	aylar(3,31,1);
	aylar(6,28,2);
	aylar(6,31,3);
	aylar(2,30,4);
	aylar(4,31,5);
	aylar(0,30,6);
	aylar(2,31,7);
	aylar(5,31,8);
	aylar(1,30,9);
	aylar(3,31,10);
	aylar(6,30,11);
	aylar(1,31,12);
	
	break;
		
		case 1999:		
	aylar(4,31,1);
	aylar(0,28,2);
	aylar(0,31,3);
	aylar(3,30,4);
	aylar(5,31,5);
	aylar(1,30,6);
	aylar(3,31,7);
	aylar(6,31,8);
	aylar(2,30,9);
	aylar(4,31,10);
	aylar(0,30,11);
	aylar(2,31,12);
	break;
		default:printf("Gecersiz bir yil girdiniz."); break;
	}
	getch();
	return 0;
}

void aylar (int ilkgun, int gunler,int ay){
	int gun,gunsayisi;
	
	switch(ay)
	{
		case 1:printf("	OCAK   \n\n");   break;
		case 2:printf("	SUBAT   \n\n");	break;
		case 3:printf("	MART   \n\n"); 	break;
		case 4:printf("	NISAN   \n\n");	break;
		case 5:printf("	MAYIS   \n\n");	break;
		case 6:printf("	HAZIRAN   \n\n");	break;
		case 7:printf("	TEMMUZ   \n\n");	break;
		case 8:printf("	AGUSTOS   \n\n");	break;
		case 9:printf("	EYLUL   \n\n");	break;
		case 10:printf("	EKIM   \n\n");break;
		case 11:printf("	KASIM   \n\n");break;
		case 12:printf("	ARALIK   \n\n");break;
		
	}
	printf(" PT SA CA PE CU CT PA\n");
	printf(" -- -- -- -- -- -- --\n");
	
	for(gun=0;gun<ilkgun;gun++){
		printf("   ");
	}
	for(gunsayisi=1;gunsayisi<=gunler;gunsayisi++){
		
		if(gun>6){
			printf("\n");
			gun=1;
		}
		else{
			gun++;
		}
		printf("%3d", gunsayisi);
	}
	printf("\n\n");

}

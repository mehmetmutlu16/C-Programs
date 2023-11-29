#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,sayi;
	printf("Sayilar | Romen    \n");
	printf("        | Rakamlari\n");
	printf("===================\n");
	for(i=1;i<=100;i++)
	{
		sayi=i;
		printf("%2d         ",i);
		while(sayi != 0)
		{
			if (sayi >= 100)
			{
			printf("C");
			sayi=sayi-100;
			}
			else if (sayi >= 90)
			{
			printf("XC");
			sayi=sayi-90;
			}
			else if (sayi >= 50)
			{
			printf("L");
			sayi=sayi-50;
			}
			else if (sayi >= 40)
			{
			printf("XL");
			sayi=sayi-40;
			}
			else if (sayi >= 10)
			{
			printf("X");
			sayi=sayi-10;
			}
			else if (sayi >= 9)
			{
			printf("IX");
			sayi=sayi-9;
			}
			else if (sayi >= 5)
			{
			printf("V");
			sayi=sayi-5;
			}
			else if (sayi >= 4)
			{
			printf("IV");
			sayi=sayi-4;
			}
			else if (sayi >= 1)
			{
			printf("I");
			sayi=sayi-1;
			}
		}	
		printf("\n");
	}
	getch();
	return 0;
}

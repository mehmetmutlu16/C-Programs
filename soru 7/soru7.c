#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,j,sayi,k,l,m;
	
	sayi=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			sayi=j;
			sayi--;
			if(sayi%2!=0)
			{
				printf("1");
			}
			if(sayi%2==0)
			{
				printf("0");
			}
		}
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(l=4;l>=i;l--)
		{
			printf(" ");
		}
		for(m=1;m<=i;m++)
		{
			sayi=m;
			sayi--;
			if(sayi%2!=0)
			{
				printf("1");
			}
			if(sayi%2==0)
			{
				printf("0");
			}
		}
		printf("\n");
	}
	
	getch();
	
	return 0;
}

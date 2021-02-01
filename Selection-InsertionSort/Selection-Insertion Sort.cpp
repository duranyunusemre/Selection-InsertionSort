#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void selection(int dizi[],int);
void insertion(int dizi[],int);


int main()
{
	int SIZE=100;
	int dizi[100];
	srand(time(NULL));
	printf("------------Rasgele Uretilen 0-100 Arasindaki Sayilar(100 Adet)---------------\n\n ");
	for(int i=0;i<100;i++)
	{
		 dizi[i]=rand()%100;
		printf("%d-",dizi[i]);
	}
	printf("\n-------------------------------------------------------------------------------------------------------------------------------\n\n");
	
	selection(dizi,SIZE);
	printf("\n-------------------------------------------------------------------------------------------------------------------------------\n");
	insertion(dizi,SIZE);
	printf("\n-------------------------------------------------------------------------------------------------------------------------------\n");

	return 0;
}

void selection(int dizi[], int SIZE)
{
	int i,j,temp,max;
	for(i=0;i<SIZE/2;i++)
	{
		max=i;
		{
			for(j=i+1;j<SIZE/2;j++)
			{
				if(dizi[j]>dizi[max])
				max=j;
			}
			temp=dizi[i];
			dizi[i]=dizi[max];
			dizi[max]=temp;
		}		
	}
	printf("------------Ilk 50 eleman Selection Sort-----(Buyukten Kucuge)-----------------------------------------------------------------\n");
	for(int i=0;i<50;i++)
	{
		 
		printf("%d-",dizi[i]);
	}	
	
}


void insertion(int dizi[],int SIZE)
{
	int key,i,j;
	
	for(i=SIZE/2+1;i<SIZE;i++)
	{
		key=dizi[i];
		j=i-1;
		while(dizi[j]>key&&j>=SIZE/2)
		{
			dizi[j+1]=dizi[j];
			j--;
		}
		dizi[j+1]=key;
	}
	printf("\n\n-----------Son 50 eleman Insertion Sort----(Kucukten Buyuge)--------------------------------------------------------------------\n");
		for(int i=50;i<SIZE;i++)
	{
		printf("%d-",dizi[i]);
	}	
	getch();
}

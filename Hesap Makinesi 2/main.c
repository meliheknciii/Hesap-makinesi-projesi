#include <stdio.h>
#include <stdlib.h>


int main() {
	// Hesap makinesi projesi
	// tam sayilarla olusan program 
	
	float sayi1,sayi2;
	int secim;
	
	printf("sayi1:");
	scanf("%f",&sayi1);
	
	printf("sayi2:");
	scanf("%f",&sayi2);
	
	printf("islemi seciniz:\n");
	printf("1-topla\n");
	printf("2-carp\n");
	printf("3-fark\n");
	printf("4-bol\n");
	scanf("%d",&secim);
	
	if (secim == 1 )
	{
		printf("Sonuc:%f",sayi1+sayi2);
	}
	if (secim == 2)
	{
		printf("Sonuc:%f",sayi1*sayi2);
	}
	if (secim == 3 )
	{
		printf("Sonuc:%f",sayi1-sayi2);
	}
	if (secim == 4)
	{
		printf("Sonuc:%f",sayi1/sayi2);
	}
	

	
	
	
	
	
	return 0;
}

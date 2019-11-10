#include<stdio.h>
#include<string.h>

int main()
{
	
	char i[50],j[50];
	char k[] = "1234a";
	
	printf("Lutfen once adinizi ve sonra da sifrenizi giriniz\n");
	
gets(i);
		printf("Isim:%s\n", i);
		
gets(j);
	
	
	if(strcmp(k,j) == 0)
	{
	printf("Sifre dogru adamsin!!\n");
	printf("Isminiz: %s\t Sifreniz: %s", i, j);
		
	}
	
	else
	{
		printf("Sifre yanlis olm yandin sen");
		
	}
	
	return 0;
	
	

	
}

#include <stdio.h>

int main(){
	
	int sayi1,sayi2,tercih;
	
	
	printf("1-Toplama\n");
	printf("2-Cikarma\n");
	printf("3-Carpma\n");
	printf("4-Bolme\n");
	printf("5-Aritmetik Mod\n");
	printf("Bir islem seciniz: ");
	scanf("%d",&tercih);
	printf("\n---------------------\n");
	
	switch(tercih){
		case 1:
			printf("Secilen islem Toplama.\n");
			printf("Iki sayi girin: ");
			scanf("%d %d",&sayi1,&sayi2);
			printf("%d+%d=%d",sayi1,sayi2,sayi1+sayi2);
			break;
	case 2:
		printf("Secilen islem Cikarma.\n");
		printf("Iki sayi girin: ");
		scanf("%d %d",&sayi1,&sayi2);
		printf("%d-%d=%d",sayi1,sayi2,sayi1-sayi2);
			break;
	case 3:
		printf("Secilen islem Carpma.\n");
		printf("Iki sayi girin: ");
		scanf("%d %d",&sayi1,&sayi2);
		printf("%d*%d=%d",sayi1,sayi2,sayi1*sayi2);
			break;
	case 4:
		printf("Secilen islem Bolme.\n");
		printf("Iki sayi girin: ");
		scanf("%d %d",&sayi1,&sayi2);
		printf("%d/%d=%.3f",sayi1,sayi2,(float)sayi1/sayi2);
			break;
	case 5:
		printf("Secilen islem Aritmetik Mod.\n");
		printf("Iki sayi girin: ");
		scanf("%d %d",&sayi1,&sayi2);
		printf("%d%%%d=",sayi1,sayi2);
		printf("%d",sayi1%sayi2);
			break;
	}
	return 0;
}

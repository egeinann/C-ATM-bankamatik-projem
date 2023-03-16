#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int tutar,islem; // tutarý float tanýmlamadým çünkü hiç ondalýklý sayýlar ile para çeken veya yatýran görmedim :D
    double bakiye=5000;
    int sifre;
    
    printf("Bakiyeniz : %.2lf",bakiye); // bakiye gösteriliyor.
    printf("\nKart Sifreniz : 2002"); // kart þifresi gösteriliyor
    printf("\n\nLutfen  4 haneli sifrenizi giriniz : "); // þifre isteniliyor
    scanf("%d",&sifre); // þifre artýk bellekte
    
    if(sifre!=2002) // þifre yanlýþ mý gir içeri
    {
    	while(sifre!=2002) // sifre yanlýþ girildiði sürce döndür
    	{
    		system("color 4");
    		printf("Sifre HATALI Tekrar deneyiniz !!! Sifre : "); // þifreyi iste
    		scanf("%d",&sifre);
    		if(sifre==2002) // þifre doðru ise bloða gir ve ayrýl
    		{
    			break; // ayrýl
			}
		}
		system("color B"); // ayrýldýk... baþla iþlemlere
		printf("\n--------------- GIRIS YAPILDI ------------------------------------------------------------------");
	    printf("\nmevcut bakiyeniz : %lf",bakiye);
		printf("\nPara cekmek icin 1 e / yatirmak icin 2 ye basiniz...\n\n");
		printf("yapmak istediginiz islem : ");
		scanf("%d",&islem);
    
	switch(islem)
	{
		case 1 : printf("\n\nCekmek istediginiz tutari giriniz : ");
		scanf("%d",&tutar);
		if(tutar>bakiye) // bakiyede 5000 var. Daha fazla para isterse bloða Gir
		{
			while(tutar!=bakiye || tutar>bakiye) // bakiye yetersiz olduðu sürece döndür
    		{
    		system("color 4");
    		printf("\n\nBakiye yetersiz !!! Tekrar deneyiniz : "); // þifreyi iste
    		scanf("%d",&tutar);
    		if(tutar==bakiye || tutar<bakiye) // bakiye yeterliyse veya eþitse ayrýlmak için bloða gir
    		{
    			break; // ayrýl
			}
			}
			bakiye-=tutar;
			system("color A");
			printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye);
		}
		else
		{
			bakiye-=tutar;
			system("color A");
			printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye);
		} break;
		
		
	
		case 2 : printf("\n\nYatirmak istediginiz tutari giriniz : ");
		scanf("%d",&tutar);
		bakiye+=tutar;
		printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye); break;
		
		default : system("color 4");
		printf("\n\n !!! HATA (1 ve 2 disinda deger girilemez)\n\n"); break;	
	}
	}
	else if(sifre==2002) // sifre 2002 ise BANMATÝÐÝ AÇ
	{
		system("color B");
		printf("\n--------------- GIRIS YAPILDI ------------------------------------------------------------------");
	    printf("\nmevcut bakiyeniz : %lf",bakiye);
		printf("\nPara cekmek icin 1 e / yatirmak icin 2 ye basiniz...\n\n");
		printf("yapmak istediginiz islem : ");
		scanf("%d",&islem);
    
	switch(islem)
	{
		case 1 : printf("\n\nCekmek istediginiz tutari giriniz : ");
		scanf("%d",&tutar);
		if(tutar>bakiye) // bakiyede 5000 var. Daha fazla para isterse bloða Gir
		{
			while(tutar!=bakiye || tutar>bakiye) // bakiye yetersiz olduðu sürece döndür
    		{
    		system("color 4");
    		printf("\n\nBakiye yetersiz !!! Tekrar deneyiniz : "); // þifreyi iste
    		scanf("%d",&tutar);
    		if(tutar==bakiye || tutar<bakiye) // bakiye yeterliyse veya eþitse ayrýlmak için bloða gir
    		{
    			break; // ayrýl
			}
			}
			bakiye-=tutar;
			system("color A");
			printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye);
		}
		else
		{
			bakiye-=tutar;
			system("color A");
			printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye);
		} break;
		
		
	
		case 2 : printf("\n\nYatirmak istediginiz tutari giriniz : ");
		scanf("%d",&tutar);
		bakiye+=tutar;
		printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye); break;
		
		default : system("color 4");
		printf("\n\n !!! HATA (1 ve 2 disinda deger girilemez)\n\n"); break;	
	}
	}
    else // bu bloða girmesi ÝMKANSIZ ama nolur nolmaz ekledim :)
    {
    	printf("hata");
	}
	
	return 0;
}

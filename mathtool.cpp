#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
int islemsec(){
	char islem;
	printf("\n[1]Yuzde hesabi");	
	printf("\n[2]Hipotenus hesabi");
	printf("\n[3]Kare/Kup hesabi");
	printf("\n[4]4 İslem");	
	printf("\n[5]Cikis");	
	printf("\n:");
	islem=getch();
	printf("%c",islem);
	return islem;
}

int homepage(){
	int hom;
	printf("\nDevam Etmek icin [1]");
	printf("\nAna sayfaya gitmek icin [2]");
	printf("\n:");
	hom = getch();
	return hom;
	
}
int kare_kup(){
	int sec;
	printf("\n[1]Kare hesaplama");
	printf("\n[2]Kup hesaplama");
	printf("\n:");
	sec = getch();
	if(sec == '1'){
		int ilkkare;
		int sonuckare;
		printf("\nKaresi alinacak sayi :");
		scanf("%d",&ilkkare);
		sonuckare = ilkkare;
		sonuckare*=sonuckare;
		printf("%d nin karesi %d dir",ilkkare,sonuckare);		
	}
	if(sec == '2'){
		int ilkkup;
		int sonuckup;
		printf("\nKupu alinacak sayi :");
		scanf("%d",&ilkkup);
		sonuckup = ilkkup;
		sonuckup = sonuckup*sonuckup*sonuckup;
		printf("%d nin kupu %d dir",ilkkup,sonuckup);		
	}	
	
	
	return 0;
		
}
int hipotenus()
{
	int a;
	int b;
	int c;
	printf("\nA : ");
	scanf("%d",&a);
	printf("\nB : ");
	scanf("%d",&b);
	a = a*a;
	b = b*b;
	c = a+b;
	c = sqrt(c);
	printf("\nHip : %d",c);
	
	
	return 0;
}

int yuzde()
{
	int sec;
	float a=0;
	float b=0;	
	printf("\n[1]A sayisinin %%B'si kactir");
	printf("\n[2]A sayisi, %B kadar artirilirsa kac olur?");
	printf("\n:");
	sec = getch();
	if(sec == '1'){
		printf("\n[1]A sayisinin %%B'si kactir");
		printf("\nA sayisi : ");
		scanf("%f",&a);
		printf("\nB sayisi : ");
		scanf("%f",&b);	
		printf("%.0f sayisinin %%%.0f'i %.2f",a,b,(a*b)/100);	
	}
	if(sec == '2'){
		printf("\n[2]A sayisi, %%B kadar artirilirsa kac olur?");
		printf("\nA sayisi : ");
		scanf("%f",&a);
		printf("\nB sayisi : ");
		scanf("%f",&b);	
		printf("%.0f sayisi %%%.0f kadar artirilirsa cevap %.2f olur.",a,b,((a*b)/100)+a);	
	}	
	return 0;
}

int dortislem()
{
	int a;
	int b;
	int sec;
	printf("\n[1]Toplama");
	printf("\n[2]Cikarma");
	printf("\n[3]Carpma");
	printf("\n[4]Bolme");
	printf("\n:");
	sec = getch();
	if(sec == '1'){
		printf("TOPLAMA ISLEMI");
		printf("\nA sayisi : ");
		scanf("%d",&a);
		printf("\nB sayisi : ");
		scanf("%d",&b);
		printf("%d + %d = %d",a,b,a+b);		
	}
	if(sec == '2'){
		printf("CIKARMA ISLEMI");
		printf("\nA sayisi : ");
		scanf("%d",&a);
		printf("\nB sayisi : ");
		scanf("%d",&b);
		printf("%d - %d = %d",a,b,a-b);			
	}	
	if(sec == '3'){
		printf("CARPMA ISLEMI");
		printf("\nA sayisi : ");
		scanf("%d",&a);
		printf("\nB sayisi : ");
		scanf("%d",&b);
		printf("%d x %d = %d",a,b,a*b);	
	}	
	if(sec == '4'){
		printf("BOLME ISLEMI");
		printf("\nA sayisi : ");
		scanf("%d",&a);
		printf("\nB sayisi : ");
		scanf("%d",&b);
		printf("%d / %d = %d",a,b,a/b);	
	}	
}
int main(){
	printf("github.com/MrTalas");
	system("color 3");
	setlocale(LC_ALL,"Turkish");
	setup:
	int islem=islemsec();
	bool homs=false;
	if(islem == '1'){
		yuzde:
		yuzde();
		int hom=homepage();
		if(hom == '1')goto yuzde;
		if(hom == '2')goto setup;homs=true;	
	}
	if(islem == '2'){
		hipotenus:
		hipotenus();
		int hom=homepage();
		if(hom == '1')goto hipotenus;
		if(hom == '2')goto setup;
	
	}
	if(islem == '3'){
		kare_kup:
		kare_kup();
		int hom=homepage();
		if(hom == '1')goto kare_kup;
		if(hom == '2')goto setup;			
	}
	if(islem == '4'){
		dort:
		dortislem();
		int hom=homepage();
		if(hom == '1')goto dort;
		if(hom == '2')goto setup;
			
	}	
	if(islem == '5'){
		printf("\nExit !");
		for(int i=5;i>0;i--){
	    printf("\nProgram %d saniye icinde kapanacak.",i);
		Sleep(1000);
		}
		exit(0);
	}	
	else{
		goto setup;
	}
	return 0;
	
	
}

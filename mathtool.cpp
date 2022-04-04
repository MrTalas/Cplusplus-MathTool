#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#define PI 3.14159265
int islemsec(){
	int islem=0;
	printf("\n[1]Yuzde hesabi");	
	printf("\n[2]Hipotenus hesabi");
	printf("\n[3]Kare/Kup hesabi");
	printf("\n[4]4 İslem");	
	printf("\n[5]Karekok hesabi");	
	printf("\n[6]Faktoriyel hesabi");		
	printf("\n[7]EBOB-EKOK hesabi");
	printf("\n[8]Alan hesabi");	
	printf("\n[9]Trigonometrik fonksiyonlar");				
	printf("\n[0]Cikis");	
	printf("\n:");
	scanf("%d",&islem);
	return islem;
}

int homepage(){
	int hom;
	printf("\n\nDevam Etmek icin [1]");
	printf("\nAna sayfaya gitmek icin [2]");
	printf("\n:");
	hom = getche();
	system("cls");
	return hom;
	
}
int kare_kup(){
	int sec;
	printf("\n\tKARE-KUP HESAPLAMA");	
	printf("\n[1]Kare hesaplama");
	printf("\n[2]Kup hesaplama");
	printf("\n:");
	sec = getche();
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

int karekok(){
	int ilkkok;
	int kok;
	printf("\n\tKAREKOK HESAPLAMA");	
	printf("\nKarekoku alinacak sayi :");
	scanf("%d",&ilkkok);
	kok = ilkkok;
	kok = sqrt(ilkkok);
	printf("%d nin karekoku %d dir",ilkkok,kok);
}
int hipotenus()
{
	int a;
	int b;
	int c;
	printf("\n\tHIPOTENUS HESAPLAMA");
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
	printf("\n\tYUZDE HESAPLAMA");	
	printf("\n[1]A sayisinin %%B'si kactir");
	printf("\n[2]A sayisi, %B kadar artirilirsa kac olur?");
	printf("\n:");
	sec = getche();
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
	sec = getche();
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

int faktoriyel(){
  int i = 0, faktoriyel = 1, sayi = 0;
  printf("\n\tFAKTORİYEL HESAPLAMA");
  fprintf(stdout, "\nSayi giriniz: ");
  fscanf(stdin, "%d", &sayi);

  for(i = 2; i <= sayi; i++){
    faktoriyel *= i;
  }

  fprintf(stdout, "\n%d!=%d",sayi,faktoriyel);
  

  return 0;

  
}


int ebob_ekok(){
	int sayi1,sayi2;
	int buyuksayi,kucuksayi;
	int sayac;
	int EKOK,EBOB;
	printf("\n\tEBOB-EKOK HESAPLAMA");
	printf("\n1.sayi :");
	scanf("%d",&sayi1);
	printf("\n2.sayi :");
	scanf("%d",&sayi2);	
	if(sayi1>sayi2){
		buyuksayi=sayi1;
		kucuksayi=sayi2;
	}
	else{
		buyuksayi=sayi2;
		kucuksayi=sayi1;
	}
	sayac=buyuksayi;
	
	while(1){
		if(sayac%buyuksayi==0 && sayac%kucuksayi==0){
			EKOK=sayac;
			break;
		}
		sayac++;
	}
	
	sayac=kucuksayi;
	while(1){
		if(buyuksayi%sayac==0 && kucuksayi%sayac==0){
			EBOB=sayac;
			break;
		}
		sayac--;
	}
	
	printf("%d ve %d sayisinin ;\n",sayi1,sayi2);
	printf("EKOKU : %d \nEBOBU : %d",EKOK,EBOB);	
}

int alan(){
	int sec=0;
	int kenar1=0;
	int kenar2=0;
	printf("\n\tALAN HESAPLAMA");
	printf("\n[1]Kare alan hesaplama");
	printf("\n[2]Dikdortgen alan hesaplama");
	printf("\n[3]Ucgen alan hesaplama");
	printf("\n:");
	scanf("%d",&sec);
	if(sec==1){
			printf("\n\tKARE ALAN HESAPLAMA");
			printf("\n\nKarenin bir kenarini giriniz :");
			scanf("%d",&kenar1);
			kenar1 = pow(kenar1,2);
			printf("\nKarenin alani : %d",kenar1);					
	}
	
	if(sec==2){
			printf("\n\tDIKDORTGEN ALAN HESAPLAMA");
			printf("\n\nDikdortgenin uzun kenarini giriniz :");
			scanf("%d",&kenar1);
			printf("Dikdortgenin kisa kenarini giriniz :");	
			scanf("%d",&kenar2);
			kenar1=kenar1*kenar2;
			printf("\nDikdortgenin alani : %d",kenar1);		
	}	

	if(sec==3){
			printf("\n\tUCGEN ALAN HESAPLAMA");
			printf("\nTaban :");
			scanf("%d",&kenar1);
			printf("Yukselik :");	
			scanf("%d",&kenar2);
			kenar1=(kenar1*kenar2)/2;
			printf("\nUcgenin alani : %d",kenar1);		
	}		

	
	
	return 0;
	
	/*switch(sec){
		case 1:
			printf("\nKARE ALAN HESAPLAMA");
			printf("\n\nKarenin bir kenarini giriniz :");
			scanf("%d",&kenar1);
			kenar1 = pow(kenar1,2);
			printf("%d",kenar1);
			printf("Karenin alani : %d",kenar1);
			break;
		case 2:
			printf("\nDIKDORTGEN ALAN HESAPLAMA");
			printf("\n\Dikdortgenin uzun kenarini giriniz :");
			scanf("%d",&kenar1);
			printf("\n\Dikdortgenin kisa kenarini giriniz :");	
			scanf("%d",&kenar2);
			kenar1=kenar1*kenar2;
			printf("Dikdortgenin alani : %d",kenar1);
			break;	
		case 3:
			printf("\nUCGEN ALAN HESAPLAMA");
			printf("\n\Taban :");
			scanf("%d",&kenar1);
			printf("\n\Yukselik :");	
			scanf("%d",&kenar2);
			kenar1=(kenar1*kenar2)/2;
			printf("Ucgenin alani : %d",kenar1);
			break;
		default:
			printf("Gecersiz islem");	
			break;						
	}*/
}

int trigonometri(){
	char sec;
	float sayi=0;
	float sayicopy=0;
	printf("\n\tTRIGONOMETRIK FONKSIYONLAR");
	printf("\n[1]Sinus(Sin)");
	printf("\n[2]Cosinus(Cos)");
	printf("\n[3]Tanjant(Tan)");
	printf("\n[4]Kotanjant(Cot)");
	printf("\n:");
	sec=getche(); 
	switch(sec){
		case '1':
			printf("\n\tSinus(Sin) Hesaplama");
			printf("\nsin(");
			scanf("%f",&sayi);
			sayicopy = sayi;
			system("cls");
			printf("\n\tSinus(Sin) Hesaplama");
			printf("sin(%.0f) = %.12f",sayicopy,sin(sayi*(PI/180)));
			break;
		case '2':
			printf("\n\tCosinus(Cos) Hesaplama");
			printf("\ncos(");
			scanf("%f",&sayi);
			sayicopy = sayi;
			system("cls");
			printf("\n\tCosinus(Cos) Hesaplama");
			printf("sin(%.0f) = %.12f",sayicopy,cos(sayi*(PI/180)));
			break;
		case '3':
			printf("\n\tTanjant(Tan) Hesaplama");
			printf("\ntan(");
			scanf("%f",&sayi);
			sayicopy = sayi;
			system("cls");
			printf("\n\tTanjant(Tan) Hesaplama");
			printf("\nsin(%.0f) = %.12f",sayicopy,tan(sayi*(PI/180)));
			break;
		case '4':
			printf("\n\tKotanjant(Cot) Hesaplama");
			printf("\ncot(");
			scanf("%f",&sayi);
			sayicopy = sayi;
			system("cls");
			printf("\n\tKotanjant(Cot) Hesaplama");
			printf("\nsin(%.0f) = %.12f",sayicopy,cos(sayi*(PI/180)/sin(sayi*(PI/180))));
			break;	
		default:
			break;
	}
	
	
	return 0;
}
int main(){
	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console,3);
	printf("github.com/MrTalas");
	setlocale(LC_ALL,"Turkish");
	setup:
	int islem=islemsec();
	bool homs=false;
	if(islem == 1){
		yuzde:
		fflush(stdin);
		system("cls");
		yuzde();
		int hom=homepage();
		if(hom == '1')goto yuzde;
		if(hom == '2')goto setup;homs=true;	
	}
	if(islem == 2){
		hipotenus:
		fflush(stdin);
		system("cls");
		hipotenus();
		int hom=homepage();
		if(hom == '1')goto hipotenus;
		if(hom == '2')goto setup;
	
	}
	if(islem == 3){
		kare_kup:
		fflush(stdin);
		system("cls");
		kare_kup();
		int hom=homepage();
		if(hom == '1')goto kare_kup;
		if(hom == '2')goto setup;			
	}
	if(islem == 4){
		dort:
		fflush(stdin);	
		system("cls");
		dortislem();
		int hom=homepage();
		if(hom == '1')goto dort;
		if(hom == '2')goto setup;
			
	}
	if(islem == 5){
		karekok:
		fflush(stdin);	
		system("cls");
		karekok();
		int hom=homepage();
		if(hom == '1')goto karekok;
		if(hom == '2')goto setup;
			
	}	
	if(islem == 6){
		faktoriyel:
		fflush(stdin);	
		system("cls");
		faktoriyel();
		int hom=homepage();
		if(hom == '1')goto faktoriyel;
		if(hom == '2')goto setup;
			
	}
	if(islem == 7){
		eb_ek:
		fflush(stdin);	
		system("cls");
		ebob_ekok();
		int hom=homepage();
		if(hom == '1')goto eb_ek;
		if(hom == '2')goto setup;
			
	}
	if(islem == 8){
		alann:
		fflush(stdin);	
		system("cls");
		alan();
		int hom=homepage();
		if(hom == '1')goto alann;
		if(hom == '2')goto setup;
			
	}
	if(islem == 9){
		trigonometrii:
		fflush(stdin);	
		system("cls");
		trigonometri();
		int hom=homepage();
		if(hom == '1')goto trigonometrii;
		if(hom == '2')goto setup;
			
	}				
	if(islem == 0){
		int fastex;
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

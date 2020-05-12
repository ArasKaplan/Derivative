#include<stdio.h>
#include<math.h>
#include <cstdlib>

double Fonksiyon_deger_bul(double x,double fonksiyon[100],int n){
	int i;
	int j;
	double deger;
	deger=0;
	double z;
	for(i=0;i<=n;i++){
		z=1;
		for(j=0;j<i;j++){
			z=z*x;
		}
		deger=deger+z*fonksiyon[i];
	}
	return deger;
}
int main(){
	double x;
	double delta;
	double fx1,fx2;
	printf("x degerini giriniz");
	scanf("%lf",&x);
	int derece;
	printf("Delta degeri giriniz");
	scanf("%lf",&delta);
	printf("Fonksiyonun derecesini giriniz");
	scanf("%d",&derece);
	double fonksiyon[100];
	double turev;
	int i=0;
	for(i=0;i<=derece;i++){
		printf("Fonksiyonun x^%d elemaninin katsayini giriniz",i);
		scanf("%lf",&fonksiyon[i]);
	}
	fx1=Fonksiyon_deger_bul(x+delta,fonksiyon,derece);
	fx2=Fonksiyon_deger_bul(x-delta,fonksiyon,derece);
	turev=(fx1-fx2)/(2*delta);
	printf("%lf",turev);
}

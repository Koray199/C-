#include<stdio.h>
#define PI 3.14
int main(){
	
	
	
	
int yaricap;
float hacim;
float alan;
printf("Krenin yaricapini giriniz");
scanf("%d",&yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	
	printf("kurenin hacmi %.2f dir",hacim);

	
	alan = PI*(yaricap*yaricap);
	printf("kurenin alaný %2.f dir\n",alan);
	
	
	
	return 0;
}

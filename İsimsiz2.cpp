#include <stdio.h>
int main(){
	
	int n,hane=0,toplam=0;
	
	printf("SAYIYI GIRINIZ");
	scanf("%d",&n);
	
	do {
		
		
		
		toplam += (n%10);
		
		hane++;
		n = n/10;
		
		
		
		
		
	}	
		while(n>0);
		
		printf("Rakamlari toplami %d %d haneli",toplam,hane);
		
	
		
	
	
	
	
	
	
	
	
	
	
		
	
	
	return 0;
	
}

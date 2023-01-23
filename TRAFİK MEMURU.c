#include<stdio.h>
#include <stdlib.h>
int main(){



 int hiz;
 char tur;



 
 
 printf("arac turunu girin:");
 scanf("%c",&tur);
 
	printf("\n");
	
 printf("hiz degerini girin:");
 scanf("%d",&hiz);	

 if (tur=='o') {

 	printf("\n arac turu otomobildir\n");
 	if (hiz>90){
 		printf("Arac cezalidir.\n");
	 }
	 else {
		printf("Arac Kurallara Uygun.\n");
	 }
 } 
 else if (tur=='t') {
 	printf("arac turu otobustur.\n");
 	if (hiz>70) {
 		printf("Arac cezalidir.\n");	
	 }
 
	else {
		printf("arac kurallara uygundur.\n");
	}
}
	
	else if (tur=='k') {
	printf("arac turu kamyon.\n");
	if(hiz>50) {
	printf("arac cezalidir.\n");
  }  
     else {
   	printf("arac kurallara uygundur.\n ");
   }
  
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

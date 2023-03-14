//REVETER VETOR A EM B
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int a[3],b[3],i=0, c;
	
	printf("***A e B***");
	for(i=0;i<3;i++){
		printf("\nVetor 'A': ");
		scanf("%i", &a[i]);
	}
	
	system("cls");
	
	for(i=0;i<3;i++){
		printf("\nVetor 'A':|%i| ", a[i]);
		//c=0;
		
	}
	 
	for(i=3-1;i>=0;i--){
		b[i]=a[i]; //VETOR 'B' REVERTENDO O VETOR 'A'
		//c++;
		printf("\n\n");
		printf("Vetor 'B': |%i| ",b[i]);
	
	}
	
	getch();
	return 0;
}

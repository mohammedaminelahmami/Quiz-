#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int a,i,j;
	int p = 0;
	int x = 8;
	
	printf("|| Bienvenue au Quiz ! ||\n");
	
	for(i = 1; i <= 4; i++){
	
	switch(i){
		case 1: {
			for(j = 1; j <= 3; j++){
				printf("\t\t\t\tQ1 : 500 + 23 = ?? \n 1- 552\n 2- 540\n 3- 523\n");
				scanf("%d", &a);
				if(a == 3){
					printf("Correct Answer !!  %d Pnts", p+=8);
					
					break;
				}else{
					printf("Wrong Answer !! %dPnts", p-=2);
				}
				}
				break;
				}
				
		case 2: {
			for(j = 1; j <= 3; j++){
				printf("\tQ1 : 17 + 23 = ?? \n 1- 30\n 2- 40\n 3- 25\n");
				scanf("%d", &a);
				if(a == 2){
					printf("Correct Answer !!  %d Pnts", p+=8);
					break;
				}else{
					printf("Wrong Answer !!  %dPnts", p-=2);
				}
				}
				break;
				}
				
		case 3: {
			for(j = 1; j <= 3; j++){
				printf("\tQ1 : 11 + 23 = ?? \n 1- 34\n 2- 40\n 3- 25\n");
				scanf("%d", &a);
				if(a == 1){
					printf("Correct Answer !! %d Pnts", p+=8);
					break;
				}else{
					printf("Wrong Answer !!  %dPnts", p-=2);
					
				}
				}
				break;
				}
				}
				}
	
	printf("\tResult : %d Pnts !!", p);
	
	


 
 







	

	return 0;
}
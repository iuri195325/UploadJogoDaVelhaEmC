#include <stdio.h>
#include <stdlib.h>


int main(){
	char jogo[3][3];
	int i,k;
	int op,l,c,erro = 0,vitoria =0,cont=0;
	
	for(i = 0;i<3;i++){
		for(k=0;k<3;k++){
			jogo[i][k] = ' ';
		}
	}
	    do{
			for(i = 0;i<3;i++){
				for(k=0;k<3;k++){
					if(k==0 ){
						printf("\t %c ", jogo[i][k]);
					}else{
						printf("| %c ", jogo[i][k]);
					}
				}
			
				printf("\n");
				if(i==2){
					printf("");
				}else{
					printf("\t-----------\n");
			   }
			}
	
		
		
		if(erro%2==0){
		
			printf("\nJOGADOR X:\n");
			printf("Escolha uma LINHA: ");
			scanf("%d", &l);
			printf("COLUNA: ");
			scanf("%d", &c);
			if(c>3 || c < 1 || l < 1 || l > 3){
				printf("ERRO PORFAVOR SELECIONE UMA OP VALIDA");
				return 0;
			}
			l=l-1;
			c=c-1;
			if(jogo[l][c]=='X' || jogo[l][c]=='O'){
				printf("Esta op ja esta preenchida..:");
				return 0;
			}
			if(jogo[l][c]==' '){
					jogo[l][c]='X';
				}	
		}else{
			printf("\nJOGADOR O:\n");
			printf("Escolha uma LINHA: ");
			scanf("%d", &l);
			printf("COLUNA: ");
			scanf("%d", &c);
			if(c>3 || c < 1 || l < 1 || l > 3){
				printf("ERRO PORFAVOR SELECIONE UMA OP VALIDA");
				return 0;
			}
			l=l-1;
			c=c-1;
			if(jogo[l][c]=='X' || jogo[l][c]=='O'){
				printf("Esta op ja esta preenchida..:");
				return 0;
			}
				if(jogo[l][c]==' '){
					jogo[l][c]='O';
				}
		}
		
		//condição de empate//
		 if(jogo[0][0]!=' ' && jogo[0][1]!=' ' && jogo[0][2]!=' ' && jogo[1][0]!=' ' && jogo[1][1]!=' ' && jogo[1][2]!=' ' && jogo[2][0]!=' ' && jogo[2][1]!=' ' && jogo[2][2]!=' ')
		{
			vitoria=3;
		}
		else if(jogo[0][0]=='X' && jogo[0][1]=='X' && jogo[0][2]=='X' ){
			vitoria = 2;
			
			
		}
		//condição de vitoria X//
		
		else if(jogo[1][0]=='X' && jogo[1][1]=='X' && jogo[1][2]=='X' ){
			vitoria =2;
			
		}
		else if(jogo[2][0]=='X' && jogo[2][1]=='X' && jogo[2][2]=='X' ){
			vitoria =2;
			
		}
		
		else if(jogo[0][0]=='X' && jogo[1][0]=='X' && jogo[2][0]=='X' ){
			vitoria =2;
			
		}
		else if(jogo[0][1]=='X' && jogo[1][1]=='X' && jogo[2][1]=='X' ){
			vitoria =2;
		
		}
		else if(jogo[0][2]=='X' && jogo[1][2]=='X' && jogo[2][2]=='X' ){
			vitoria =2;
			
		}
		
		else if(jogo[0][0]=='X' && jogo[1][1]=='X' && jogo[2][2]=='X' ){
			vitoria =2;
			
		}
		else if(jogo[0][2]=='X' && jogo[1][1]=='X' && jogo[2][0]=='X' ){
			vitoria =2;
		
		}
		
		//condição de vitoria O//
		else if(jogo[0][1]=='O' && jogo[0][2]=='O' && jogo[0][3]=='O' ){
			vitoria =1;
		
		}
		else if(jogo[1][1]=='O' && jogo[1][2]=='O' && jogo[1][3]=='O' ){
			vitoria =1;
		
		}
		else if(jogo[2][1]=='O' && jogo[2][2]=='O' && jogo[2][3]=='O' ){
			vitoria =1;
			
		}  
		
		else if(jogo[0][0]=='O' && jogo[1][0]=='O' && jogo[2][0]=='O' ){
			vitoria =1;
			
		}
		else if(jogo[0][1]=='O' && jogo[1][1]=='O' && jogo[2][1]=='O' ){
			vitoria =1;
			
		}
		else if(jogo[0][2]=='O' && jogo[1][2]=='O' && jogo[2][2]=='O' ){
			vitoria =1;
		
		}
		
		else if(jogo[0][0]=='O' && jogo[1][1]=='O' && jogo[2][2]=='O' ){
			vitoria =1;
		
		}
		else if(jogo[0][2]=='O' && jogo[1][1]=='O' && jogo[2][0]=='O' ){
			vitoria =1;
		
		}
		
		
		
		erro ++;
		
		system("cls");
		
	}while(vitoria == 0);
	
	if(vitoria==1){
		
		system("cls");
		printf("O Venceu!!!");
		
	}else  if(vitoria==2){
		
		system("cls");
		printf("X Venceu!!");
	}else if(vitoria==3){
		
		system("cls");
		printf("Empate!!");
	}
 return 0;	
}

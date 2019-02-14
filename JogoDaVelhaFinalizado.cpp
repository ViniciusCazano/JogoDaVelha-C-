#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<locale.h>


int Vencedor=0, TotalDeRodadas=0, Desempate=0;
char PosicaoA=' ', PosicaoB=' ', PosicaoC=' ', PosicaoD=' ', PosicaoE=' ', PosicaoF=' ', PosicaoG=' ', PosicaoH=' ', PosicaoI=' ';

int EstruturaCoordenada(){
	int Tabela[3][3];
	int Linha, Coluna, Coordenada=1; 
	printf("Posicao\n");
	for (Linha=0; Linha<3; Linha++){
		for(Coluna=0; Coluna<3; Coluna++){
			if(Linha<3 && Coluna<2){
				Tabela [Linha][Coluna] = printf("_%d_|", Coordenada++);
			}		
			else if (Linha<3 && Coluna>1){
				Tabela [Linha][Coluna] = printf("_%d_", Coordenada++);
			}
		}
		printf("\n");
	}
}

int EstruturaBase(){
	printf("\n");
	printf("_%c_|", PosicaoA);printf("_%c_|", PosicaoB);printf("_%c_", PosicaoC);printf("\n");
	printf("_%c_|", PosicaoD);printf("_%c_|", PosicaoE);printf("_%c_", PosicaoF);printf("\n");
	printf("_%c_|", PosicaoG);printf("_%c_|", PosicaoH);printf("_%c_", PosicaoI);printf("\n");
}

int DecisaoX(){
	int CoordenadaSelecionada;
	printf("Digite a posicao de X: ");
	scanf("%d", &CoordenadaSelecionada);
	switch (CoordenadaSelecionada){
		case 1: 
				if(PosicaoA==' '){
					PosicaoA='X';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 2: 
				if(PosicaoB==' '){
					PosicaoB='X';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 3: 
				if(PosicaoC==' '){
					PosicaoC='X';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 4: 
				if(PosicaoD==' '){
					PosicaoD='X';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 5: 
				if(PosicaoE==' '){
					PosicaoE='X';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 6: 
				if(PosicaoF==' '){
					PosicaoF='X';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 7: 
				if(PosicaoG==' '){
					PosicaoG='X';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 8: 
				if(PosicaoH==' '){
					PosicaoH='X';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 9: 
				if(PosicaoI==' '){
					PosicaoI='X';}
				else{
					TotalDeRodadas--;
				}
			break;		
				
	}
}

int DecisaoO(){
		int CoordenadaSelecionada;
	printf("Digite a posicao de O: ");
	scanf("%d", &CoordenadaSelecionada);
	switch (CoordenadaSelecionada){
		case 1: 
				if(PosicaoA==' '){
					PosicaoA='O';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 2: 
				if(PosicaoB==' '){
					PosicaoB='O';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 3: 
				if(PosicaoC==' '){
					PosicaoC='O';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 4: 
				if(PosicaoD==' '){
					PosicaoD='O';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 5: 
				if(PosicaoE==' '){
					PosicaoE='O';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 6: 
				if(PosicaoF==' '){
					PosicaoF='O';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 7: 
				if(PosicaoG==' '){
					PosicaoG='O';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 8: 
				if(PosicaoH==' '){
					PosicaoH='O';}
				else{
					TotalDeRodadas--;
				}
			break;
		case 9: 
				if(PosicaoI==' '){
					PosicaoI='O';}
				else{
					TotalDeRodadas--;
				}
			break;		
	}
}

int DecisaoFinal(){
	if((PosicaoA=='X'&&PosicaoB=='X'&&PosicaoC=='X')||(PosicaoA=='X'&&PosicaoD=='X'&&PosicaoG=='X')||
	   (PosicaoA=='X'&&PosicaoE=='X'&&PosicaoI=='X')||(PosicaoB=='X'&&PosicaoE=='X'&&PosicaoH=='X')||
	   (PosicaoC=='X'&&PosicaoF=='X'&&PosicaoI=='X')||(PosicaoD=='X'&&PosicaoE=='X'&&PosicaoF=='X')||
	   (PosicaoG=='X'&&PosicaoH=='X'&&PosicaoI=='X')||(PosicaoC=='X'&&PosicaoE=='X'&&PosicaoG=='X')){
	   		
	   		TotalDeRodadas=9;
	   		Vencedor=1;
	   		Desempate=0;
	}
	else if((PosicaoA=='O'&&PosicaoB=='O'&&PosicaoC=='O')||(PosicaoA=='O'&&PosicaoD=='O'&&PosicaoG=='O')||
			(PosicaoA=='O'&&PosicaoE=='O'&&PosicaoI=='O')||(PosicaoB=='O'&&PosicaoE=='O'&&PosicaoH=='O')||
			(PosicaoC=='O'&&PosicaoF=='O'&&PosicaoI=='O')||(PosicaoD=='O'&&PosicaoE=='O'&&PosicaoF=='O')||
			(PosicaoG=='O'&&PosicaoH=='O'&&PosicaoI=='O')||(PosicaoC=='O'&&PosicaoE=='O'&&PosicaoG=='O')){
				
				TotalDeRodadas=9;
	   			Vencedor=2;
				Desempate=0;	
	}
	else{
		Desempate=1;
	}
}

int EstruturaDoJogo(){
	do{
		if(Desempate==1){
			printf("Desempate\n");
			Desempate=0;
			TotalDeRodadas=0;
			PosicaoA=' ', PosicaoB=' ', PosicaoC=' ', PosicaoD=' ', PosicaoE=' ', PosicaoF=' ', PosicaoG=' ', PosicaoH=' ', PosicaoI=' ';
		}
		while(TotalDeRodadas<9){
			(EstruturaCoordenada());
			(EstruturaBase());
			if(TotalDeRodadas%2==0){
				(DecisaoX());
			}
			else{
				(DecisaoO());
			}
			(DecisaoFinal());
			system("cls");
			TotalDeRodadas++;
		}
	}while(Desempate==1);
	TotalDeRodadas=0;
	PosicaoA=' ', PosicaoB=' ', PosicaoC=' ', PosicaoD=' ', PosicaoE=' ', PosicaoF=' ', PosicaoG=' ', PosicaoH=' ', PosicaoI=' ';
}

int main(){
	bool Decisoes=true;
	char JogadorUm[100], JogadorDois[100];
	int NumeroDePartidas=0,Auxiliar=1,	VitoriasJogadorUm=0, VitoriasJogadorDois=0;
	printf("Bem vindo ao jogo da velha");
	printf("\nDigite o nome do Jogador X: ");
	scanf ("%s", &JogadorUm);
	printf("\nDigite o nome do Jogador O: ");
	scanf ("%s", &JogadorDois);
	do{
		NumeroDePartidas=0;
		printf("\nMelhor de: ");
		scanf(" %d", &NumeroDePartidas);
		if (NumeroDePartidas>0&&NumeroDePartidas<=10){
			Decisoes=false;
		}
	}while(Decisoes);
	
	do{
		system("cls");
		printf("%s Ganhou: %d  ", JogadorUm, VitoriasJogadorUm);  printf("  %s Ganhou: %d\n", JogadorDois, VitoriasJogadorDois);
		
		(EstruturaDoJogo());
		
		if(Vencedor>0){
			switch(Vencedor){
				case 1:
					VitoriasJogadorUm++;
					Auxiliar++;
					break;
					
				case 2:
					VitoriasJogadorDois++;
					Auxiliar++;
					break;
			}
		}
		
		if(VitoriasJogadorUm>VitoriasJogadorDois || VitoriasJogadorUm<VitoriasJogadorDois){
			
		}
		else{
			Auxiliar--;
		}
	}while(NumeroDePartidas>=Auxiliar);
	
	if(VitoriasJogadorUm>VitoriasJogadorDois){
		printf("%s ganhou o jogo com %d Vitorias", JogadorUm, VitoriasJogadorUm);
	}
	else{
		printf("%s ganhou o jogo com %d Vitorias", JogadorDois, VitoriasJogadorDois);
	}		
}

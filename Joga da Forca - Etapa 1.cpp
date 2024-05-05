#include<stdio.h>

int main(){
	
	char palavra_secreta[20];
	int i=0;
	
	printf("Digite a palavra secreta: ");
	gets(palavra_secreta);
	
	for (i=0; i < palavra_secreta[i]; i++){
		palavra_secreta[i] = printf("_ ");
	}

	return 0;
}


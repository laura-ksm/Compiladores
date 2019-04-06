#include "lexico.h"
#include "lista.h"
FILE *archivo;
int main(int argc, char* args[]){
    
	if ((archivo=fopen(args[1],"rt"))){
        lexer(archivo);
	}
	else{
		printf("Error no se pudo abrir el archivo\n");
	}
	fclose(archivo);
    return 0;
}

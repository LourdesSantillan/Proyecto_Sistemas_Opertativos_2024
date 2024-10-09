#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>


int main(char * argv[]){

	if(argv[2] != NULL){
		printf("Error: Parametros no validos. Consultar el manual para mas informacion.\n");
		return 0;
	}

    char * dir_name = argv[1];

    DIR *d;
    struct dirent *dir; // readdir() retorna un dirent=entrada del directorio
    d = opendir(dir_name);

    if (d != NULL){
	    while((dir = readdir(d))){
	        printf("%s \n", dir->d_name);
	    }
	closedir(d);
    }
    else {
		perror("\033[1;31m>> Error al listar el contenido del directorio\033[0m");
		fflush(NULL); //asegura que cualquier salida pendiente se escriba en la pantalla
    }

    return 0;
}

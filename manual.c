#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(char * argv[]){

	if (argv[1] == NULL){
		printf("Para ver el manual de un comando, intoducir 'manual <comando>' \n");
		return 0;
	}

	if(argv[2] != NULL){
		printf("Error: Parametros no validos. Consultar 'manual' para mas informacion.\n");
		return 0;
	}

	char * instruccion = argv[1];

	if (strcmp(instruccion, "crear_directorio") == 0){

		printf(" Objetivo\n \t -Comando encargado de crear un directorio en la ubicacion donde se encuentra la minishell.\n Formato del comando\n \t crear_directorio [nombre_directorio]\n Observaciones\n \t -En caso de que se pueda crear el directorio, se mostrara un mensaje de exito.\n \t -En caso contrario, se mostrara un mensaje de fallo.\n");

	}

	else if (strcmp(instruccion, "remover_directorio") == 0){

		printf("Objetivo\n \t -Comando encargado de remover un directorio en la ubicacion donde se encuentra la minishell.\n Formato del comando\n \t remover_directorio [nombre_directorio]\n Observaciones\n \t -En caso de que se pueda eliminar el directorio, se mostrara un mensaje de exito.\n \t -En caso contrario, se mostrar un mensaje de fallo.\n");

	}

	else if (strcmp(instruccion, "crear_archivo") == 0){

		printf("Objetivo\n \t -Comando encargado de crear un archivo en el directorio en donde se encuentra ubicado.\n Formato del comando\n \t crear_archivo [nombre_archivo]\n Observaciones\n \t -En caso de que se pueda crear el archivo, se mostrara un mensaje de exito.\n \t -En caso contrario, se mostrara un mensaje de fallo.\n");

	}

	else if (strcmp(instruccion, "modificar_permisos") == 0){

		printf("Objetivo\n\t -Comando encargado de modificar los permisos de un archivo en especifico\nFormato del comando\n\t modificar_permisos [path_archivo] [permisos]\n\t Donde [permisos] es una entero de 3 dígitos referenciando a los permisos de Owner, Group y Others respectivamente, y cada dígito sigue el siguiente formato:\n\t\t 1 Ejecutar\n\t\t 2 Escribir\n\t\t 4 Leer\n\t Permitiéndose la suma de los números, es decir, 7 (1+2+4), permitirá leer, escribir y ejecutar.\n");

	}

	else if (strcmp(instruccion, "mostrar_archivo") == 0){

		printf("Objetivo\n\t -Comando encargado de mostrar el contenido de un archivo.\nFormato del comando\n\tmostrar_archivo [path_archivo]\nObservaciones\n\t -En caso de que se pueda mostrar el archivo, se visualizara por pantalla.\n\t -En caso contrario, se mostrar un mensaje de fallo.\n");

	}

	else if (strcmp(instruccion, "listar_directorio") == 0){

		printf("Objetivo\n\t -Comando encargado de listar el contenido de un directorio.\nFormato del comando\n\t listar_directorio [path_directorio]\nObservaciones\n\t -En caso de que se pueda listar el contenido del directorio, se mostrara por pantalla.\n\t -En caso contrario, se mostrar un mensaje de fallo. \n");

	}

	else{

		printf("No existe manual para el comando ingresado \n");

	}

	return 0;
}

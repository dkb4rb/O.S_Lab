#include "process.h"

pds_t *assign_values(int id, char *name_process, pds_t *nombre_process){
	
	pds_t *name = nombre_process;
	name = malloc(sizeof(pds_t));
	name->id = id;
	name->name_process = name_process;
	return name;
}

int new_process(char **list){
	char *list_name;
	list_name = (char*)malloc(sizeof(char));
	for(int i = 0;i < strlen(*list); i++){
		list_name[i] = i;
	}

	if(list[2] == NULL){
		printf("Ingresa el ID del Proceso\n");
	}
	for( int count = 2; list[count] != NULL; count++){
		printf("list ---> : %s\n", list[count]);
		pds_t *list_name;
		list_name = malloc(sizeof(pds_t));
		list_name = assign_values(atoi(list[count]), "Hollll", list_name);
	}
	printf("\n");
	return 0;
}

char **array(int argc, char **argv){

	char **list = malloc(sizeof(char) * argc);
	if(argv[1] == NULL){
		printf("Nuevamente null\n");
	}
	int j = 2;
	for(; argv[j] != NULL; j++){
		list[j] = argv[j];
	}
	list[j + 1] = NULL;
	new_process(list);
	printf("\n");
	return list;
}

int init_room(int argc, char **argv){


	char **list = (char**)malloc(sizeof(char));
	list = array(argc, argv);
	
	if(_strcmp(list[1], "-l") == 0){
		for(int z = 1; list[z] != "\0"; z++){
			if(list[2] == NULL){
				printf("Error Faltan arugumentos\n");
				return EXIT_FAILURE;
			}
			printf("valor del Argv[%i]:  %s \n", z ,list[z]);
		}
	}
	
	return EXIT_SUCCESS;
}


int main(int argc, char **argv){
	init_room(argc, argv);
	return 0;
}

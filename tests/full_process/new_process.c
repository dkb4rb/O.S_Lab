#include "process.h"

int new_process(int argc, char **list){

	if(list[2] == NULL){
		printf("Ingresa el ID del Proceso\n");
		free(list);
		exit(98);
	}
	else{
	for( int count = 2; list[count] != NULL; count++){
		
		if(count == 2 ){
			printf("-- Informacion recolectada!!!\n");
			free(list);
		}
		int id = atoi(list[count]);
		name_process_with_id(id);
		free(list);
		
	}

	return 0;
	}
	
}

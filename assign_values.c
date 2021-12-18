#include "process.h"

int assign_values(int id, char *name_process){
	
	pds_t *name;
	name = malloc(sizeof(pds_t));
	if(name == NULL){
		free(name);
		return EXIT_FAILURE;
	}
	name->id = id;
	name->name_process = name_process;
	print_stack(name);
	free(name);
	return EXIT_SUCCESS;
}
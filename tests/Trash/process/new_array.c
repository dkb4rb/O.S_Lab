#include "process.h"

char **new_array_with_process(int argc, char **argv){

	char **list;

	for(int j = 0; argv[j] != NULL; j++){
		list[j] = argv[j];
	}
	for(int i = 0; list[i] != NULL; i++){
		printf("List : %s\n", list[i]);
	}

	return list;
}

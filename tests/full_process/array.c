#include "process.h"

int array(int argc, char **argv){

	char **list;
	list = (char**)malloc(sizeof(char) * 1024);
	if(list == NULL){
		free(list);
	}
	int j = 2;
	for(; argv[j] != NULL; j++){
		list[j] = argv[j];
	}
	list[j + 1] = NULL;
	new_process(argc ,list);
	
	return EXIT_SUCCESS;
}

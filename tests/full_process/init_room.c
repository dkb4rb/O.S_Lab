#include "process.h"


int init_room(int argc, char **argv){
	
	if(_strcmp(argv[1], "-l") == 0){
		array(argc, argv);
		return EXIT_SUCCESS;
	}
	else{
		error_arguments();
	}
}
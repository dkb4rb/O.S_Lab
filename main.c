#include "process.h"

int main(int argc , char **argv){
	
	/*int i = 0;
	argv[1] = "-l";
	argv[2] = "253";
	argv[3] = "711";
	argv[4] = "234343";
	argv[5] = NULL;

	for(;argv[i] != NULL; i++){
		printf("%s\n", argv[i]);
	}
	printf(argv[4]);*/
	
	init_room(argc, argv);

/*
	char *ar;
	ar = malloc(sizeof(char));
*/	


/*int i = 0;

	printf("%s\n", argv[argc - 1]);
	

	while(i < argc){
		if(i == 0){
			printf("valor de : %i en argv[%s] \n",i, argv[i]);
		}
		printf("Argv[%i]: %s \n",i ,argv[i]);
		i++;
	}
	printf("%i\n", i);
	
	if ( strncmp(argv[1], "-l", 2));
	{
		printf("Es igual a l\n");
	}
*/	
	return EXIT_SUCCESS;
}

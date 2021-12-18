#include "process.h"

char *nombre_process(int id){

	char *buff;
	int r_bytes;
	int nbytes;
	int fd;

	buff = malloc(sizeof(char) * 1024);
	if(buff == NULL){
		free(buff);
	}

	fd = open("process.txt", O_RDONLY);

	if(fd == -1){
		printf("Error al abrir el archivo\n");
		free(buff);
	}
	else{
		r_bytes = read(fd, buff, 16);
		close(fd);
		if(r_bytes == 0){
			printf("\nEl proceso %i no existe\n", id);
			system("rm -r process.txt");
			free(buff);
			exit(98);
		}
		else{
		char *value = buff;
		return (char*)value;
		}
		free(buff);
	}
	free(buff);
	return EXIT_SUCCESS;
}

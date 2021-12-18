#include "process.h"

int print_stack(pds_t *process){

	printf("Pid: %d\n", process->id);
	printf("Nombre del proceso: %s", process->name_process);
	printf("\n...\n");
	return 0;
}
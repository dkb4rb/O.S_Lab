#ifndef _PROCESS_H_
#define _PROCESS_H_

//libraries
#include <stdio.h>
#include <stdlib.h>
#include <sys/syscall.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

// DECLARE FUNCTIONS PROTOTYPES
int _strcmp(char *strings, char *string);
char **new_array_with_process(int argc, char **argv);
int error_arguments(char *command);
int error_parameters(char *command);

/**
* Struct to saving in to process.pid file
* @id: is the identification process
* @name_process: is the name of the identificate process
*/

typedef struct pds_p
{
	int id;
	char *name_process;
}pds_t;


#endif /*_PROCESS_H_*/

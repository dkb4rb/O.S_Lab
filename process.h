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
#include <fcntl.h>
#include <unistd.h>

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

/* Integer to ASCII for signed decimal integers. */
static int next;
static char qbuf[8];

// DECLARE FUNCTIONS PROTOTYPES
char *_itoa(int n);
int print_stack(pds_t *process);
int assign_values(int id, char *name_process);
char *nombre_process(int id);
int name_process_with_id(int id);
int new_process(int argc, char **list);
int array(int argc, char **argv);
int error_arguments(void);
int _strcmp(char *strings, char *string);
int init_room(int argc, char **argv);

#endif /*_PROCESS_H_*/

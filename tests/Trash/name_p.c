#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct pds_p
{
	int id;
	char *name_process;
}pds_t;

/* Lista statica*/
static char *list[1024];

/* Integer to ASCII for signed decimal integers. */
static int next;
static char qbuf[8];


char *_itoa(int n)
{
	register int r, k;
	int flag = 0;

	next = 0;
	if (n <= 0)
	{
		qbuf[next++] = '-';
		n = -n;
	}
	if (n == 0)
	{
		qbuf[next++] = '0';
	}
	else
	{
		k = 10000;
		while (k > 0)
		{
			r = n / k;
			if (flag || r > 0)
			{
				qbuf[next++] = '0' + r;
				flag = 1;
			}
			n -= r * k;
			k = k / 10;
		}
	}
	qbuf[next] = ' ';
	return (qbuf);
}

void print_stack(pds_t *process){

	printf("Pid: %d\n", process->id);
	printf("Nombre del proceso: %s\n\n", process->name_process);
	printf("...\n");
}

int test_main(void){

/*
	Todo este codigo hace parte de la comparacion
	y concatenado del comando que nos traera el proceso
	y nos ejecutara la llamada al sistema de system()

	int pid = 1642;
	char *pid_text = _itoa(pid);
	char cmd[100] = "ps -p ";
	char *grepper = "-o comm=";
	char *to_f_tmp = ">> process.tmp";

	strcat(cmd, pid_text);
	strcat(cmd, grepper);
	system(cmd);
	strcat(cmd, to_f_tmp);
	system(cmd);
	system("sleep 0.10");
	system("rm -r process.tmp");
*/

/*

	Esta parte del codigo se encarga de leer nuestro archivo
	temporal para poder asignar los valores a la estructura que necesitamos
	imprimir

	char buff[8];
	ssize_t r_bytes;
	ssize_t nbytes;
	int fd;

	fd = open("process.tmp", O_RDONLY);

	if(fd == -1){
		printf("Error al abrir el argchivo");
	}
	else{
		nbytes = sizeof(buff);
		r_bytes = read(fd, buff, nbytes);
		close(fd);
		if(r_bytes == 0){
			printf("El archivo esta vacio");
		}
		else{
		printf("%s", buff);
		printf("\n");
		char *value = buff;
		printf("%s\n", value);
		}
	}
*/
	pds_t *process, *process2;
	process = malloc(sizeof(pds_t));
	process->id = 10;
	process->name_process = "HOla";
	
	process2 = malloc(sizeof(pds_t));
	process2->id = 10;
	process2->name_process = "HOla";

	printf("-- Informacion recolectada!!!\n");
	print_stack(process);
	print_stack(process2);
	free(process);
	free(process2);
	return 0;
}

int main(){

	list[0] = "Hola";
	printf("%s", list[0]);
	return 0;
}

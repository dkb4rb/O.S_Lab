#include "process.h"

int name_process_with_id(int id){
	int pid = id;
	char *pid_text = _itoa(pid);// convetimos el numero del proceso de str a int
	char cmd[100] = "ps -p ";
	char *grepper = "-o comm= >/dev/null";
	char *to_f_tmp = ">> process.txt";
	char *name_pid;

	strcat(cmd, pid_text);
	strcat(cmd, grepper);
	system(cmd);
	strcat(cmd, to_f_tmp);
	system(cmd);
	name_pid = nombre_process(id);
	assign_values(id, name_pid);
	system("rm -r process.txt");
	return 0;
}

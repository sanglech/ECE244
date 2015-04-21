# define MAX_LEN 200
#ifndef _DRIVER_H_
#	define _DRIVER_H_

	void handle_new();
	void handle_find();
	void handle_delete();
	void handle_printall();
	void handle_printprobes();
	void handle_clear();
	void driver(char* cmnd);
	int process_input();

#endif

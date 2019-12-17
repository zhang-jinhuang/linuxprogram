#include "my.h"

void *thread_function(void *arg);
int run_now=1;    //共享资源

void *thread_function(void *arg)
{
	int print_count2=0;
	while(print_count2++<5)
	{
		if(run_now==2)   //子线程，如果run_now为2就把它修改为1
		{
			printf("function thread is run\n");
			run_now=1;
		}
		else
		{
			printf("function thread is sleep\n");
			sleep(1);
		}
	}
	pthread_exit(NULL);
}

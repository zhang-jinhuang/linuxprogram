#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<limits.h>
#include<string.h>
#include<sys/time.h>
#include<sys/types.h>
#define NUM 4
struct sendval
{
	int n;
	int s;
};

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <wait.h>
#include <time.h>
#include <signal.h>
#include <fcntl.h>

void sighandle(int);

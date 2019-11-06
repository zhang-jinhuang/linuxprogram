#include "my.h"
int main()
{
  char *arg[] = {"./test1","123","hello","world",NULL};
  printf("caller3 pid = %d, ppid=%d\n",getpid(),getppid());
  execv("/home/rlk/linuxprogram/week9/code/test1",arg);
  printf("execl After callering!\n");
  return 0;
}

#include "my.h"
int main()
{
  char *arg[] = {"./test1","123","hello","world",NULL};
  printf("caller4 pid = %d, ppid=%d\n",getpid(),getppid());
  ececlp("");
  //execv("/home/rlk/linuxprogram/week9/code/test1",arg);
  printf("execlp After callering!\n");
  return 0;
}

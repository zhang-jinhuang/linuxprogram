#include "my.h"
int main(int argc,char *argv[])
{
  printf("Test6:pid=%d,ppid=%d\n",getpid(),getppid());
  for(int i=0;i<argc;i++)
  {
    printf("Test6:%d : %s\n",i,argv[i]);
  }
  printf("------Test6 end------\n");
  return 0;
}

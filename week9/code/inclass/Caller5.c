#include "my.h"
int main()
{
  char *vector[]={"Test6","123","abc",NULL};
  printf("Call5:pid=%d,ppid=%d\n",getpid(),getppid());
  execvp("Test6",vector);
  printf("------after calling------\n");
  return 0;
}

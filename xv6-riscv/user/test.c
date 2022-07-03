#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  int n = 0;
  if(argc >= 2) n = atoi(argv[1]);
  if(n == 1) printf("Count total number of processes\n");
  else if(n==2) printf("Count total number of system calls made by the current process\n");
  else if(n==3) printf("Count total number of memory pages used by the current process\n");
  else printf("Invalid input\n");
  printf("Say hello to kernel %d\n",n);
  hello(n);
  exit(0);
}

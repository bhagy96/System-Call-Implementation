#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  int param=0;
  if(argc >= 2) param = atoi(argv[1]);

  printf("You opted for option %d \n",param);
  info(param);
  exit(0);
}

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(2, "Usage: sleep <ticks>\n");
    exit(1);
  }

  int ticks = atoi(argv[1]);
  int pid = getpid();

  if (ticks < 1) {
    fprintf(2, "sleep: ticks must be a positive integer\n");
    exit(1);
  }
  

  sleep(ticks);
  
  if(isbackground()) {
    printf("Process %d Done sleep",pid);	  
  }
  
  exit(0);
}

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

#define BUFSIZE 10
int main(){
  char bufin[BUFSIZE]="empty";
  char bufout[] = "hello";
  int bytesin;
  pid_t child_pid;
  int fd[2];

  if (pipe(fd)==-1){  //exit program if can't open pipe
    perror("Failed"); return ;
  }


  // Determine whether to read or write between parent and child
  if (child_pid){  /* parent */
    write (fd[1], bufout, strlen(bufout)+1);
  }
  else{           /* child */
    bytesin=read(fd[0], bufin, BUFSIZE);
  }

  //test results
  printf("%ld: my bufin is %s, my bufout is %s\n", (long)getpid(), bufin, bufout);

  return 0;
}

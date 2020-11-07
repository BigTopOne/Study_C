#include "stdio.h"
#include "unistd.h"
#define  BUF_SIZE 30
int main() {
  int fds1[1], fds2[2];
  char str1[] = "who are you ?";
  char str2[] = "Thank you for yout message.";
  char buf[BUF_SIZE];
  pid_t pid;
  // 在管道上，还是有疑问；fds1[0]与 fds1[1]
  pipe(fds1);
  pipe(fds2);
  pid = fork();
  if (pid == 0) {
    // 管道 1
    write(fds1[1], str1, sizeof(str1));

    // 管道 2
    read(fds2[0], buf, BUF_SIZE);
    printf("Child proc output: %s \n", buf);

  } else {
    read(fds1[0], buf, BUF_SIZE);
    printf("Parent proc output: %s \n", buf);
    write(fds2[1], str2, sizeof(str2));

  }

  return 0;
}
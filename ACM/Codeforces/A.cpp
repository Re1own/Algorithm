#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int pipe_fd[2];
	pid_t pid;
	char buf_r[100];
	int r_num;
	memset(buf_r, 0, sizeof(buf_r));
	if(pipe(pipe_fd) < 0) {
		printf("\n");
		close(pipe_fd[1]);
		sleep(2);
		if ((r_num = read(pipe_fd[0], buf_r, 100)) > 0) {
			printf("%d numbers read from the pipe is %s\n", r_num, buf_r);
		}
		close(pipe_fd[0]);
		exit(0);
	}
	else if (pid > 0) {
		close(pipe_fd[0]);
		if (write(pipe_fd[1], "Hello", 5) != -1) {
			printf("parent write 1 success!\n");
		}
		if (write(pipe_fd[1], "pipe", 5) != -1) {
			printf("parent write2 success\n");
		}
		close(pipe_fd[1]);
		sleep(3);
		waitpid(pid, NULL, 0);
		exit(0);
	}
}
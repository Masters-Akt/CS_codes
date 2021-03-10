#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
	int n;
	printf("Enter number of child processes : ");
	scanf("%d", &n);
	int t;
	printf("Root process : %d\n", getpid());
	printf("PID     PPID\n");
	for(int i=0;i<n;i++){
		t = fork();
		if(t==0){
			printf("%d\t%d\n", getpid(), getppid());
			break;
		}
	}
	return 0;
}

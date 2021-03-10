#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
	int n;
	printf("Enter number of process : ");
	scanf("%d", &n);
	int t;
	printf("root process = %d\n", getpid());
	for(int i=0;i<n;i++){
		t = fork();
		if(t>0) break;
		printf("%d %d\n", getpid(), getppid());
	}
	wait(NULL);
	return 0;
}

#include<unistd.h>
#include<stdio.h>
#define __NR_my_syscall 548

long main()
{
	long num = syscall(__NR_my_syscall);
	printf ("%ld\n", num);
	return num;
}

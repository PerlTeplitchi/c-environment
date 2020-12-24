#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv[])
{
	if (argc>1)
	{
	int n = atoi(argv[1]);
	
	if(n>0 && n<11){
		for (int i = 1; i <= n; ++i)
		{
			printf("%d\n", i);
		}
	}
	if (n==0)
	{
		return 0;
	}
	for (int i = 0; argv[i]!='\0'; ++i)
	{
		if (argv[i]>= 'A' && argv[i]<= 'Z')
		{
			return 0;
		}
		else if (argv[i] >= 'a' && argv[i]<= 'z')
		{
			return 0;
		}
	}
	}
	
	else if(argc == 1)
	{
		for (int i = 1; i <=10; ++i)
		{
			printf("%d\n", i);
		}
	}

}
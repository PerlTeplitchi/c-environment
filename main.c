#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, const char *argv[])
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

	}
	
	else if(argc == 1)
	{
		for (int i = 1; i <=10; ++i)
		{
			printf("%d\n", i);
		}
		
	}

}

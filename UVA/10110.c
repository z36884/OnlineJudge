#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
	if(n==0)
	    break;
	else
	{
	    if((long long int)sqrt(n)==sqrt(n))
		printf("yes\n");
	    else
		printf("no\n");
	}
    }
    return 0;
}


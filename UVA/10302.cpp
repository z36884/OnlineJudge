#include<cstdio>
using namespace std;

int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF)
    {
	printf("%lld\n",(n*n*n*n+2*n*n*n+n*n)/4);
    }
    return 0;
}

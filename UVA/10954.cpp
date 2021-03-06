#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;

struct NODE
{
    int v;
    bool operator < (const NODE &in) const
    {
	return v>in.v;
    }
};

int main()
{
    int N;
    long long int total;
    NODE tmp;
    NODE tmp2;
    NODE temp;
    while(scanf("%ld",&N) != EOF && N!=0)
    {
	total = 0;
	priority_queue<NODE> pq;
	for(int i=0; i<N; i++)
	{
	    scanf("%d", &tmp.v);
	    pq.push(tmp);
	}
	while(!pq.empty())
	{
	    tmp = pq.top();
	    pq.pop();
	    if(pq.empty())
		break;
	    tmp2 = pq.top();
	    pq.pop();
	    temp.v=tmp.v+tmp2.v;
	    total+=temp.v;
	    pq.push(temp);
	}
	printf("%lld\n", total);	
    }
    return 0;
}

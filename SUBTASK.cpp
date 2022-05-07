#include <bits/stdc++.h>
using namespace std;

long long getPoints(vector<long long> v,long long M,long long K)
{
    long long count1 = 0,count2 = 0;
    
    for(long long i = 0; i < M ; i++)
    {
        if(v[i] == 1)
           count1++;
    }
        
    if(count1 == M)
    {
        for(long long i = 0; i < v.size() ; i++)
        {
            if(v[i] == 1)
               count2++;
        }
    }
    else
        return 0;
        
    if(count2 == v.size())
       return 100;
    else
       return K;
}

int main() {
	// your code goes here
	long long t;
	cin>>t;
	
	while(t--)
	{
	    long long N,M,K;
	    cin>>N>>M>>K;
	    
	    vector<long long> v;
	    long long x;
	    
	    for(long long i = 0; i < N ; i++)
	    {
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    cout<<getPoints(v,M,K)<<endl;
	}
	
	return 0;
}

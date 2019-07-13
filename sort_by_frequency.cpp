#include <bits/stdc++.h>
using namespace std;
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
    if(a.first==b.first)
    return a.second<b.second;
    else
       return (a.first >b.first); 
       
}
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    unordered_map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	        int k=arr[i];
	        m[k]++;
	    }
	    
    vector<pair<int,int>> v;
    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        v.push_back(make_pair(itr->second,itr->first));
    }
    sort(v.begin(),v.end(),sortinrev);
	
    for(int i=0;i<v.size();i++)
    {
        while(v[i].first--)
        {
            cout<<v[i].second<<" ";
        }
    }
    cout<<endl;
	    
	}
	return 0;
}

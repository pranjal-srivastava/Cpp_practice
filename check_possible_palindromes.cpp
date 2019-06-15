#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    int check[26]={0};
	    int k;
	    for(int i=0;i<n;i++)
	    {
	        k=(int)s[i]-97;
	        check[k]++;
	    }
	    //int jf=0;
	    int flag=0;
	    for(int i=0;i<26;i++)
	    {
	        if(check[i]%2!=0)
	            flag++;
	    }
	   
	    if(flag<=1)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    
	}
	return 0;
}

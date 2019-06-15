//The strings entered are space seperated where the first string is A and second is B. Check if A is subsequence of B


#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s1;
	    string s2;
	    cin>>s1>>s2;
	    int n1=s1.length();
	    int n2=s2.length();
	    int i=0;
	    int j=0;
	    int count=0;
	    while(i<n2)
	    {
	        if(s1[j]==s2[i])
	        {
	            count++;
	            j++;
	        }
	        
	        i++;
	    }
	    
	    if(count==n1)
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	}
	return 0;
}

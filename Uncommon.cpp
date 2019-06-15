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
	    int i=0;
	    int j=0;
	    int check1[26]={0};
	    int check2[26]={0};
	    while(i<s1.length())
	    {
	        check1[(int)s1[i]-97]++;
	        i++;
	    }
	    
	    while(j<s2.length())
	    {
	        check2[(int)s2[j]-97]++;
	        j++;
	    }
	    
	    for(int k=0;k<26;k++)
	    {
	        if((check1[k]!=0 && check2[k]==0)||(check2[k]!=0 && check1[k]==0))
	        {
	            int w=k+97;
	            char x=(char)w;
	            cout<<x;
	        }
	    }
	    
	    cout<<endl;
	}
	return 0;
}

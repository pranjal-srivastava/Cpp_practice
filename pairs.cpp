#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>>T;
    while(T>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
            
        int k;
        cin>>k;
        sort(arr,arr+n);
        
        int front=0;
        int back=n-1;
        int flag=0;
        while(front<back)
        {
            if(arr[front]+arr[back]==k)
            {
                cout<<arr[front]<<" "<<arr[back]<<" "<<k<<endl;
                front++;
                back--;
                flag=1;
            }
            else if(arr[front]+arr[back]>k)
            {
                back--;
            }
            else if(arr[front]+arr[back]<k)
            {
                front++;
            }
        }
        
        if(flag==0)
            cout<<-1<<endl;
        T--;
    }
	
	return 0;
}

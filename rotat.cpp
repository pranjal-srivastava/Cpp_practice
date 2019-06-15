#include <bits/stdc++.h>

using namespace std;
vector<string> split_string(string);
vector<int> rotLeft(vector<int> a, int d) {
int n=a.size();
/*int temp=0;
for(int i=0;i<d;i++)
{
    temp=a[0];
    for(int j=0;j<n-1;j++)
    {
        a[j]=a[j+1];
    }
    a[n-1]=temp;
}
*/
vector<int>b(n);
for(int i=0;i<n;i++)
    b[i]=0;

int k=0;
for(int j=d;j<n;j++)
{
    b[k]=a[j];
    k=k+1;
}
int m=0;
for(int j=k;j<n;j++)
{
    b[j]=a[m];
    m=m+1;
}


return b;
}

int main()
{
   // complete the main function considering the following parameters
   // a= input vector n=vector size  d= rotate amount
   // vector<int> result = rotLeft(a, d);
   /*
   ofstream fout(getenv("OUTPUT_PATH"));
    string nd_temp;
    getline(cin, nd_temp);
    vector<string> nd = split_string(nd_temp);
    int n = stoi(nd[0]);
    int d = stoi(nd[1]);
    string a_temp_temp;
    getline(cin, a_temp_temp);
    vector<string> a_temp = split_string(a_temp_temp);
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);
        a[i] = a_item;
    }
    vector<int> result = rotLeft(a, d);
    for (int i = 0; i < result.size(); i++) {
        fout << result[i];
        if (i != result.size() - 1) {
            fout << " ";
        }
    }
    fout << "\n";
    fout.close();
    return 0;
}
vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });
    input_string.erase(new_end, input_string.end());
    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }
    vector<string> splits;
    char delimiter = ' ';
    size_t i = 0;
    size_t pos = input_string.find(delimiter);
    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));
        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }
    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));
    return splits;
}
    //print
   */
   
}

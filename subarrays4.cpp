//using MULTISET
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[101000];
    vector<int>res;
    multiset<int>st;
    cin>>n;
    for(int i=0; i<n; i++)cin>>arr[i];
    int k;
    cin>>k;
    int m=0;
    for(int i=0; i<n; i++)
    {
        st.insert(arr[i]);
        if(st.size()==k)
        {
            res.push_back(*st.rbegin());
            st.erase(st.find(arr[m++]));
        }

    }
    for(int i=0; i<res.size(); i++)
    {
        if(i!=0)putchar(' ');
        cout<<res[i];
    }
    return 0;
}
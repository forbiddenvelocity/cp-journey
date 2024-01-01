#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long int
 
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> array(3);
        for(int i=0;i<3;i++)
            cin>>array[i];
        int ans = 3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(array[i][j]=='?'){
                    for(int k=0;k<3;k++)
                        ans -= (array[k][j]=='?'?0:(array[k][j]-'A'));
                }
            }
        }
        char s = (ans+'A');
        cout<<s<<endl;
    }
    
}

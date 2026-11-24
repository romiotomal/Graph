#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    n=4;

    vector<vector<pair<int,int>>> a(n);
    
        a[0].push_back({1,10});
        a[0].push_back({2,30});
        a[2].push_back({3,40});
        a[3].push_back({0,20});
        
        for(int i=0; i<n; i++){
            cout<< i<<"->";

            for(auto it : a[i]){
                cout<< "("<< it.first << "," << it.second << ")";
            }
            cout<< endl;
        }
        
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
                
void permutes(int index, string s, int n, vector<string> &perm) {
 
    if(index == n){
        perm.push_back(s);
    }
 
    for(int i=index;i<n;i++){
        swap(s[index],s[i]);
        permutes(index+1,s,n,perm);
        swap(s[index],s[i]);
    }
 
 }
                
int main()
{
       string s;
       cin>>s;
       int n = s.size();
        
       vector<string> perm; set<string> st;
 
       permutes(0,s,n,perm);
 
       
 
       sort(perm.begin(),perm.end());
 
       for(auto it:perm) st.insert(it);
 
       perm = {};
 
       for(auto it:st) perm.push_back(it);
 
       cout<<perm.size()<<endl;
                
       for(auto it:perm){
           cout<<it<<endl;
       }
    return 0;
}
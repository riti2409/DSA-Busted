#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    unordered_map<char,bool>hsh;
    string res;
    int n=s.size();
    for(int i=0;i<n;i++){
        hsh[s[i]]=false;
    }
    for(int i=0;i<n;i++){
    if(hsh[s[i]]==false){
        hsh[s[i]]=true;
        res+=s[i];
    }
    }
    sort(res.begin(),res.end());
    return res;
}
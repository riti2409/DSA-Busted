#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    int n=S.size();
    string k;
    for(int i=0; i<n;i++){
        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'){
            k.push_back(S[i]);
        }
    }
    return k;
} 
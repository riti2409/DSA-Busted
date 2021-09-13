#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int k=str.size();
    string rev_str;
    for(int i=k-1;i>=0;i--){
        rev_str.push_back(str[i]);
    }
    if(str==rev_str){
        cout<<"YES palindrome";

    }
    else{
        cout<<"NO ";
    }
    return 0;
}
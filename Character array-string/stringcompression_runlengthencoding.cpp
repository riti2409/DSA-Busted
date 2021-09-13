#include<bits/stdc++.h>
using namespace std;
string compress_string(string str){
    int n=str.length();
    string output;
    for(int i=0;i<n;i++){
        int count=1;
        while(i<n-1 && str[i+1]==str[i]){
            count++;
            i++;
        }
        output+=str[i];
        output+= to_string(count);
    }
    if(output.length()>str.length()){
        return str;
    }
    return output;
}
int main(){
    string str="aaabbcccdd";
    cout<<compress_string(str);
    return 0;
}
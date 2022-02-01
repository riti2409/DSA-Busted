#include<bits/stdc++.h>
using namespace std;

int length(char str[]){
    if(str[0] == '\0')
    return 0;
    int small_length = length(str+1);
    return (1 + small_length);  
    
}
int main(){
    char str[1000];
    cin>>str;
    int l = length(str);
    cout<<l<<endl;
    return 0;
}

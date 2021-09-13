#include<bits/stdc++.h>
using namespace std;
int main(){
    char given_str[1000];
    char largest_str[1000];
    int largest_len=0;
    int n;
    cin>>n;
    cin.get();
    while(n--){
        cin.getline(given_str,1000);
        int len=strlen(given_str);
        if(len>largest_len){
            largest_len=len;
            strcpy(largest_str,given_str);
        }
        
    }
    cout<<"largest sentence is "<<largest_len<<endl;
    return 0;
}
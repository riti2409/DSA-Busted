

#include<bits/stdc++.h>
using namespace std;
void remove_character(char str[], char x){
    if(str[0] == '\0')
    return;
    if(str[0] != x)
    remove_character(str+1, x);
    else{
        int i=1;
    for(; str[i]!='\0'; i++){
    str[i-1] = str[i];
    }
    
    str[i-1]=str[i];
    remove_character(str, x);
    }
}
int main(){
    char str[100];
    cin>>str;
    char ch;
    cin>>ch;
    remove_character(str, ch);
    cout<<str<<endl;
}

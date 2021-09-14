#include <bits/stdc++.h>
using namespace std;
 
bool arePermutation(string A, string B)
{
    int len1=A.length();
    int len2=B.length();
    if(len1!=len2){
        return false;
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    if(A==B){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string A="dog";
    string B="god";
    cout<<arePermutation( A, B);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    int diff=INT_MAX;
    int N=length.size();
    int s=0;
    int e=N-1;
    int c=0;
    while(s<e){
    if(abs(length[s]+length[e]-D)<diff){
        diff=abs(length[s]+length[e]-D);
        c++;
    }
    if(length[s]+length[e]<D){
        s++;
    }
    else{
        e--;
    }
    }
    return c;
    
}
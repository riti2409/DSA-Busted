#include<bits/stdc++.h>
using namespace std;
int main(){
    char c[10];
    cin.getline(c,10);
    int x=0,y=0;
    for(int i=0;c[i]!='\0';i++){
        switch(c[i]){
            case 'N' :y++;
            break;
            case 'S':y--;
            break;
            case 'E':x++;
            break;
            case 'W':x--;
            break;
        }

    }
    cout<<"Displacement is"<< "x "<<x<<"y "<<y<<endl;
    if(x>=0 and y>=0){
        while(x--){
            cout<<"E";
        }
        while(y--){
            cout<<"N";
        }
    }
    return 0;
}
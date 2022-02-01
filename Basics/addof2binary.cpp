// sum=c1+c2+carry
#include<bits/stdc++.h>
using namespace std;
string addb(string a, string b){
    string result=" ";
    int i=a.length()-1;
    int j=b.length()-1;
    int carry=0;
    while(i>=0 ||j>=0){
        int sum=carry;
        if(i>=0){
            sum+=a[i--]-'0';
        }
        if(j>=0){
            sum+=a[j--]-'0';
        }
        carry=sum>1?1:0;
        result+=to_string(sum%2);
    }
    if(carry){
        result+=to_string(carry);
        
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){

    string a ,b;
    cin>>a>>b;
    cout<<addb(a,b)<<endl;
  
    return 0;
}
/*
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
	long bn1,bn2;
	int i=0, r=0;
	int sum[20]; 
    cout << "\n\n Addition of two binary numbers:\n";
	cout << "-----------------------------------\n";
	cout << " Input the 1st binary number: ";
	cin>> bn1;
	cout << " Input the 2nd binary number: ";
	cin>> bn2;
  while (bn1 != 0 || bn2 != 0) 
  {
   sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
   r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
   bn1 = bn1 / 10;
   bn2 = bn2 / 10;
  }
  if (r != 0) {
   sum[i++] = r;
  }
  --i;
  cout<<" The sum of two binary numbers is: ";
  while (i >= 0) {
   cout<<(sum[i--]);
  }
   cout<<("\n");  
 }  */
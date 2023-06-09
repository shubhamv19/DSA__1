#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str,int s,int e){

    while(s<e){
        if(str[s]!=str[e])
            return false;
            s++;
            e--;
        }
        return true;
    
}
    
int number_partition(string str,int s,int e){
       
        if(s>=e || palindrome (str,s,e))return 0;
        int ans=INT_MAX;
        int res;
        
        for(int k=s;k<e;k++){
            res=number_partition(str,s,k)+number_partition(str,k+1,e)+1;
            ans=min(ans,res);
            
        }
        
        return ans;
    }


int main() {
    
    int t;cin>>t;
    while(t--){
        
    
   string str;
   cin>>str;
   cout<<number_partition(str,0,str.size()-1)<<endl;
   

    }
}
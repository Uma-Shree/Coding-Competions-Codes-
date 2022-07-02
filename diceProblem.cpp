#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
   cin>>t;
    int k=1;
    while(k<=t){
        int n;
       cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            
            cin>>v[i];
           
        }
        
        sort(v.begin(),v.end());
        
       
        int in =1;
       for(auto x: v ){
           if((x >= in)){
               in+=1;
             
           }
           
           
         //  else break;
       }
        in-=1;
        cout<<"Case #"<<k<<":"<<" "<<in<<endl;
       
        
        k++;
    }
    return 0;
}


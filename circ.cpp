#include <iostream>
#include<bits/stdc++.h>
#define pi 3.1415926535
int main(){
 double t;
 double r;
 double a,b;
    
    std::cin>>t;
    for(int i=1;i<=t;i++){
        std::cin>>r>>a>>b;
        
        double ans=0;
        
        
        ans+=(pi*r*r) ;
       //  std::cout<<ans<<"\n";
        while(int(r)!=0){
        r=int(r*a);
       //  std::cout<<r<<"\n";
        
       // if(r!=0){
            ans+=(pi*r*r);
           // std::cout<<ans<<"\n";
       // }
        r=int(r/b);
        // std::cout<<r<<"\n";
        
        if(int(r)!=0)
        ans+=(pi*r*r);
         //std::cout<<ans<<"\n";
        }
        
       std::cout << std::fixed << std::setprecision(6) <<"Case #"<<i<<":"<<" "<<ans<<"\n";
    
    }
    return 0;
}


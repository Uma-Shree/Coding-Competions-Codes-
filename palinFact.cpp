#include <iostream>
#include<string>
#include<bits/stdc++.h>
//public:
/*int chekP(int num){
    
    string st=toString(i);
    int n=st.length();
    for(int j=0;j<n/2;j++){
        if(st[i]!=st[n-i-1])
        return 0;
     int n=num;   
    do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     if (n == rev) return 1;
     
     else return 0;
}
*/
int main(){
 int t;
int ans=0;
    int a=0;
    int digit=0;
    int rev=0;
    std::cin>>t;
    for(int i=1;i<=t;i++){
        std::cin>>a;
        int cnt=0;
        for(int j=1;j<=a;j++){
            
            if(a%j==0){ 
                int n=j;
             digit=0;
             rev=0;
             int num=j;
                do{
                    digit = num % 10;
                    rev = (rev * 10) +digit;
                    num = num / 10;
                } while (num != 0);
                
                 if (n == rev)
                 cnt+=1;
            }
        }
      
        ans=cnt;
        
       std::cout<<"Case #"<<i<<":"<<" "<<ans<<"\n";
    
    }
    return 0;
}


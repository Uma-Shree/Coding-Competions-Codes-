#include<bits/stdc++.h>
int main(){
    int t;
    std::cin>>t;
    int k=1;
    while(k<=t){
        int R,C;
        std::cin>>R>>C;
        int m=2*R+1;
        int n=2*C+1;
        std::cout<<"Case #";
        std::cout<<k<<":\n";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0 || i==0 && j==1 || i==1 && j==0 || i==1 && j==1){
                    std::cout<<'.';
                    
                }
               
                
                else if(i%2==0 && j%2!=0){
                    std::cout<<'-';
                    
                }
                else if(i%2!=0 && j%2==0){
                    std::cout<<'|';
                    if(  j==(n-1)){
                    	std::cout<<"\n";
					}
                    
                }
                else if(i%2==0 && (j%2==0 )){
                    std::cout<<'+';
                    if(  j==(n-1)){
                    	std::cout<<"\n";
					}
                }
                else if(i%2!=0 && (j%2!=0 )){
                    std::cout<<'.';
                }
                
                
            }
        }
        
        k++;
        
        
    }
    return 0;
}

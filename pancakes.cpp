#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin>>t;
	int p=0;
	for(p=1;p<=t;p++){
	    int n;
	    std::cin>>n;
	    int ar[n];
	    
	    for(int i=0;i<n;i++){
	        std::cin>>ar[i];
	      //  std::cout<<ar[i];
	    }
	    int temp=ar[0];
	    int cnt=0;
	    int inc=0;
	    for(int i=1;i<n;i++){
	        if(ar[i]>=temp){
	            cnt+=1;
	            temp=max(temp,ar[i]);
	          //  std::cout<<temp<<" ";
	        }
	        
	        
	    }
	    cnt+=1;
	    
	    std::cout<<"Case #"<<p<<":"<<" "<<cnt<<"\n";
	    
	}
	
	
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int k=1;
	while(k<=t){
		for(int p=1;p<=t;p++){
			int y[3],m[3],c[3],k[3];
			int miny=10000001;
			int minm=10000001;
			int minc=10000001;
			int mink=10000001;
		
		for(int i=0;i<3;i++){
				cin>>y[i]>>m[i]>>c[i]>>k[i];
				miny=min(miny,y[i]);
				minm=min(minm,m[i]);
				minc=min(minc,c[i]);
				mink=min(mink,k[i]);
				
		}
			
			if(miny+minm+minc+mink <1000000)
			cout<<"Case #"<<p<<": "<<"IMPOSSIBLE"<<"\n";
			 else if(miny+minm+minc+mink==1000000){
			 
			      cout<<"Case #"<<p<<": "<<miny<<" "<<minm<<" "<<minc<<" "<<mink<<"\n";
	        	}
		
	       	else{
			int a[4]={0};
			a[0]=miny;
			a[1]=minm;
			a[2]=minc;
			a[3]=mink;
			int iy=-1,im=-1,ic=-1,ik=-1;
			
			sort(a,a+4);
			for(int i=0;i<4;i++){
				if(a[i]==miny && iy== -1){
					iy=i;
				}
				else if(a[i]==minm && im==-1){
					im=i;
				}
				else if(a[i]==minc && ic==-1){
					ic=i;
				}
				else if(a[i]==mink && ik==-1){
					ik=i;
				}
				
				else{
					
				}
			}
			
			int sum[4];
			sum[0]=a[0];
			sum[1]=sum[0]+a[1];
			sum[2]=sum[1]+a[2];
			sum[3]=sum[2]+a[3];
			
			int k=3;
			while(sum[k]>1000000){
				if(sum[k]-1000000>a[k]){
					a[k]=0;
				
					k--;
				}
				else{
					a[k]=a[k]-(sum[k]-1000000);
					k--;
				}
			}
			
			cout<<"Case #"<<p<<": "<<a[iy]<<" "<<a[im]<<" "<<a[ic]<<" "<<a[ik]<<"\n";
		
	       	}	
		}
		
		k++;
	}
	return 0;
}

// Prime Cuts
// this problem will get presentation error if we print all array elements in a single loop
// array last element should print separately.

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

	int n,c;
	
	while(cin>>n>>c) {
		cout<<n<<" "<<c<<": ";
	
	int arr[n];
        int cnt=0;
    
	for(int i=1;i<=n;i++){
		int flag=0;
		
		for(int k=2;k<i;k++)
			
			if(i%k==0){	
			flag=1;	
                        break;   
		   	  
			}
		
		}
		
		if(flag==0){
			
			arr[cnt]=i;		
		        cnt++;  	
			  
                         }
   	
	           }
	
	
	
	if(2*c-1>cnt || 2*c>cnt ){
	  	
		for(int i=0;i<cnt-1;i++){
			
			cout<<arr[i]<<" ";
		}
		
		cout<<arr[cnt-1];
		cout<<endl;	
	   
	}
	
	
		else if(cnt%2==0){
			
		int pos=cnt/2;
		 
		for(int i=pos-c;i<pos+c-1;i++){
			
			cout<<arr[i]<<" ";
		  
		}
		
		cout<<arr[pos+c-1];
		cout<<endl;
		
	  }
	
	
	
		else if(cnt%2==1){
		   
		 int pos=cnt/2;
		 int k=((2*c)-2)/2;
		  
		for(int i=pos-k;i<pos+k;i++){
			
			cout<<arr[i]<<" ";
		}
		
	        cout<<arr[pos+k];
		cout<<endl;
		
        	}

         	  
          cout<<endl;
        
      }
	
}

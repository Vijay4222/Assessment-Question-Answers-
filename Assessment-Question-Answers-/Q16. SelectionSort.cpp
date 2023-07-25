#include <bits/stdc++.h>
using namespace std;

  
int main(){
	int a [ ]={38,52,9,18,6,62,13};
	int min,temp=0;
	int n=sizeof(a)/sizeof(int);	 
	    
	for(int i=0;i<n;i++){
		min=i;
		
		for(int j=i+1;j<n;j++){
			 
		 if(a[j]<a[min]){
		 min=j;
			
	    }
		}   
		    temp=a[i];
			 a[i]=a[min];
		     a[min]=temp;
	}

for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    return 0;
	    }
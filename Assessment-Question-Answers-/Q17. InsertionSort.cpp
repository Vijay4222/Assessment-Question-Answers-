#include <bits/stdc++.h>
using namespace std;

  
int main(){
	int a [ ]={6,1,5,2,4,3};
	int key,j;
	int n=sizeof(a)/sizeof(int);	 
	    
	for(int i=1;i<n;i++){
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key){
			 
		 a[j+1]=a[j];
			
			j--;
		}
			 a[j+1]=key;
		
	}

for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    return 0;
	    }
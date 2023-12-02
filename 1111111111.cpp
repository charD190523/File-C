#include <iostream>
using namespace std;

int main (){
	int i, j, hang, cot, m,k;
	cout << "- Nhap so hang:";
	cin >> hang;
	cout << "- Nhap so cot:";
	cin >> cot;  
	k=0;
	for (i=0; i<hang; i++){
	  m = i;
	   for (j=0; j<cot; j++){
	    if (j+i < cot){
	      cout << j+i+1; 
	      } else if(i < cot) {  
	        cout << m; 
	      	m--;
	      } else {
			 
	        cout << m+i+1-k-cot;
			k++;
			
				
			}
	    
	    }
	   cout << "\n";
	  }
	}
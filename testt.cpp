#include <stdio.h>
int main() {
	int n, dem=0;
	scanf("%d", &n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		b[i]=1;
	}
    for(int i = 0;i<n; i++){
        int dem=0;
		if(b[i]){
			for(int j=i;j<n;j++){
				if(a[i]==a[j]){
					dem++;
					b[j]=0;
				}
			}	
		}
		if(dem>1) printf("%d ", a[i]);
    }
 }
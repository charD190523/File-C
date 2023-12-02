#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k,len,i;
    char c[50];
    
    scanf("%d",&k);
    while (k-- >0){
        len=0;
        scanf("%s",&c);
        
        while(c[len]!= '\0'){
            len++;
        }
        // for (i=0;i<len;i++){
        //     // printf("%d\n",atoi(&c[i]));
        //     printf("%d\n",c[i] - '0');
        
        for (i=0;i<len-1;i++){
            if((c[i] - '0') <= (c[i+1]- '0')){

                continue;
            }
            else{

                printf("NO\n");
                break;
            }
        }
        if(i==len-1)
            printf("Yes\n");
    
         
    }
    return 0;
}


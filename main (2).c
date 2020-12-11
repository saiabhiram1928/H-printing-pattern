
#include <stdio.h>

int main()
{ int a,i,j;
 for(i=1;i<4;i++){
     if (i!=2){
     for(j=1;j<=4;j++){
         if(j==1 ){
             printf("*");
         } else if(j==4){
             printf("*\n");
         }
         else if(j==2 || j==3){
             printf(" ");
         }
     }
     
    
}
if(i==2){
    for(a=1;a<=4;a++){
        printf("*");
    }
printf("\n");
    
}
}
    return 0;
}

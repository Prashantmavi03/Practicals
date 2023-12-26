#include<stdio.h>
int main(){
    int numb[13]={1,4,2,5,3,6,7,9,10,8,13,11,12};
    int temp , i, k;
   
    for(k=0 ; k<=12 ; k++){
        
        for( i=0 ; i<13 ;i++){
            if(numb[i]> numb[i+1]){
                temp = numb[i+1];
                numb[i+1]= numb[i];
                numb[i]=temp;   
        }
    }
    }
   
    for( i=0 ; i<=13 ;i++){    
        printf("%d\n",numb[i]);
    }
    
    return 0;
}
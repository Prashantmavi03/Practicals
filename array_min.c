#include <stdio.h>
int main(){
    int numb[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int temp=numb[0];
    int i , pos ;

    for(i=1 ; i<13 ; i++){
        if(numb[i]<= temp){
            temp = numb[i];
            pos = i;
        }
    }
    
    printf("Minimum in array is %d\n", temp);
    printf("position is %d\n",pos);
}
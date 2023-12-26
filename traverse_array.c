#include <stdio.h>
int main(){
    int numb[13]= {1,4,2,5,3,6,7,9,10,8,13,11,12};
    for (int i= 0 ; i<13 ; i++){
        if(i % 2 != 0){
            printf("%d\t",numb[i]);
        }
    }

    return 0;
}
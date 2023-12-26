#include <stdio.h>
#include <stdlib.h>

main(){
    FILE* fp;
    fp = fopen("text.text","r");
    if(fp==NULL){
       printf("file dose not exist");
    }
    else{
        printf("file exist");   
    }
}
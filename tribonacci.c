#include<stdio.h>
int series(int n);
int main(){

    int n;
    n=5;
    for (int i=0; i<=n; i++){
        printf("%d\t", series(i));
        }
}

int series(int n){
    if (n<3){
        return n;
    }
    else{
        return series(n-1)+series(n-2)+series(n-3);
    }

}
#include<stdio.h>
int nCr();//function calling

int main(){
    nCr(5,3);
    return 0;

}
  int nCr(int n,int r){ //function defination
    //   int n,C,r;
    // printf("enter n:");
    // scanf("%d",&n);

    // printf("enter r:");
    // scanf("%d",&r);
    // if we want to take input from user
    int a=1;
   if(n>r){
    for(int i=1;i<=n;i++){
        a=a*i;
      }
      int b=1;
      for(int i=1;i<=n-r;i++){
        b=b*i;
      }
     int C=a/b;
    printf("%dC%d is %d",n,r,C);
   }
   else{
    printf("enter valid credentials");
   }
    return 0;
  }
#include <stdio.h>
/****************************************************/
int MyAbs(int x);
int Add(int x, int y);
/****************************************************/
/****************************************************/
int MyAbs(int x){

    if(x<0) return -x;
    return x;
    }
/****************************************************/
int Add(int x, int y){
    return x+y;
    }
/****************************************************/
/****************************************************/
int main(){
    printf("suma = %d\n",Add(4,9));

    return 0;
    }

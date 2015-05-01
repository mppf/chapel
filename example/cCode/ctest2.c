#include <stdlib.h>
#include <stdio.h>

int sayhello(int);
//void fact(int);
//------------------------------
int sayhello2(int k){
    printf("Hello, k=%d\n",k);
    return k+1;
}

void fact2(int j){
    int new=sayhello(j)+1;
    printf("Hello, new=%d\n",new);
}
/*
void main (){
    fact(1);
    fact2(2);
}
*/

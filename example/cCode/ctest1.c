#include <stdlib.h>
#include <stdio.h>

int sayhello2(int);
void fact2(int);
//------------------------------
int sayhello(int k){
    printf("Hello, k=%d\n",k);
    return k+1;
}

void fact(int j){
    int new=sayhello2(j)+1;
    printf("Hello, new=%d\n",new);
}

int main (){
    fact(1);
    fact2(2);
    return 0;
}

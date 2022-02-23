#include <stdio.h>

int fatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}

int main(){
    printf("Hello World\n");
    int res = 0;
    for (int i = 0; i < 10; i++)
    {
        res = fatorial(i);
        printf("x = %d; i = %d\n", i, res);
    }
        
}
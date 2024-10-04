#include<stdio.h>

int main(void){
    int n,i;
    printf("いくつまで\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            printf("Fizz Buzz\n");
        }
        else if(i%3==0){
            printf("Fizz\n");
        }
        else if(i%5==0){
            printf("Buzz\n");
        }
        else{
            printf("%d\n",i);
        }
    }

    return 0;

}

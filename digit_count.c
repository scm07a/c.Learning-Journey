#include <stdio.h>
// The user will input a number if we will take that number we need to also store inside another value to have the original number
int main(){
    int remainder,n,n_bak,digits=0;
    printf("Enter The Number You Want To Get The Number Of Digits:");
    scanf("%d",&n);
    n_bak=n;
    while (n!=0){
        n/=10;//So it doesnt get remainder of the same number
        digits++;
    }
    printf("%d has %d Digits.",n_bak,digits);
    return 0;
}
#include <stdio.h>

int main() {
    int i = 1, n,even=0,odd=0;

    while(i<=10){
        scanf("%d",&n);
        if(n%2==0){
            even++;
        }
        else{
            odd++;
        }
        i++;

    }
    printf("%d %d",odd,even);

    return 0;
}
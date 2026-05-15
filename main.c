#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < 2*(n-2)+1; i++) {
        //building the left half and @
        for(int j = 0; j < n-2; j++) {

            if((i+1)%2 != 0 && i != n-2) {
                printf("*");
            }
            else if((i+1)%2 == 0 && i != n-2) {
                printf("-");
            }
        }
        if(i == n-2){
            for(int j = 0; j < n-1; j++) {
                printf(" ");
            }
            printf("@");
        }


        //building the right half
        if(i != n-2) {
            if(i != n-2) {
                printf("\\ ");
            }
            for(int j = 0; j < n-1; j++) {
                if(j == 0) {
                    printf("/");
                }
                else if((i+1)%2 != 0) {
                    printf("*");
                }
                else {
                    printf("-");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
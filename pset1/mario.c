#include<stdio.h>
#include<cs50.h>

int main(void){
    int height = get_int("Enter the height: \n");
    while (height <= 0 || height >= 9){
        printf ("Incorrect height!\n");
        height = get_int("Enter the height: \n");
    }
    for(int i = 0; i < height; i++){
        for(int j = height-1; j>i; j--){
            printf(" ");
        }
        for(int k = 0; k <= i; k++){
            printf("#");
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <cs50.h>

int sigma(int n);

int main(void)
{
    int a = get_int("Enter number: \n");
    printf("result of sygma: %i\n", sigma(a));
}

int sigma(int n){

    if(n == 0){
        return 0;
    }
    else{
        return n + sigma(n-1);
    }
}

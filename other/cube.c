#include <stdio.h>

int cube(int input);

int main(void){
     int x = 2;
     printf("x is %i\n", x);
     x = cube(x);
     printf("x is %i\n", x);
}

int cube(int input){
     int output = input * input * input;
     return output;
}

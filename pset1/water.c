#include <stdio.h>
#include <cs50.h>

int main(void){
    int waterminutes = get_int("How many minutes have you been in the shower?\n");
    int bottles = waterminutes*12;
    printf("bottles: %i\n", bottles);
}

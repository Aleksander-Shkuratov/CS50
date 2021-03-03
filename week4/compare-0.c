#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Say something: ");
    string s = get_string("");

    printf("Say something: ");
    string t = get_string("");

    if (s == t){
        printf("You typed the some thing!\n");
    }
    else
    {
        printf("You typed different things!\n");
    }
}

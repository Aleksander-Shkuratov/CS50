#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[]){

    if(argc != 2){
        printf("Next time, enter the key with the second argument. \n");
        return 1;
    }
    else{
        for (int i = 0, n = strlen(argv[1]); i < n; i++){
            if (!isdigit(argv[1][i])){
                printf("The key is not a number! Next time, enter a number as the key. \n");
                return 1;
            }
        }
    }

    int key = atoi(argv[1]);
    string s = get_string("Enter the text:\n");

    printf("Source text: ");
    for (int i = 0, n = strlen(s); i < n; i++){
        printf("%c", s[i]);
    }
    printf("\n");

    printf("Key: %i \n", key);

    printf("Encrypted text: ");
    for (int i = 0, n = strlen(s); i < n; i++){
        if(isalpha(s[i])){
            if(isupper(s[i])){
                int let = s[i];
                int criplet = (let - 65 + key)%26 + 65;
                printf("%c",criplet);
            }
            else{
                int let = s[i];
                int criplet = (let - 97 + key)%26 + 97;
                printf("%c", criplet);
            }
        }
        else{
            printf("%c", s[i]);
        }
    }
}

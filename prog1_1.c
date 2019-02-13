#include <stdio.h>

int main(){

    char Header[256];

    printf(" Assignment #1-1,Samantha Wagner,swagner210@yahoo.com\n", Header);

    char name[256];

    printf("What is your name?\n");

    scanf("%[^\n]s", name);

    printf("Hello %s!\n", name);

    return 0;
}

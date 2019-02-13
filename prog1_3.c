#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1_2.h"

int main(int argc,char *argv[]){

    printf("Assignment #1-3,Samanatha Wagner,swagner210@yahoo.com\n");

    int N = atoi(argv[1]);
    int i;
    char input[256];

    if(argc<2){
         printf("This program expects a single command line argument");
         return -1;
    }

    char tokens[256][256];
    char space[]=" \n";
 
    STACK* thisstack=MakeStack(8);


    for(int i=1; i<=N; i++){
         printf("> ");
         fgets(input,256,stdin);
         input[strlen(input)-1]='\0';
         int numtok = 0;
         char *thistok=strtok(input,space);         //Find the first token

        while(thistok != NULL){
             strcpy(tokens[numtok],thistok);        //copy token we just found to numtok token location
             numtok++;
            thistok=strtok(NULL,space);             //find next token if there is 1
        }

        if(numtok==2){
        if(strcmp(tokens[0],"push")==0){
             Push(thisstack,atoi(tokens[1]));    
         }
         }

       if(numtok==1){
          if(strcmp(tokens[0],"pop")==0){
             printf("%d\n",Pop(thisstack));      
            }
        }
    } 

}


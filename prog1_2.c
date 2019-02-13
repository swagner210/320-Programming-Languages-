#include <stdio.h>
#include <stdlib.h>
#include "prog1_2.h"

STACK* MakeStack(initialCapacity){
 
    STACK* stack=(STACK*)malloc(sizeof(STACK));
    stack->size=0;                                               
    stack->capacity=initialCapacity;                            
    stack->data = (int*)malloc(stack->capacity * sizeof(int));  //array of integers
    return stack;
}

void Push(STACK *stackPtr,int data){
    if(stackPtr->size >=stackPtr->capacity){
        Grow(stackPtr);    
    }
    if(stackPtr->size <= stackPtr->capacity){
        stackPtr->size++;
        stackPtr->data[stackPtr->size]= data;      //increase size to put new data in a size
    }
}

int Pop(STACK *stackPtr){
    if(stackPtr->size==0){
        return -1;
    }
    
    return stackPtr->data[stackPtr->size--];
     
}

void Grow(STACK *stackPtr){
    stackPtr->capacity=stackPtr->capacity*2;
    int *cpyarr= (int*)malloc(sizeof(int)*stackPtr->capacity);  //create new array of size capacity
    for(int i=0;i<=stackPtr->size;i++){
        cpyarr[i]=stackPtr->data[i];                            //copy our array into new array for every element
    }
                                                         
    free(stackPtr);
    
}

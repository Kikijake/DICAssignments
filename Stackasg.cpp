//
// Created by Admin on 12/31/2022.
//
#include "stdio.h"
#include "stdlib.h"

#define MAXOFSTACK 10
int toCount=0;

struct stack{
    int data[MAXOFSTACK];
    int top;
};
typedef struct stack st;

int ifStackIsFull(st *myStack){
    if(myStack->top==MAXOFSTACK-1){
        return 1;
    } else{
        return 0;
    }
}

int ifStackIsEmpty(st *myStack){
    if(myStack->top==-1){
        return 1;
    } else{
        return 0;
    }
}

void create_emptyStack(st *myStack){
    myStack->top=-1;
}

void pushToStack(st *myStack, int value){

    if(ifStackIsFull(myStack)){
        printf("Stack is full");
    } else{
        myStack->top++;
        myStack->data[myStack->top]=value;
    }
    toCount++;
}
void PrintingData(st *myStack){
    if(ifStackIsEmpty(myStack)){
        printf("Stack is Empty");
    } else{
        int place=1;
        for (int i = myStack->top; i > -1 ; i--) {
            printf("Data %d: %d\n",place,myStack->data[i]);
            place++;
        }
    }
}

int main(){
    st *myStack=(st*)malloc(sizeof (st));
    create_emptyStack(myStack);
    pushToStack(myStack,10);
    pushToStack(myStack,11);
    pushToStack(myStack,12);
    pushToStack(myStack,13);
    pushToStack(myStack,14);

    PrintingData(myStack);

    return 0;
}
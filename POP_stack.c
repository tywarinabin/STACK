#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *temp){
    if(temp->top == -1){
        return -1;
        // If top is not incrementd then the condition became Empty
    }
    else{
        return 0;
    }
}
int isFull(struct stack *temp){
    if(temp->top == temp->size-1){
        // If top is equal to Size -1 i.e last index of the arrow then it will Full and called overflow .
       return -1;
    }
    return 0;
}
void push(struct stack *temp , int ndata){
    if(isFull(temp)){
       printf("Stack Overflow. \n");
    }
    else{
        temp->top++;
        temp->arr[temp->top] = ndata;
    }
}
void pop(struct stack *temp){
    if(isEmpty(temp)){
        printf("Stack Underflow \n");
    }
    else{
        int value = temp->arr[temp->top];
        temp->top--;
        printf("%d is popped \n", value);
    }
}
int main(){
struct stack *ptr = malloc(sizeof(struct stack));
ptr->size = 1;
ptr->top = -1;
ptr->arr = (int *) malloc (ptr->size*(sizeof(int)));
push(ptr,56);
pop(ptr);
pop(ptr);
printf("%d", isEmpty(ptr));
return 69;
}
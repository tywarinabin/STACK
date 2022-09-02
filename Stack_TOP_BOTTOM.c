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
    }
    else{
        return 0;
    }
}
int isFull(struct stack *temp){
    if(temp->top == temp->size-1){
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
int Find_top(struct stack *topper){
    if(topper->top == -1){
        printf("Your Stack is already Empty.");
        return -1;
    }
    else{
        return topper->arr[topper->top];
    }
}
int Find_Bottom(struct stack *bottom){
    if(bottom->top == -1){
        printf("Your Stack is already Empty.");
        return -1;
    }
        else {
            return bottom->arr[0];
        }
}
int main(){
struct stack *str = malloc(sizeof(struct stack));
str->size = 10;
str->top = -1;
str->arr  = (int*)malloc(str->size*(sizeof(int)));
// To find Top Element of the Stack
push(str,69);
push(str,45);
push(str,4);
push(str,95);
printf("The top element of the stack is : %d\n", Find_top(str));
printf("The bottom element of the stack is: %d\n", Find_Bottom(str));
    return 90;
}
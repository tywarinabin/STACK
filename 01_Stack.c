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
int pop(struct stack *temp){
    if(isEmpty(temp)){
        printf("Stack Underflow.");
        exit(0);
    }
    else{
        int value = temp->arr[temp->top];
        temp->top --;
          return value;
    }
}
int main(){
struct stack *ptr = malloc(sizeof(struct stack));
ptr->size = 5;
ptr->top = -1;
ptr->arr = (int *) malloc (ptr->size*(sizeof(int)));

printf("Empty: %d \n", isEmpty(ptr));
printf("Full : %d\n", isFull(ptr));
push(ptr,61);
push(ptr,83);
push(ptr,72);
push(ptr,59);
push(ptr,97);

printf("%d is popped \n", pop(ptr));
printf("%d is popped \n", pop(ptr));
printf("%d is popped \n", pop(ptr));
printf("%d is popped \n", pop(ptr));
printf("%d is popped \n", pop(ptr));

printf("After Pushing ---> Empty: %d \n", isEmpty(ptr));
printf("After Pushing ---> Full : %d\n", isFull(ptr));
printf("%d is popped \n", pop(ptr));
    return 0;
}
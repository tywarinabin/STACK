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
int main(){
    struct stack *ptr = malloc(sizeof(struct stack));
 ptr->size=0;
ptr->top = -1;
ptr->arr = (int *) malloc (ptr->size*(sizeof(int)));
printf("%d\n\n", isEmpty(ptr));
printf("%d\n\n", isFull(ptr));
push(ptr,56);
printf("%d\n\n", isFull(ptr));
push(ptr,42);
printf("%d\n\n", isFull(ptr));
printf("%d\n\n", isEmpty(ptr));
}
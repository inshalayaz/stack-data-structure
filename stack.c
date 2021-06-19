#include<stdlib.h>

struct Stack{
    int data;
    struct Stack *next;
};

struct Stack *top = NULL;

void push(int value){
    struct Stack *temp;
    temp = (struct Stack*)malloc(sizeof(struct Stack));
    temp->data = value;
    temp->next = NULL;

    if(top == NULL){
        top = temp;
    }else{
        struct Stack *temp2 = top;
        top = temp;
        top->next = temp2;
    }


}

void printNodes(){
    if(top == NULL){
        printf("The List is empty");
    }else{
        struct Stack *curr = top;
        while(curr != NULL){
            printf("%d \n", curr ->data);
            curr = curr ->next;

        }
    }
}

void peak(){

    printf("%d",top->data);
}

void pop(){
    struct Stack *temp = top;

    temp = top;
    top = top->next;
    printf("%d is popped out of stack.\n This is New Stack \n", temp->data);
    free(temp);

}

void main(){
    push(5);
    push(10);
    push(13);
    push(18);
    printNodes();
    pop();
    printNodes();
}
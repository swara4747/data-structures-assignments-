#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

#define max 100

char stack[max];

int top=-1;

int isEmpty(){
    return top==-1;
}


int isFull(){
    return top==max-1;
}


void push(char c){
    if (isFull()){
        printf("stack overflow");
        return;
    }
    stack[++top]=c;
}


char pop(){
    if (isEmpty()){
        printf("stack underflow");
        return;
    }
    return stack[top--];
}



char peek() {
    if (isEmpty()) {
        return '\0';
    }
    return stack[top];
}


int precedence(char operator){
    switch(operator){
        case '^':
        return 3;
        
        case '*':
        case '/':
        case'%':
        return 2;
        
        case '+':
        case '-':
        return 1;
        
        default:
        return 0;
    }
}


void infixtopostfix(char infix[], char postfix[]){
int i=0, j=0;
char token;

while ((token=infix[i++])!='\0'){
    
    //operand
    if (isalnum(token)){
        postfix[j++]=token;
    }
    
    //open paranthesis
    else if (token=='('){
        push(token);
    }
    
    else if (token==')'){
        while (!isEmpty() && peek()!='('){
            postfix[j++]=pop();
        }
        pop();
    }
    
    else //operator precedence 
    {
        while (!isEmpty() && precedence(peek())>=precedence(token)){
            postfix[j++]=pop();
        }
        push(token);
    }
}


//pop remaining operators from stack

while(!isEmpty()){
    postfix[j++]=pop();
}

postfix[j]='\0';
}

int main(){
    char infix[100], postfix[100];
    
    printf("enter infix expression");
    scanf("%s", infix);
    infixtopostfix(infix, postfix);
    
    printf("postfix expression is %s", postfix);
}

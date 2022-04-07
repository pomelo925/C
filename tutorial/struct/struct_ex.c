/*
 Stack Manipulations without Function
 
 Author: Michael Chen, 2018.
 License: MIT.
 */
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node {
    int data;
    Node *next;
};


typedef struct stack Stack;
struct stack {
    Node *top;
};

int main(){
    bool failed = false;

    // Create a Stack object.
    Stack *st = malloc(sizeof(Stack));
    if (!st) {      //如果記憶體配置失敗要做的處置, 也可寫成if(st==0)
        return EXIT_FAILURE;
    }
    
    st->top = NULL;;
    
    // Insert an element.
    {
        Node *node = malloc(sizeof(Node));
        if (!node) {
            perror("Failed to allocate a node");
            failed = true;
            goto STACK_FREE;
        }
        
        node->data = 9;
        node->next = NULL;
        
        // Point st->top to node.
        st->top = node;
    }
    
    // Peek top element.
    if (st->top->data != 9) {
        perror("It should be 9");
        failed = true;
        goto STACK_FREE;
    }
    
    // Insert another element.
    {
        // Create a new node.
        Node *node = malloc(sizeof(Node));
        if (!node) {
            perror("Failed to allocate a node");
            failed = true;
            goto STACK_FREE;
        }
        
        node->data = 5;
        node->next = NULL;
        
        // Update st->top.
        node->next = st->top;
        st->top = node;
    }
    
    // Peek top element again.
    if (st->top->data != 5) {
        perror("It should be 5");
        failed = true;
        goto STACK_FREE;
    }
    
    // Pop top element.
    do {
        Node *curr = st->top;
        if (!curr) {
            break;
        }
        
        // Update st->top.
        st->top = curr->next;
        
        if (curr->data != 5) {
            perror("It should be 5");
            failed = true;
            goto STACK_FREE;
        }
        
        free(curr);
    } while (0);
    
    // Peek top element again.
    if (st->top->data != 9) {
        perror("It should be 9");
        failed = true;
        goto STACK_FREE;
    }
    
STACK_FREE:
    {
        Node *curr = st->top;
        Node *temp;
        while (curr) {
            temp = curr;
            curr = curr->next;
            free(temp);
        }
        
        free(st);
    }
    
    if (failed) {
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
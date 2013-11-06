//
//  main.c
//  Lektion2
//
//  Created by Markus Andersson Noren on 2013-11-06.
//  Copyright (c) 2013 Markus Andersson Noren. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int key;
    struct Node* nextNode;
};

struct Node* pushAtFront(struct Node* listhead, int newKey){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->nextNode = listhead;
    newNode->key = newKey;
    return newNode;
}

void printList(struct Node*);

int main(int argc, const char * argv[])
{
    char tmp;
    int key;
    struct Node* listHead;
    listHead = (struct Node*)malloc(sizeof(struct Node));


    
    tmp = 10;
    while (tmp-- > 0) {
        listHead = pushAtFront(listHead, tmp);
    }
    
    key = pop(listHead);
    printf("%i Poppat varde var", key);
    
    
    printList(listHead);
    return 0;
}

void printList(struct Node* listHead){
    while (listHead != NULL) {
        printf("%i ", listHead->key);
        listHead = listHead->nextNode;
    }
    printf("\n");
}

int pop(struct Node** listHead){
    int retKey;
    struct Node* newListHead;
    retKey = (*listHead)->key;
    newListHead = (**listHead).nextNode;
    free(*listHead);
    *listHead = newListHead;
    return retKey;
};


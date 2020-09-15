//Owner: Kumar Ankit
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

void create(struct node **h){
    struct node *curr, *ptr;
    for(int i=0;i<5;i++){
        curr = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &curr->data);
        curr->next = curr->prev = NULL;
        if(*h == NULL{
            *h = curr;
            ptr = curr;
        }else{
            ptr->next = curr;
            curr->prev = ptr;
            ptr = curr;
        }
    }
}

void display(struct node *h){
    struct node *curr;
    for(curr = h; curr!=NULL; curr=curr->next){
        printf("%d ", curr->data);
    }
    printf("\n");
}

void display_reverse(struct node *h){
    struct node *ptr=h;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr->prev;
    }
    printf("\n");
}

void insert(struct node **h, int v, int p){
    struct node *curr, *ptr;
    curr = (struct node *)malloc(sizeof(struct node));
    curr->data = v;
    curr->prev = curr->next = NULL;
    if(*h == NULL){
        *h = curr;
    }else if(p==0){
        curr->next = *h;
        (*h)->prev = curr;
        (*h) = curr;
    }else{
        ptr = *h;
        int i=1;
        while(i<p && ptr->next != NULL){
            ptr = ptr->next;
            i++;
        }
        if(ptr->next == NULL){
            curr->prev = ptr;
            ptr->next = curr;
        }else{
            curr->prev = ptr;
            curr->next = ptr->next;
            ptr->next = curr;
            curr->next->prev = curr;
        }
    }
}

void delete(struct node **h, int p){
    struct node *ptr;
    if(*h == NULL){
        printf("Linked List is empty\n");
    }else{
        ptr = *h;
        int i=1;
        while(i<p && ptr!=NULL){
            ptr = ptr->next;
            i++;
        }
        if(ptr == NULL){
            printf("Node not found\n");
        }else if(ptr == *h && ptr->next == NULL){
            *h = NULL;
            free(ptr);
        }else if(ptr == *h){
            (*h) = ptr->next;
            (*h)->prev = NULL;
            free(ptr);
        }else if(ptr->next == NULL){
            ptr->prev->next = NULL;
            free(ptr);
        }else{
            ptr->prev->next = ptr->next;
            ptr->next->prev = ptr->prev;
            free(ptr);
        }
    }
}

int main(){

    return 0;
}
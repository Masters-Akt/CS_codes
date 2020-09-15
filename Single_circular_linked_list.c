// Owner: Kumar Ankit
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void create(struct node **h){
    struct node *curr, *ptr;
    for(int i=0;i<5;i++){
        curr = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &curr->data);
        curr->next = NULL;
        if(*h == NULL){
            *h = curr;
            ptr = curr;
            curr->next = *h;
        }else{
            curr = *h;
            ptr->next = curr;
            ptr = curr;
        }
    }
}

void display(struct node *h){
    if(h == NULL){
        return;
    }
    struct node *ptr;
    for(ptr=h; ptr->next!=h; ptr=ptr->next){
        printf("%d ", ptr->data);
    }
    printf("\n");
}

void insert(struct node **h, int v, int p){
    struct node *curr, *ptr;
    curr = (struct node *)malloc(sizeof(struct node));
    curr->data = v;
    curr->next = NULL;
    if(*h == NULL){
        *h = curr;
        curr->next = curr;
    }else if(p==0){
        for(ptr = *h; ptr->next != *h; ptr = ptr->next);
            curr->next = *h;
            ptr->next = curr;
            *h = curr;
    }else{
        ptr = *h;
        int i=1;
        while(i<p){
            ptr = ptr->next;
            i++;
        }
        curr->next = ptr->next;
        ptr->next = curr;
    }
}

void delete(struct node **h, int p){
    struct node *ptr, *prev;
    if(*h == NULL){
        printf("Empty\n");
    }else{
        ptr = *h;
        int i = 1;
        while(i<p && ptr->next!= *h){
            prev = ptr;
            ptr = ptr->next;
            i++;
        }
        if(ptr->next == *h && i<p){
            printf("Node Not Found\n");
        }else if(ptr == *h && ptr->next == ptr){
            *h == NULL;
            free(ptr);
        }else if(ptr == *h){
            struct node *temp;
            for(temp = *h; temp->next != *h; temp = temp->next);
            temp->next = (*h)->next;
            *h = (*h)->next;
            free(ptr);
        }else{
            prev->next = ptr->next;
            free(ptr);
        }
    }
}

int main(){
    struct node *head = NULL;
    create(&head);
    display(head);
    return 0;
}
// Remark: Work needed
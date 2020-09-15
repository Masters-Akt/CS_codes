//Owner: Kumar Ankit
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
        if(*h==NULL){
            *h = curr;
            ptr = curr;
        }else{
            ptr->next = curr;
            ptr = curr;
        }
    }
}

void display(struct node *h){
    struct node *curr;
    for(curr=h; curr!=NULL; curr=curr->next){
        printf("%d ", curr->data);
    }
    printf("\n");
}

void insert(struct node **h, int v, int pos){
    struct node *curr;
    curr = (struct node *)malloc(sizeof(struct node));
    curr->data = v;
    curr->next = NULL;
    if(*h == NULL){
        *h == curr;
    }else if(pos==0){
        curr->next = *h;
        *h = curr;
    }else{
        struct node *ptr = *h;
        int i=1;
        while(i<pos && ptr->next!=NULL){
            ptr=ptr->next;
            i++;
        }
        curr->next = ptr->next;
        ptr->next = curr;
    }
}

void delete(struct node **h, int p){
    struct node *ptr, *prev;
    if(*h == NULL){
        printf("EMPTY\n");
    }else{
        ptr = *h;
        int i = 1;
        while(i<p && ptr!=NULL){
            prev = ptr;
            ptr = ptr->next;
            i++;
        }
        if(ptr == NULL){
            printf("Node not present\n");
        }else if(ptr == *h){ //Alternative: else if(pos == 1)
            *h == ptr->next;
            free(ptr);
        }else{
            prev->next = ptr->next;
            free(ptr);
        }
    }
}

void search(struct node *h, int v){
    struct node *ptr;
    bool ch = false;
    for(ptr = h; ptr!=NULL; ptr = ptr->next){
        if(ptr->data == v){
            printf("Found\n");
            ch = true;
            break;
        }
    }
    if(ch == false){
        printf("Not Found\n");
    }
}

int main(){
    struct node *head1 = NULL;
    create(&head1);
    return 0;
}
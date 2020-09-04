//Owner: Kumar Ankit
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void create(struct node **h, int n){
    struct node *curr, *ptr;
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
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
    printf("The linked list is: ");
    for(curr=h; curr!=NULL; curr=curr->next){
        printf("%d ", curr->data);
    }
    printf("\n");
}

void reverse(struct node **h){
    struct node *curr = *h;
    struct node *next = NULL;
    struct node *prev = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *h = prev;
}

int main(){
    struct node *head = NULL;
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    create(&head, n);
    display(head);
    reverse(&head);
    printf("After reversing:\n");
    display(head);
    return 0;
}
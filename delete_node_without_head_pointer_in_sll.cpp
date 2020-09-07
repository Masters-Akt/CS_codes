#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void create(struct node **h, int n){
    struct node *curr, *ptr;
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
    for(curr=h; curr!=NULL; curr=curr->next){
        printf("%d ", curr->data);
    }
    printf("\n");
}

void del_without_head(struct node **h, struct node *target){
    struct node *ptr = target;
    ptr->data = ptr->next->data;
    ptr = ptr->next;
    target->next = ptr->next;
    free(ptr);
}

int main(){
    struct node *head = NULL;
    printf("Enter number of initial elements in linked list : ");
    int n;
    cin>>n;
    create(&head, n);
    display(head);
    struct node *temp = head;
    int i = rand()%n;
    cout<<"Position in 0 based indexing : "<<i<<endl;
    while(i--){
        temp = temp->next;
    }
    del_without_head(&head, temp);
    display(head);
    return 0;
}
//Owner: Kumar Ankit

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
    int r;
    int c;
    int v;
    struct node *next;
};

void create(struct node **h){
    struct node *ptr, *curr;
    *h = (struct node *)malloc(sizeof(struct node));
    printf("Enter header node: ");
    scanf("%d%d%d",&(*h)->r, &(*h)->c, &(*h)->v);
    (*h)->next=NULL;
    ptr=(*h);
    printf("Enter non-zero values: \n");
    for(int i=0; i<(*h)->v; i++){
        curr = (struct node *)malloc(sizeof(struct node));
        scanf("%d%d%d",&curr->r, &curr->c, &curr->v);
        curr->next = NULL;
        ptr->next = curr;
        ptr=curr;
    }
}

void display(struct node *h){
    struct node *ptr=h;
    for(int i=0; i<h->r; i++){
        for(int j=0;j<h->c;j++){
            bool ch=false;
            for(ptr=h; ptr!=NULL; ptr=ptr->next){
                if(ptr->r==i && ptr->c==j){
                    printf("%d ", ptr->v);
                    ch=true;
                    break;
                }
            }
            if(ch==false){
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void transpose(struct node *h){
    struct node *p1;
    for(p1=h; p1!=NULL; p1=p1->next){
        int temp=p1->r;
        p1->r=p1->c;
        p1->c=temp;
    }
}

void add(struct node *h1, struct node *h2, struct node **h3){
    if(!(h1->r==h2->r && h1->c==h2->c)){
        printf("Matrices cannot be added");
        return;
    }
    (*h3) = (struct node *)malloc(sizeof(struct node));
    (*h3)->r = h1->r;
    (*h3)->c = h1->c;
    (*h3)->v = h1->v + h2->v;
    struct node *ptr = *h3;
    struct node *p1, *curr;
    for(p1=h1->next; p1!=NULL; p1=p1->next){
        curr = (struct node *)malloc(sizeof(struct node));
        curr->r = p1->r;
        curr->c = p1->c;
        curr->v = p1->v;
        curr->next = NULL;
        ptr->next = curr;
        ptr=curr;
    }
    for(p1=h2->next; p1!=NULL; p1=p1->next){
        curr = (struct node *)malloc(sizeof(struct node));
        curr->r = p1->r;
        curr->c = p1->c;
        curr->v = p1->v;
        curr->next = NULL;
        ptr->next=curr;
        ptr=curr;
    }
}

void multiply(struct node *h1, struct node *h2, struct node **h3){
    struct node *ptr, *p1, *p2, *curr;
    if(h1->c != h2->r) return;
    *h3 = (struct node *)malloc(sizeof(struct node));
    (*h3)->r = h1->r;
    (*h3)->c = h2->c;
    (*h3)->v = 0;
    (*h3)->next = NULL;
    ptr = *h3;
    for(p1 = h1->next; p1!=NULL; p1 = p1->next){
        for(p2 = h2->next; p2!=NULL; p2 = p2->next){
            if(p1->c == p2->r){
                curr = (struct node *)malloc(sizeof(struct node));
                curr->r = p1->r;
                curr->c = p2->c;
                curr->v = p1->v * p2->v;
                curr->next = NULL;
                ptr->next = curr;
                ptr = curr;
                (*h3)->v++;
            }
        }
    }
}

void simplify(struct node **h3){
    struct node *p2, *p1;
    for(p1=(*h3)->next; p1!=NULL; p1=p1->next){
        struct node *temp = p1;
        p2 = p1->next;
        while(p2!=NULL){
            if(p1->r==p2->r && p1->c==p2->c){
                p1->v = p1->v + p2->v;
                temp->next = p2->next;
                free(p2);
                p2 = temp;
            }
            temp = p2;
            p2 = p2->next;
        }
    }
}

int main(){
    struct node *head1 = NULL;
    printf("Creating first sparse matrix:\n");
    create(&head1);
    printf("The sparse matrix is:\n");
    display(head1);
    int opt;
    printf("Enter option:\n1. Transpose\n2. Addition\n3. Multiplication\nOption: ");
    scanf("%d", &opt);
    if(opt==1){
        transpose(head1);
        printf("Transpose of the matrix is:\n");
        display(head1);
    }else if(opt==2){
        struct node *head2 = NULL;
        struct node *head3 = NULL;
        printf("Creating second sparse matrix:\n");
        create(&head2);
        printf("The second sparse matrix is:\n");
        display(head2);
        add(head1, head2, &head3);
        simplify(&head3);
        printf("Addition result:\n");
        display(head3);
    }else if(opt==3){
        struct node *head2 = NULL;
        struct node *head3 = NULL;
        printf("Creating second sparse matrix:\n");
        create(&head2);
        printf("The second sparse matrix is:\n");
        display(head2);
        multiply(head1, head2, &head3);
        simplify(&head3);
        printf("Multiplication result:\n");
        display(head3);
    }
    return 0;
}
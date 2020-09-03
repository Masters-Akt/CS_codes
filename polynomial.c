#include<stdio.h>
#include<stdlib.h>

struct node{
    int coef;
    int exp;
    struct node *next;
};

void create(struct node **h, int n){
    struct node *curr, *ptr;
    ptr=*h;
    for(int i=0;i<n;i++){
        curr = (struct node *)malloc(sizeof(struct node));
        scanf("%d %d", &curr->coef, &curr->exp);
        curr->next=NULL;
        if(*h==NULL){
            *h=curr;
            ptr=curr;
        }else{
            ptr->next=curr;
            ptr=curr;
        }
    }
}

void display(struct node *h){
    struct node *temp=h;
    while(temp->next!=NULL){
        printf("%d x^ %d + ", temp->coef, temp->exp);
        temp=temp->next;
    }
    printf("%d x^ %d", temp->coef, temp->exp);
    printf("\n");
}

void join(struct node **h1, struct node *h2){
    struct node *ptr;
    if(*h1==NULL){
        *h1=h2;
        return;
    }
    for(ptr=*h1; ptr->next!=NULL; ptr=ptr->next);
    ptr->next=h2;
}

void simplify(struct node *h){
    struct node *ptr, *prev, *ptr1;
    for(ptr=h; ptr!=NULL; ptr=ptr->next){
        prev=ptr;
        ptr1=ptr->next;
        while(ptr1!=NULL){
            if(ptr->exp==ptr1->exp){
                ptr->coef=ptr->coef+ptr1->coef;
                prev->next=ptr1->next;
                free(ptr1);
                ptr1=prev;
            }
            prev=ptr1;
            ptr1=ptr1->next;
        }
    }
}

void multiply(struct node *h1, struct node *h2, struct node **h3){
    struct node *p1, *p2, *curr, *ptr;
    for(p1=h1; p1!=NULL; p1=p1->next){
        for(p2=h2; p2!=NULL; p2=p2->next){
            curr = (struct node *)malloc(sizeof(struct node));
            curr->coef = p1->coef * p2->coef;
            curr->exp = p1->exp + p2->exp;
            curr->next = NULL;
            if(*h3==NULL){
                *h3 = ptr = curr;
            }else{
                ptr->next = curr;
                ptr = curr;
            }
        }
    }
}

int main(){
    struct node *head1=NULL;
    printf("Number of terms of first polynomial = ");
    int n1;
    scanf("%d", &n1);
    create(&head1, n1);
    printf("First polynomial:\n");
    display(head1);
    struct node *head2=NULL;
    printf("Number of terms of second polynomial = ");
    int n2;
    scanf("%d", &n2);
    create(&head2, n2);
    printf("Second polynomial:\n");
    display(head2);
    int opt;
    printf("Select one option: 1. Addition\n2. Multiplication\n3. Subtraction\n4. Addition of polynomials with coefficient\nOption: ");
    scanf("%d", &opt);
    if(opt==1){
        printf("Adding both:\n");
        join(&head1, head2);
        simplify(head1);
        display(head1);
    }else if(opt==2){
        struct node *head3=NULL;
        multiply(head1, head2, &head3);
        simplify(head3);
        printf("Multiplying both:\n");
        display(head3);
    }else if(opt==3){
        printf("Subtracting second from first:\n");
        struct node *p1;
        for(p1=head2; p1!=NULL; p1=p1->next){
            p1->coef = p1->coef * (-1);
        }
        join(&head1, head2);
        simplify(head1);
        display(head1);
    }else if(opt==4){
        printf("Enter an integer coefficient for first polynomial: ");
        int c1;
        scanf("%d", &c1);
        printf("Enter an integer coefficient for second polynomial: ");
        int c2;
        scanf("%d", &c2);
        struct node *p1;
        for(p1=head1; p1!=NULL; p1=p1->next){
            p1->coef = p1->coef * c1;
        }
        for(p1=head2; p1!=NULL; p1=p1->next){
            p1->coef = p1->coef *c2;
        }
        join(&head1, head2);
        simplify(head1);
        display(head1);
    }
    return 0;
}

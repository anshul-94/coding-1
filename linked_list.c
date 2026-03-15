#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *next;
};
struct Node *head=NULL;
struct Node *newnode;
struct Node *temp;
void del_pos(int);
void insert_pos(int,int);


void add(int n){
  newnode=(struct Node *)malloc(sizeof(struct Node));
  newnode->data=n;
  newnode->next=NULL;
  if(head==NULL){
    head=newnode;
  }
  else{
    temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=newnode;
  }
}



void insert_fir(int n){
  insert_pos(n,0);
}


void del_first(){
  del_pos(0);
}



void reverse(){
  struct Node *cur=head;
  struct Node *next=NULL;
  struct Node *prev=NULL;

  while(cur!=NULL){
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
  }
  head=prev;
}


void reverse_group(int k){
  struct Node *cur=head;
  struct Node *next=NULL;
  struct Node *prev=NULL;
  while(cur!=NULL && k>0){
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
    k--;
  }
  head->next=cur;
  head=prev;
}




struct Node* reverse_k_group(struct Node* head, int k){
    struct Node *cur = head;
    struct Node *next = NULL;
    struct Node *prev = NULL;
    int count = 0;
    while(cur != NULL && count < k){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        count++;
    }
    if(next != NULL){
        head->next=reverse_k_group(next,k);
    }
    return prev;
}











void del_last(){
  if(head==NULL){
    printf("Linklist empty");
  }
  else{
    temp=head;
    while(temp->next->next!=NULL){
      temp=temp->next;
    }
    printf("Delet item : %d",temp->next->data);
    temp->next=NULL;
  }
}

void del_pos(int pos){
  if(head==NULL){
    printf("linklist is empty");
    return;
  }
  temp=head;
  if(pos==0){
    printf("Delet item : %d",temp->data);
    head=temp->next;
  }
  else{
    while(pos!=1){
      temp=temp->next;
      if(temp->next->next==NULL){
        printf("Delet item : %d",temp->next->data);
        temp->next=NULL;
        return ;
      }
      pos--;
    }
    printf("Delet item : %d",temp->next->data);
    temp->next=temp->next->next;
  }
}


void insert_pos(int n,int pos){
  if(head==NULL){
    add(n);
  }
  else{
    newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=n;
    temp=head;
    if(pos==0){
      newnode->next=head;
      head=newnode;
    }
    else{
      int i=1;
      while(i<pos && temp->next!=NULL){
        temp=temp->next;
        pos--;
      }
      newnode->next=temp->next;
      temp->next=newnode;
    }
  }
}

void show(){
  if(head==NULL){
    printf("empty");
  }
  else{
    temp=head;
    while(temp!=NULL){
      printf("%d ",temp->data);
      temp=temp->next;
    }
  }
}


int main(){
    int choice, value, position;

    do{
        printf("\n===== LINKED LIST MENU =====");
        printf("\n1. Insert at End");
        printf("\n2. Insert at First");
        printf("\n3. Insert at Position");
        printf("\n4. Delete at Position");
        printf("\n5. Delete at first");
        printf("\n6. Delete at end");

        printf("\n10. Display");
        printf("\n11. Exit");
        printf("\n12. reverse");
        printf("\n13. half reverse");
        printf("\n14. Group reverse");


        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                add(value);
                show();
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insert_fir(value);
                show();
                break;



            case 3:
                printf("Enter value: ");
                scanf("%d", &value);
                printf("Enter position: ");
                scanf("%d", &position);
                insert_pos(value, position);
                show();

                break;


            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                del_pos(position);
                show();

                break;


            case 5:
                del_first();
                show();
                break;

            case 6:
              del_last();
            break;


            case 10:
                show();
                break;
              
            case 12:
            reverse();
            show();
  
            break;

                          
            case 13:
            printf("Enter reverse node : ");
            scanf("%d", &position);
            reverse_group(position);
            show();
            break;

                          
            case 14:
            printf("Enter reverse node : ");
            scanf("%d", &position);
            head=reverse_k_group(head,position);
            show();
            break;



            case 11:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    }while(choice != 11);

    return 0;
}

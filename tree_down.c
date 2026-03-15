#include<stdio.h>
#include<stdlib.h>
struct node{
  struct node *next;
  struct node *down;
  int data;
};
struct node *head;
struct node *temp,*newnode;


void add(int p_next,int p_down,int n){
  int num=n;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->down=NULL;
  newnode->next=NULL;
  newnode->data=n;
  temp=head;
  if(head==NULL){
    head=newnode;
    return;
  }
  while(temp->next!=NULL && --p_next>0){
    temp=temp->next;
  }
  while(temp->down!=NULL && --p_down>0){
    temp=temp->down;
  }

  if(p_down==1){
    newnode->next=temp->next;
    temp->next=newnode;
  }
  else{
    newnode->down=temp->down;
    temp->down=newnode;
  }
}



void show() {

    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    struct node *col, *temp;
    int level = 0;
    int moreLevels = 1;

    while(moreLevels) {

        moreLevels = 0;
        col = head;

        while(col != NULL) {

            temp = col;
            int i = 0;

            // Move down to required level
            while(i < level && temp != NULL){
                temp = temp->down;
                i++;
            }

            if(temp != NULL){
                printf("%-6d", temp->data);
                if(temp->down != NULL)
                    moreLevels = 1;
            } else {
                printf("      ");
            }

            col = col->next;
        }

        printf("\n");
        level++;
    }
}

int main(){


add(0,0,10);
add(1,1,20);
add(7,1,70);
add(8,1,90);

add(1,2,5);
add(2,4,12);
add(4,1,50);
add(3,1,24);
add(5,2,55);
add(5,3,55);
add(4,3,45);
add(1,3,2);
add(9,3,33);

add(2,1,30);
add(1,4,1);
add(1,5,1);

add(2,2,15);
add(5,1,55);
add(2,3,12);
add(4,4,56);

add(6,1,50);
add(3,2,35);
add(3,3,35);

add(4,2,45);
add(6,3,53);
add(6,4,89);

add(7,2,99);

add(9,2,87);

add(6,2,78);
add(9,4,77);


show();
}


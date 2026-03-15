#include<stdio.h>
struct student{
  char name[10]; //why store big string
  int  roll_n;
  int  marks[5];
}s[5];
int st=0;

void add_marks(int n);


// add student 
void add_name(){
  if(st >= 5){
   printf("---------- Class full ----------\n");
   return;
  }

  st++;
  printf("enter student name. ");
  scanf("%s",s[st].name);
  s[st].roll_n=st;
  printf("rol num %s is : %d\n",s[st].name,s[st].roll_n);
  add_marks(st);
  printf("--------- successfuully added student ---------");
}

//update marks
void add_marks(int n){
  if(n>st){
    printf("------ not found student ------\n");
    return;
  }
  for (int i=0;i<5;i++){
    printf("enter marks subject num %d. : ",i+1);
    scanf("%d",&s[n].marks[i]);
  }
}


//display student
void display(int n){

  if(n>st|| n==0){
    printf("------ not found student ------\n");
    return;
  }
    printf("\nname of student : %s\n",s[n].name);
    printf("rol num %s is : %d\n",s[st].name,s[st].roll_n);
    for(int j=0;j<5;j++){
      printf("\nmarks subject num %d = %d ",j+1,s[n].marks[j]);
    }
  printf("\n-------------------------------------------------------");
}



// delelte student
void del_st(int n){
  int d=0;
    if(n>st || n==0){
      printf("------ not found student ------\n");
      return;
    }
    else{
      for(int i=0;i<=st;i++){
        if(i!=n){
          s[d]=s[i];
          d++;
        }
      }
      printf("\n------ Delete student succefully ----------");
    }
    st--;
}


void dis_all(){
  if(st==0){
    printf("\n---- class is empty. ---------\n");
    return;
  }
  for(int i=1;i<=st;i++){
    printf("\nname of student : %s\n",s[i].name);
    printf("rol num :  %d\n",s[i].roll_n);
    for(int j=0;j<5;j++){
      printf("\nmarks subject num %d = %d ",j+1,s[i].marks[j]);
    }
    printf("\n---------------------------------------\n");
  }

}

int main(){
  int n,a;

    do{
      printf("\npress 1 for add student \npress 2 for update marks \npress 3 for display \npress 4 for delete \npress 5 for exit\nPress 6 Display all student     ");
      scanf("%d",&n);
      switch(n){
      case 1:
      add_name();
      break;
      case 2:
      if(st==0){
        printf("\n---------- class is empty. ---------\n");
        break;;
      }
      printf("which student marks update. ");
      scanf("%d",&a);
      add_marks(a);
      // printf("\n------------ update marks -------------\n");
      break;


      case 3:
        if(st==0){
        printf("\n---------- class is empty. ---------\n");
        break;;
      }
      printf("which student data display. ");
      scanf("%d",&a);
      display(a);
      break;

      case 4:
      if(st==0){
        printf("\n---------- class is empty. ---------\n");
        break;;
      }
      printf("Enter delete  student roll num. ");
      scanf("%d",&a);
      del_st(a);
      break;
      case 5:
      printf("exit \n");
      break;

      case 6:
      dis_all();
      break;
      default :
      printf("invalid choice\n");
      }
    }while(n != 5);
}



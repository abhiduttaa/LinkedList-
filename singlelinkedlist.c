#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};

int main(){
struct node* head=NULL;
head=(struct node*)malloc(sizeof(struct node));
head->data=4;
head->link=NULL;
struct node* current=(struct node*)malloc(sizeof(struct node));
current->data=5;
current->link=NULL;
head->link = current;
current=(struct node*)malloc(sizeof(struct node));
current->data=6;
current->link=NULL;
head->link->link=current;
//display(head);

if(head == NULL){
printf("empty list");
}
else{
struct node* temp=NULL;
temp=head;
int c=0;
while(temp!=n){
printf("%d ",temp->data);
temp=temp->link;
//printf("%p",temp->link);
c++;
printf("<-%d index\n",c);

}
}


return 0;
}
//display(struct* head)
//{

//}



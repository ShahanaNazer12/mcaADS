#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *f=NULL;
struct node *r=NULL;
void enqueue(int d){
struct node *n;
n=(struct node*)malloc(sizeof(struct node));
n->data=d;
n->next=NULL;
if((r==NULL)&&(f==NULL)){
f=r=n;
r->next=f;
}
else{
r->next=n;
r=n;
n->next=f;
}
}
void dequeue(){
struct node *t;
t=f;
if((f==NULL)&&(r==NULL))
print("\nQueue is empty");
else if(f==r){
f=r=NULL;
free(t);
}
else{
f=t->next;
r->next=f;
free(t);
}}
void display(){
struct node*t;
t=f;
if((f==NULL)&&(r==NULL))
print("\nQueue is empty");
else{
else{
do{
printf("%d",t->data);
t=t->next;
}
while(t!=f);}}
int main()
{
int choice,value;
while(1){
printf("circular queue menu:\n");
printf("\1.insert\n2.delete\n3.display\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("enter the value to be inserted:");
scanf("%d",&value);
enqueue(value);
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
printf("existing..\n");
exit(0);
default:
printf("invalid choice!please try again\n");
}
}
return 0;
}


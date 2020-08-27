#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert();
void delet();
void display();
void array();
void linklist();
int queue_arr[30];

int rear = -1;
int front = -1;
int max;
struct node{
int data;
struct node *link;
};
struct node *head, *k;
int main()
{

int a;

{
printf("\n 1. operation using array in banking system");
printf("\n 2. operation using linked list in banking system");
printf("\n 3. Exit");
printf("\n Enter the operation you want to perform:");
scanf("%d", &a);
switch(a)
{
case 1: array();
	goto L1;
case 2: linklist();
	goto L1;
case 3: exit(0);
}
}
}
void array(){
printf("\n Enter the size of queue:");
scanf("%d", &max);
int d;
L1:clrscr();
{
printf("\n 1. Insert customer id at end");
printf("\n 2. Delete customer id from front");
printf("\n 3. Display the id of all customers in queue");
printf("\n 4. Exit");
printf("\n Enter the option you want to perform:");
scanf("%d", &d);
switch(d)
{
case 1: insert();
	goto L1;
case 2: delet();
	goto L1;
case 3: display();
	goto L1;
case 4: exit(0);
}
}
}
 void insert(){
 int add;
 if(rear == max-1)
 printf("\n Queue is full");
 else{
 if(front == -1)
 front=0;
 printf("\n Insert the id of customer in queue:");
 scanf("%d", &add);
 rear=rear+1;
 queue_arr[rear]=add;
 }
 }
 void delet()
 {
 if(front==1||front>rear)
 {
 printf("\n Queue is empty");
 return;
 }
 else{
 printf("\n Customer id deletd from queue is:%d", queue_arr[front]);
 front=front-1;
 }
 }
 void display(){
 int i;
 if(front==1)
 printf("\n Queue is empty");
 else{
 printf("\n Queue is:");
 for(i=front; i<=rear; i++)
 printf("%d",queue_arr[i]);
 printf("\n");
 }
 getch();
 }
 void insert1(){
 int x;
 struct node *ptr;
 printf("\n Enter the value of customer id:");
 scanf("%d", &x);
 if(head==NULL){
 k=(struct node *)malloc(sizeof(struct node));
 k->data=x;
 k->link=NULL;
 head=k;
 }
 else{
 ptr=head;
 while(ptr->link!=NULL){
 ptr=ptr->link;
 }
 k=(struct node *)malloc(sizeof(struct node));
 ptr->link=k;
 k->data=x;
 k->link=NULL;
 }
 getch();
 }
 void del()
 {
 struct node *ptr;
 ptr=head;
 if(head==NULL){
 printf("\n The list is empty");
 }
 else{
 head=head->link;
 ptr->link=NULL;
 }
 getch();
 }
 void traversal(){
 int x;
 struct node *ptr;
 ptr=head;
 while(ptr!=NULL){
 printf("%d->\t", ptr->data);
 ptr=ptr->link;
 }
 getch();
 }
 void linklist()
 {
 int ch;
 L1: clrscr();
 printf("\n 1. Insert customer id from end");
 printf("\n 2. Delete customer id from front");
 printf("\n 3. Traversal");
 printf("\n 4. Exit");
 printf("\n Enter the option you want to perform:");
 scanf("%d", &ch);
 switch(ch){
 case 1: insert1();
	 goto L1;
 case 2: del();
	 goto L1;
 case 3: traversal();
	 goto L1;
 case 4: exit(0);
 default : printf("invalid choice");
 getch();
 goto L1;
 }
 getch();
}

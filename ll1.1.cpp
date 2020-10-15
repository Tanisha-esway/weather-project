#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
struct node *next;
};
struct node *head,*tail,*temp,*nw;
void create()
{
int n;
cout<<"enter number of terms"<<endl;
cin>>n;
while(n--)
{ int value;
 nw=(struct node *)malloc(sizeof(struct node));
cout<<"enter data"<<endl;
cin>>value;
nw->next=NULL;
nw->data=value;
if(head==NULL)
{
head=nw;
tail=nw;
}
else
{
tail->next=nw;
tail=nw;
}

}
tail->next=head;
}
void print()
{
temp=head;
cout<<"linked list is   ";
if(temp==NULL)
{
cout<<"list is empty";
return;
}
else
{
while(temp->next!=head)
{
cout<<temp->data<<"  ";
temp=temp->next;
}
cout<<temp->data;
}
cout<<endl;
}
void insert_at_beg()
{
int value;
cout<<"enter data";
cin>>value;
nw=(struct node*)malloc(sizeof(struct node));
nw->data=value;
nw->next=head;
tail->next=nw;
head=nw;
}
void insert_at_end()
{
int value;
cout<<"enter data";
cin>>value;
nw=(struct node*)malloc(sizeof(struct node));

nw->next=tail->next;
tail->next=nw;
tail=nw;
nw->data=value;
}
void insert_at_middle()
{ temp=head;
int count=0;
while(temp->next!=head)
{
count++;
temp=temp->next;
}
count=(count+1)/2;
  int value;
cout<<"enter data";
cin>>value;
nw=(struct node*)malloc(sizeof(struct node));
nw->data=value;
while(count--)
{
temp=temp->next;
}
nw->next=temp->next;
 nw->data=value;
 temp->next=nw;
}
void insert_at_pos()
{
int pos,value;
 struct node *nw4;
nw4=(struct node*)malloc(sizeof(struct node));
temp=head;
  cout<<"enter position you want to enter data"<<endl;
 cin>>pos;
 cout<<"enter data you want to enter"<<endl;
cin>>value;
  while(pos--)
{
temp=temp->next;

}
nw4->next=temp->next;
temp->next=nw4;

nw4->data=value;
}
void count_nodes()
{
temp=head;
int count=0;
while(temp->next!=head)
{
count++;
temp=temp->next;
}
cout<<"number of nodes are  :  "<<count+1<<endl;
}
void delete_at_begin()
{ temp=head;
tail->next=temp->next;
head=tail->next;
free(temp);
}
void delete_at_end()
{
temp=head;
while(temp->next!=tail)
{
temp=temp->next;
}
tail->next=NULL;
temp->next=head;
tail=temp;

}
void delete_at_mid()
{
temp=tail->next;
int count=0;
   while(temp->next!=head)
   {
    temp=temp->next;
    count++;
   }
 count=(count/2)-1;
temp=head;
while(count--)
{
  
temp=temp->next;
}
temp->next=temp->next->next;
}
void delete_at_pos()
{
temp=head;
   int pos2,i;
cout<<"enter position you want to delete"<<endl;
cin>>pos2;
for(i=0;i<pos2-2;i++)
{temp=temp->next;}
temp->next=temp->next->next;
}

int main()
{
char choice;
int c;
do
{
cout<<"press 1 to create a linked list"<<endl<<"press 2 to traverse the list"<<endl<<"press 3 to insert at begin"<<endl<<"press 4 to insert at end"<<endl<<"press 5 to insert at middle"<<endl<<"press 6 to insert at specified postion"<<endl<<"press 7 to count nodes"<<endl<<"press 8 to delete from begin"<<endl<<"press 9 to delete from end"<<endl<<"press 10 to delete at middle"<<endl<<"press 11 to delete at specified position"<<endl;
cin>>c;
switch(c)
{
  case 1:create();
  break;
  case 2:print();
  break;
  case 3: insert_at_beg();
  break;
 case 4: insert_at_end();
 break;
  case 5: insert_at_middle();
  break;
case 6: insert_at_pos();
break;
  case 7: count_nodes();
  break;
 case 8: delete_at_begin();
break;
case 9: delete_at_end();
break;
case 10:delete_at_mid();
break;
case 11: delete_at_pos();
break;
}
 cout<<"press y if you want to perform operation"<<endl;
 cin>>choice;
}while(choice=='y');
return 0;
}

#include <iostream>
using namespace std;
//first create structure
struct node
{
int prn;
char name[10];
node *next;
};
node *temp,*temp1,*temp2,*nnode;
class pinclub
{
public:
node *pres, *secr ;
pinclub()
{
pres=secr=NULL;
}
void create();
void display();
void insert();
void deleation();
void count();
void concat( pinclub ob2);
};
void pinclub::create()
{
char cc;
do{
nnode=new node;
nnode->next=NULL;
cout<<"enter prn number \n";
cin>>nnode->prn;
cout<<"enter name \n";
cin>>nnode->name;
if(pres==NULL)
{
pres=secr=nnode;
}
else
{
secr->next=nnode;
secr=nnode;
secr->next=NULL;
}
cout<<"\n enter y if you want to continue addition further \n";
cin>>cc;
}while(cc=='y');
}

void pinclub::insert()
{
char ch;
do{
cout<<"\n enter a perticular sr.no for performing operation \n 1.for adding member at the end. \n 2.for adding member at starting. \n 3.for inserting member between the other members\n ";
int n;
cin>>n;
nnode=new node;
nnode->next=NULL;
cout<<"enter prn number \n";
cin>>nnode->prn;
cout<<"enter name \n";
cin>>nnode->name;
switch(n)
{
case 1:
if(pres==NULL)
{pres=secr=nnode;
}
else
{secr->next=nnode;
secr=nnode;
secr->next=NULL;
}
break;
case 2:if(pres==NULL){
pres=secr=nnode;
}
else{
nnode->next=pres;
pres=nnode;
}
break;
case 3:cout<<"\n enter prn number of member where after insertion has to take place \n";
int m;
cin>>m;
temp=pres;
while(temp->prn!=m)
{
temp=temp->next;
}
temp2=temp->next;
nnode->next=temp2;
temp->next=nnode;
break;
default:cout<<"you entered invalid choice \n";
break;
}
cout<<"\n enter y if you want to continue addition further \n";
cin>>ch;
}while(ch=='y');
}


void pinclub::deleation()
{
cout<<"\n 1.to delete president \n2.to delete secritory \n3.to delete member\n";
int num;
cin>>num;
switch(num)
{ case 1: temp=pres;
pres=pres->next;
delete(temp);
break;
case 2: temp=pres;
while(temp->next!=secr)
{temp=temp->next;
}
secr=temp;
temp2=temp->next;
secr->next=NULL;
delete(temp2);
break;
case 3:cout<<"enter prn number you want to delete";
int pp;
cin>>pp;
temp=pres;
while(temp->prn!=pp)
{
temp=temp->next;
}
temp1=temp->next;
temp2=temp1->next;
temp->next=temp2;
delete(temp1);
break;
}
}


void pinclub::count()
{
static int counnt;
temp=pres;
while(temp->next!=NULL)
{
counnt=counnt+1;
temp=temp->next;
}
counnt=counnt+1;
cout<<"total number of member in linklist ="<<counnt<<"\n";
}


void pinclub::display()
{
temp=pres;
cout<<"prn--------name \n";
while(temp->next!=NULL)
{
cout<<temp->prn<<" \t ";
cout<<temp->name<<"\n";
temp=temp->next;
}
cout<<temp->prn<<" \t ";
cout<<temp->name<<"\n";
}

void pinclub::concat(pinclub ob2)
{
    secr->next=ob2.pres;
}


int main()
{
pinclub ob,ob1;
ob.create();
ob.display();
ob1.create();
ob1.display();
char q;
do{
cout<<"1.for creating linklist.\n 2. for inserting element within the linklist \n 3.for deleation of member from linklist \n 4.for counting number of member within linklist \n 5. concatanation linklist. \n6.display linklist";
int p;
cin>>p;
switch(p)
{
case 1:
ob.create();
ob.display();
ob1.create();
ob1.display();
break;
case 2:ob.insert();
ob.display();
break;
case 3:ob.deleation();
ob.display();
break;
case 4:ob.count();
//ob.display();
break;
case 5:
ob.concat(ob1);
ob.display();
break;
case 6 :
ob.display();
default:cout<<"invalid choice \n";
}
cout<<"enter y if you want do do further operation \n";
cin>>q;
}while(q=='y');
return 0;
} 
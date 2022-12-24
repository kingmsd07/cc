#include<iostream>
#include<string.h>
using namespace std;
#define max 32
class stack
{
public:
    char s[max];
    int top;
    stack()
    {
        top = -1;
    }
    int isempty();
    int isfull();
    int pop();
    void push(char c);
    char gettop();
    void pallindrome(char str1[30]);
};

int stack::isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int stack::isfull()
{
    if (top == max - 1)
        return 1;
    else
        return 0;
}

void stack::push(char c)
{
    if (!isfull())
    {
        top++;
        s[top] = c;
    }
    else
        cout << "Stack is full!!";
}

int stack::pop()
{
    if (!isempty())
    {
        return s[top--];
    }
    else
    {
        cout << "Stack is empty!!";
        return -1;
    }
}

char stack::gettop()
{
    if (!isempty())
    {
        return s[top];
    }
    else
    {
        return 0;
    }
}

void stack::pallindrome(char str1[25])
{
  stack s;
  char str[30];
  int i=0;
  int j=0;
  while (str1[i]!='\0')
  {
   if(str1[i]==' ')
   {
    i++;
   }
   else if(str1[i]>='A' && str1[i]<='Z')
   {
    str[j]=str1[i]+32;
    j++;
    i++;
   }
   else
   {
    str[j]=str1[i];
    j++;
    i++;
   }
  }
  str[j]='\0';
  i=0;
  while (str[i]!='\0')
  {
   push(str[i]);
   s.push(str[i]);
   i++;
  }
  cout<<"\nOriginal string is:";
  j=0;
  while (str[j]!='\0')
  {
   cout<<str[j];
   j++;
  }
  cout<<"\nReverse string is:";
  while(!isempty())
  {
   cout<<gettop();
   pop();
  }
  cout<<endl;
  int k=0;
  while(!s.isempty() && str[k]!='\0')
  {
   if(s.gettop()==str[k])
   {
    s.pop();
   }
   k++;
  }
  if(s.isempty())
  {
   cout<<"\nPallindrome";
  }
  else
  {
   cout<<"\nNot pallindrome!!";
  }
}

int main()
{
    stack s1;
    char str1[25];
    cout<<"\nEnter the string:";
    cin.getline(str1,sizeof(str1));
    s1.pallindrome(str1);
    return (0);
}

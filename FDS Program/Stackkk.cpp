#include<iostream>
#include<string.h>
using namespace std;
class stack
{
public:
    char s[10];
    int top, max;
    void setsize(int size)
    {
        top = -1;
        max = size;
    }
    int isempty();
    int isfull();
    int pop();
    void push(char c);
    char gettop();
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

void gettop(stack& s, char exp[20])
{
    int i = 0;
    int flag = 0;
    while (exp[i] != '\0')
    {
        char ch = exp[i];
        switch (ch)
        {
        case '(':
            s.push(ch);
            break;

        case ')':
       
                if (s.gettop()=='(')
                    s.pop();
                else
                    flag = 1;
                break;
               
        case '{' :
            s.push(ch);
            break;

        case '}':
            
                if (s.gettop()=='{')
                    s.pop();
                else
                    flag = 1;
                break;
        
        case '[':
            s.push(ch);
            break;

        case ']':
            
                if (s.gettop()=='[')
                    s.pop();
                else
                    flag = 1;
                break;
        
        }
        i++;
        
    }
    if (flag == 0 && s.isempty())
    {
        cout << "\nWell parenthesize";
    }
    else
        cout << "\nNot well parenthesize!!";
}

int main()
{
    stack s1;
    char exp[10];
    cout << "Enter expression :  ";
    cin >> exp;
    s1.setsize(strlen(exp));
    gettop(s1, exp);
}

#include<bits/stdc++.h>
using namespace std;
void faster()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void file()
{
#ifndef ONLINE_JUDGE
    freopen("DSA.inp","r",stdin);
    freopen("DSA.out","w",stdout);
#endif
}
class Node
{
    public:
        int data;
        Node *next;
         
        Node(int val)
        {
            data=val;
            next=nullptr;
        }
};
class LinkedList
{
     public:
        Node *head;

        LinkedList()
        {
            head=nullptr;
        }

        void insert(int val)
        {
            Node *temp=new Node(val);
            if(head==nullptr)
            {
                head=temp;
            }
            else 
            {
                Node *current=head;
                while(current->next!=nullptr)
                {
                    current=current->next;
                }
                current->next=temp;
            }
        }
        void display()
        {
            Node *temp=head;
            while(temp->next!=nullptr)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
        void skip_element(int x)
        {
            Node *temp=head;
            while(temp!=nullptr)
            {
                if(temp->data!=x)
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
            //delete(temp);
        }
        
};
int n,x,k;
int test;
int main()
{
    faster();
    //file();
    
    LinkedList list;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        list.insert(x);
    }
    cin>>k;
    //list.display();
    list.skip_element(k);
        
    
    return 0;
}

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        // int len=1;
    Node* temp=head;
    
    while(temp->next != NULL)
    {
        // len++;
        temp=temp->next;
    }
    
    temp->next=head;
    temp=head;
    // k=k%len;
    // int end=len-k;
    for(int i=0;i<k-1;i++)
    {
        temp=temp->next;
    }
    // while(end--)
    // {
    //     temp=temp->next;
    // }
    
    head=temp->next;
    temp->next=NULL;
    
    return head;
    /*
        if(head == NULL || head->next ==NULL)
        {
            return head;
        }
        Node* temp= head;
        int t=1;
        while(temp->next != NULL)
        {
            t++;
            temp=temp->next;
            
        }
        temp->next=head;
        // temp=*head;
        k=k%t;
        int e=t-k;
        while(e--)
        {
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
        */
        // Your code here
    }
};
    


// { Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}
  // } Driver Code Ends
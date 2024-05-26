//Linked List
//Random Allocation of memory
// each elemnts points to next
// random allocation allows dynamic memory


#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;  // Node datatype because it is containing the addres of the next node.
    //constructor
    Node(int data){
        this->data=data;
        next = NULL;
    }
};
signed main(){
    //static obj creation
    Node n1(1); // 1st node careation
    Node n2(2);  // 2nd node creation
    n1.next = &n2; //linking node 2 address to node 1's null
    cout<<n1.data<<" "<<n2.data; //printing the adta
    Node *head = &n1;  // assigning the address of a to head and it will create 8bytes of memmory
    //printing the data using head pointer
    head->data;
    cout<<head->data;
    return 0;
}

//printing data of n2 node using head pointer

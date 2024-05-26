#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Queue{
    T *arr;
    int nextidx;
    int firstidx;
    int size;
    int capacity;
    public:
    
    Queue(){
        capacity=5;
        arr=new T[capacity];
        nextidx=0;
        firstidx=-1;
        size=0;
    }
    //parametrized character;
    // Queue(int cap){
    //     capacity = cap;
    //     arr = new T[capacity];
    //     nextidx =0;
    //     firstidx=-1;
    //     size=0;
    // }
    //funcs
    int getsize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void push (T data){
        if(size==capacity){
            // cout<<"overflow";return;
            // Dynamic Queue
            T *newarr = new T[2*capacity];
            int j=0;
            for (int i = firstidx; i < capacity; i++)
            {
                newarr[j] = arr[i]; 
                j++;
            }
            for (int i = 0; i < firstidx; i++)
            {
                newarr[j]=arr[i];
                j++;
            }    
            firstidx=0;
            nextidx=capacity;
            capacity=2*capacity;
            delete []arr;
            arr = newarr; // old arr point newarr;
        }
        arr[nextidx] = data;
        nextidx = (nextidx+1)%capacity; // for circular move
        if(firstidx==-1){
            firstidx=0;
        }
        size++;
    }
    T front(){
        if(isEmpty()) return 0;
        return arr[firstidx];
    }
    void pop(){
        if(isEmpty()){
            cout<<"underflow";
            return;
        }
        firstidx = (firstidx+1)%capacity; //for moving circularly
        size--;
        if(size==0){
            nextidx=0;
            firstidx=-1;
        }
    }
    
};
void reverse(Queue<int> &queue){
    stack<int> stk;
    while (!queue.isEmpty())
    {
        stk.push(queue.front());
        queue.pop();
    }
    while(!stk.empty()){
        queue.push(stk.top());
        stk.pop();
    }
}
// auto start = chrono::steady_clock::now();
signed main(){
    
    // auto end = chrono::steady_clock::now();
    // auto diff = end-start;
    // cout<<chrono::duration<double,milli>(diff).count()<<endl;
    Queue<int> queue; //dynamic queue.
    for(int i=10;i<80;i+=10){
      queue.push(i);
    }
    cout<<queue.front()<<endl;
    // cout<<queue.getsize()<<endl;
    queue.pop();
    queue.pop();
    queue.pop();
    cout<<queue.front()<<endl;
    cout<<queue.getsize()<<endl;
    queue.push(60);
    queue.push(70);
    queue.pop();
    queue.pop();
    cout<<queue.front()<<endl;
    cout<<queue.getsize()<<endl;
    reverse(queue);
    while(!queue.isEmpty()){
        cout<<queue.front()<<" ";
        queue.pop();
    }
    return 0;
}
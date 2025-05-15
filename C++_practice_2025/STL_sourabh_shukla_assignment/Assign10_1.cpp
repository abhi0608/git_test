#include<iostream>
#include<queue>
#include<stack>
#include<deque>
#include<vector>
using namespace std;
class PriorityQueue {
    private:
        int Capacity;
        vector<queue<int>> priorities;
    public:

        PriorityQueue(int Pno) : Capacity(Pno),priorities(Pno) {}
        void insert(int,int);
        void pop();
        int getHighestPno();
        int get_Item();
        bool isEmpty();
};

void PriorityQueue::insert(int value, int Pno)
{
    if(Pno>0 && Pno <Capacity)
        priorities[Pno-1].push(value);
    else
        cout<<"Invalid Priorities Number"<<endl;
}

void PriorityQueue::pop()
{
    for(int x = Capacity-1; x>=0; x--)
        if(!priorities[x].empty())  {
            priorities[x].pop();
            break;
        }
}

int PriorityQueue::getHighestPno()
{
    for(int x = Capacity-1; x>=0; x--)
        if(!priorities[x].empty())
            return x;
    throw -1;
}

int PriorityQueue::get_Item()
{
    for(int x = Capacity -1; x>=0; x--)
        if(!priorities[x].empty())
            return priorities[x].front();
    throw -1;
}

bool PriorityQueue::isEmpty()
{
    for(int x = 0; x<Capacity; x++)
        if(!priorities[x].empty())
            return false;
    return true;
}

int main()
{
    PriorityQueue pq1(10);
    pq1.insert(10, 3);
    pq1.insert(20, 1);
    pq1.insert(30, 5);
    pq1.insert(40, 5);
    pq1.insert(50, 5);
    pq1.insert(60, 5);
    //pq1.pop();
    cout<<pq1.get_Item()<<endl;
    cout<<pq1.getHighestPno();
    return 0;
}

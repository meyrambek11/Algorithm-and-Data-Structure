#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode*next;
    ListNode(int x){
        val = x;
        next = NULL;
    }
};
struct List{
    ListNode*head;
    ListNode*tail;
    List(){
        head = NULL;
        tail = NULL;
    }
    void add(int x){
        ListNode*t = new ListNode(x);
        if(tail == NULL){
            tail = t;
            head = t;
        }
        else{
            tail->next = t;
            tail = t;
        }
    }
};
void print(ListNode*n,string label){
    cout << label;
    while(n!=NULL){
        cout << n->val;
        n = n->next;
        if(n!=NULL){
            cout << "->";
        }
    }
    cout << endl;
}
class Solution{
public:
    ListNode* reverse(ListNode*head){
        return swap(NULL,head);
    }
    ListNode*swap(ListNode*n1,ListNode*n2){
        if(n1 == NULL && n2 == NULL)return NULL;
        ListNode*n3 = n2->next;
        n2->next = n1;
        if(n3 == NULL) return n2;
        return swap(n2,n3); 
    }
};

int main(){
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(int);
    List l;
    for(int i=0;i<size;i++){
        l.add(a[i]);
    }
    print(l.head,"input:");
    Solution s;
    ListNode*newhead = s.reverse(l.head);
    print(newhead,"output:");

}
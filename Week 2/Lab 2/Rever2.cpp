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
    ListNode*left;
    bool stop;
public:
    ListNode* reverseBetween(ListNode*head, int m, int n) {
        left = head;
        stop = false;
        recurseAndReverse(head, m, n);
        return head;
       
    }
    void recurseAndReverse(ListNode right, int m, int n){
        if(n == 1) return;
        right = right->next;
        if(m>1){
            left = left->next;
        }
        recurseAndReverse(right,m-1,n-1);
        if(left == right || right->next == left){
            stop = true;
        }
        if(!stop){
            int t = left->val;
            left->val = right->val;
            right->val = t;
            left = left->next;
        }
        
    }
      
};
/*class Solution{
    ListNode*end;
public:
    ListNode* reverse(ListNode*head,int m,int n){
        while(m>0){
            head = head->next;
            m--;
        }
        return swap(head,head->next);
    }
    ListNode*swap(ListNode*n1,ListNode*n2){
        if(n1 == NULL && n2 == NULL)return NULL;
        ListNode*n3 = n2->next;
        n2->next = n1;
        if(n3 == end) return n2;
        return swap(n2,n3); 
    }
};
*/


int main(){
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(int);
    int c,d;
    cin >> c >> d;
    List l;
    for(int i=0;i<size;i++){
        l.add(a[i]);
    }
    print(l.head,"input:");
    Solution s;
    ListNode*newhead = s.reverseBetween(l.head,c,d);
    print(newhead,"output:");

}
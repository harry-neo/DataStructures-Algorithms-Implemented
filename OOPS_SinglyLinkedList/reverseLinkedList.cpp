
    #include <bits/stdc++.h>
    using namespace std;

    
    struct Node{
        int data;
        Node* next;
        Node(): data(0), next(nullptr) {}
        Node(int x): data(x), next(nullptr) {}
    };

    class LinkedList{
        Node *head, *tail;

        public:
        LinkedList(): head(nullptr), tail(nullptr) {}

        void create_list(int value);
        void print_list();
        void reverseList();
    };

    void LinkedList::create_list(int value){
        
            Node *tmp = new Node(value);

            if(head == nullptr){
                head = tmp;
                tail = tmp;
            }else{
                tail->next = tmp;
                tail = tail->next;
            }
        
    }

    void LinkedList::print_list(){
        Node* tmp = head;

        while(tmp){
            cout<<tmp->data<<" ";
            tmp = tmp ->next;
        }
        cout<<endl;
    }

    void LinkedList::reverseList(){
        Node *temp = nullptr;

        while(head){
            Node *next = head->next;
            head->next = temp;
            temp = head;
            head = next;   
        }

        head = temp;
    }

   

    int main(){

       int n; cin>>n;
       LinkedList sll;
       int val;
       while(n--){
        cin>>val;
        sll.create_list(val);
       }
    
        sll.print_list();
        sll.reverseList();
        sll.print_list();
       


    }
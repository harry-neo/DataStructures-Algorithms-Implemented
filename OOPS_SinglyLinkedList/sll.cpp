
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
        int count_nodes();
        void insert_node(int key, int index);
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

    int LinkedList::count_nodes(){

        if(head == nullptr) return 0;

        Node* tmp = head;
        int count = 0;
        while(tmp){
            count++;
            tmp = tmp->next;
        }
        return count;
    }

    //if insrtion index is 2, the new node after insertion will have index of 2
    void LinkedList::insert_node(int key, int index){
        if(index > this->count_nodes()) return;

        Node *newnode = new Node(key);
        //1. Insertion at the head
        if(index == 1){
            newnode->next = head;
            head = newnode;
        }else if(index>1 && index<this->count_nodes()){
            Node *tmp = head;
            for(int i=1; i<=index-2; i++)
                tmp = tmp->next;
            newnode->next = tmp->next;
            tmp->next = newnode;

        }else{
            tail->next = newnode;
            tail = newnode;
        }
        


        //3. Insertion in the middle
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
        cout<<"No. of nodes: "<<sll.count_nodes()<<"\n";
        sll.insert_node(10, 6);

         sll.print_list();
        cout<<"No. of nodes: "<<sll.count_nodes()<<"\n";


    }
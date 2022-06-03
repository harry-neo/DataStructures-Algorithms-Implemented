
    #include <bits/stdc++.h>
    using namespace std;

    template <typename T>
    class BTNode{
        public:
            T data;
            BTNode* left;
            BTNode* right;

            BTNode() : data(0), left(nullptr), right(nullptr) {}
            BTNode(T data) : data(data), left(nullptr), right(nullptr) {}
            BTNode(T data, BTNode* left, BTNode* right): data(data), left(left), right(right) {}
 
            ~BTNode(){   //recursive destructor
                delete left;
                // cout<<"Left child deleted!\n";
                delete right;
                // cout<<"Right child deleted!\n";
            }
    };

    //print BTree recursively
    void BTreePrintRecursive(BTNode<int> *root){
        if(root == nullptr) return;

        cout<<root->data<<" : ";
        if(root->left)
            cout<<"L"<<root->left->data;
        if(root->right)
            cout<<" R"<<root->right->data;
        cout<<endl;

        BTreePrintRecursive(root->left);
        BTreePrintRecursive(root->right);
    }

    // helper function for create BTree levelwise from input
    BTNode<int>* insertValue(BTNode<int>* root, int val, queue<BTNode<int>*>& q){
        BTNode<int> *node = new BTNode<int>(val);
        if(root == nullptr) root = node;
        else if(q.front()->left == nullptr){
            q.front()->left = node;
        }else{
            q.front()->right = node;
            q.pop();
        }
        q.push(node);

        return root;
    }


    //create BTree by taking input levelwise
    BTNode<int>* createBTreeLevelwise(vector<int> v){
        BTNode<int> *root = nullptr;
        queue<BTNode<int>*> q;
        for(int i=0; i<v.size(); i++)
            root = insertValue(root, v[i], q); //helper function
        
        return root;
    }
    
    int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        // BTNode<int> *root = new BTNode<int>(1);
        // BTNode<int> *left_child = new BTNode<int>(2);
        // BTNode<int> *right_child = new BTNode<int>(3);

        // root->left = left_child;
        // root->right = right_child;
     
        // BTreePrintRecursive(root);

        // vector<int> v = {1, 2,3,4,5,6,7};
        

        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        
        BTNode<int> *root = createBTreeLevelwise(v);

        BTreePrintRecursive(root);

        // delete root;

        return 0;
    }

    /*
   
    */

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

    //helper function for create BTree levelwise from input
    BTNode<int>* insertValue(BTNode<int>* root, int val, queue<BTNode<int>*>& q){
        BTNode<int> *node = new BTNode<int>(val);

    
        if(root == nullptr) root = node;
        else if(q.front()->left == nullptr ){
            q.front()->left = node;
        }else{
            q.front()->right = node;
            q.pop();
        }
        q.push(node);

        // if(root == nullptr) root = node;
        // q.push(node);
        
        //      if(q.front()->left != nullptr && val!=-1){
        //         q.front()->left = node;
        //     }
        //     else if(q.front()->right != nullptr && val!=-1){
        //         q.front()->right = node;
        //         q.pop();
        //     }else{
        //         q.pop();
        //     }
        
        

        return root;
    }

    // BTNode<int>* insertValue(BTNode<int>* root, int val, queue<BTNode<int>*>& q){
    //     BTNode<int> *node = new BTNode<int>(val);


    //     if(root == nullptr){
    //             root = node;
    //             q.push(root);
    //             cout<<q.size()<<" "<<q.front()->data<<"\n";
    //         }
    
       

    //     return root;
    // }

    //create BTree by taking input levelwise
    BTNode<int>* createBTreeLevelwise(vector<int> v){
        BTNode<int> *root = nullptr;
        queue<BTNode<int>*> q;
        for(int i=0; i<v.size(); i++)
            root = insertValue(root, v[i], q); //helper function
        
        return root;
    }

    void createBTree(vector<int> v){
        BTNode<int>* root = nullptr;
        queue<BTNode<int>*> q;

        for(int i=0; i<v.size(); i++){
            BTNode<int>* node = new BTNode<int>(v[i]); 

            if(root == nullptr){
                root = node;
                q.push(root);
                cout<<q.size()<<" "<<q.front()->data<<"\n";
            }else{
                while(!q.empty()){
                    BTNode<int> *f = q.front();
                    q.pop();
                    cout<<f->data<<" \n";
                    //left child of i is at index (2*i)+1
                    if(v[(2*i)+1] != -1 && (2*i)+1<v.size()){
                        BTNode<int> *lchild = new BTNode<int>(v[(2*i)+1]);
                        q.push(lchild);
                        f->left = lchild;
                    }

                    //right child of i is at index (2*i)+2
                    // if(v[(2*i)+2]!=-1){
                    //     BTNode<int> *rchild = new BTNode<int>(v[(2*i)+2]);
                    //     q.push(rchild);
                    //     f->right = rchild;
                    // }
                }
            }
           
            // cout<<v[i]<<" ";
            // if((2*i)+1<v.size())
            //     cout<<"lchild: "<<v[(2*i)+1]<<" ";
            //  if((2*i)+2<v.size())
            // cout<<"rchild: "<<v[(2*i)+2]<<"\n ";

            // BTNode<int> *node = new BTNode<int>(v[i]);
            // cout<<node->data<<"\n";
        }
        // return root;
    }


    

    //Level order traversal
    void levelOrderTraversal(BTNode<int> *root){
        if(root == nullptr) return;
        cout<<root->data<<endl;
        queue<BTNode<int>*> q;
        q.push(root);

        while(!q.empty()){
            BTNode<int>* f = q.front();
            q.pop();

            if(f->left){
                cout<<f->left->data<<" ";
                q.push(f->left);
            }

            if(f->right){
                cout<<f->right->data<<"\n";
                q.push(f->right);
            }
            
        }
    }

    vector<vector<int>> levelOrder(BTNode<int>* root){
        vector<vector<int>> res;
        if(root == nullptr) return res;

        queue<BTNode<int>*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> ans;
            q.push(nullptr);
            while(q.front() != nullptr){
                BTNode<int>* f = q.front();
                q.pop();
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
                ans.push_back(f->data);
            }
            res.push_back(ans);
            q.pop();
        }
        return res;
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

        // levelOrderTraversal(root);

        // vector<vector<int>> ans = levelOrder(root);
        // for(int i=0; i<ans.size(); i++){
        //     for(int j=0; j<ans[i].size(); j++){
        //         cout<<ans[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        // delete root;

        return 0;
    }

    /*
   
    */


   
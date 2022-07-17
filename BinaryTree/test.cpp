
    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int
    #define ld long double
    #define p 1000000007
    #define inf 1e18
    #define endl "\n"
    #define pb emplace_back
    #define vi vector<int>
    #define vll vector<ll>
    #define vs vector<string>
    #define pii pair<int, int>
    #define pll pair<ll, ll>
    #define ump unordered_map
    #define mp map
    #define pq_max priority_queue<ll>
    #define pq_min priority_queue<ll, vll, greater<ll>>
    #define ff first
    #define ss second
    #define mid(l, r) (l + (r - l) / 2)
    #define loop(i, a, b) for (int i = (a); i <= (b); i++)
    #define looprev(i, a, b) for (int i = (a); i >= (b); i--)

    int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;
        while (t--){
            int n;
            cin >> n;
            vector<int> v(n);
            for (int i = 0; i < n; i++){
                cin >> v[i];
            }
            for (auto x : v){
                cout << x << " ";
            }
            cout << endl;
        }

        return 0;
    }

    /*
    2
    5
    1 3 5 7 9
    6
    16 11 34 23 12  45
    */



I am writing a function (createBTreeLevelwise) that builds a binary tree by taking input from a given vector containing node values. I must use these values to build a binary tree in level order. 
Example input: v[1, 2, 3, 4, 5, 6, 7] will create a tree like this-

                   1
                  / \
                 2   3
                / \ / \
               4  5 6  7
               
Output:
        1 : L2 R3
        2 : L4 R5
        4 : 
        5 : 
        3 : L6 R7
        6 : 
        7 : 

My function works correctly for complete Binary tree (every node except leaf nodes have two children) but is not working fine for Incomplete Binary tree (if a node does not have left or right child). 
Example input: v[1, 2, 3, 4, -1, -1, 5] should create a tree like this-
***NOTE: -1 indicates the absence of node***

                   1
                  / \
                 2   3
                /     \
               4       5
I tried adding the check ```if(val!=-1)``` but it's not working when left child is absent for a node.So, how should the function **createBTreeLevelwise()** and **insertValue**  be modified to handle this case?
```

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
                delete right;
            }
    };

    

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
    
    int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<int> v = {1, 2,3,4,5,6,7};
        
        BTNode<int> *root = createBTreeLevelwise(v);

        BTreePrintRecursive(root);

        delete root;

        return 0;
    }

```

 
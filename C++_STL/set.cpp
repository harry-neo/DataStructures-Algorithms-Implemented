
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

        cout<<"Set\n"; // Stores unique/distinct elements in linearly ascending order
        int n; cin>>n;
        set<int> st1, st2;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            st1.insert(x); //log(n)
            st2.emplace(x/2); // faster than insert
        }
        // size, begin
        cout<<st1.size()<<"\n";
        cout<<*st1.begin()<<"\n";

        for(auto it: st1){
            cout<<it<<" ";
        }
        cout<<endl;

        for(auto it: st2){
            cout<<it<<" ";
        }
        cout<<endl;

        //find 
        auto it1 = st1.find(67);  //log(n), returns an iterator pointing to key if found else returns iterator to st.end()
        if(it1 != st1.end())
            cout<<"key found\n";
        else
            cout<<"key not found\n";

        auto it2 = st1.find(35);  //log(n)
        if(it2 != st1.end())
            cout<<"key found\n";
        else
            cout<<"key not found\n";

        //erase
        st1.erase(st1.begin());

        // st1.erase(st1.begin(), st1.begin() + 2);
        st1.erase(17);
        for(auto it: st1){
            cout<<it<<" ";
        }
        cout<<endl;

        set<int> st = {1, 6, 9 , 5, 10, 13, 45};
        set<int> cpy_st(st.begin(), st.end());
        for(auto it: cpy_st){
            cout<<it<<" ";
        }
        cout<<endl;

        //delete entire set
        st1.erase(st1.begin(), st1.end());


        //UNORDERED SET - stores distinct/unique elements but not in sorted order
        //average time complexity is O(1)
        //worst case time complexity is O(N), N is the set size
        cout<<"Unordered Set\n";
        unordered_set<int> uno_st;
        uno_st.insert(4);
        uno_st.insert(5);
        uno_st.insert(2);

        for(auto key:uno_st){
            cout<<key<<" ";
        }
        cout<<"\n";

        cout<<*uno_st.begin()<<"\n";
        cout<<uno_st.size()<<"\n";



        return 0;
    }

    /*
    11
16 11 34 23 12  45 16 34 12 45 67 
    */
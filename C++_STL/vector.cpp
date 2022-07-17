
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

        vector<int> v;
        v.push_back(5);
        v.emplace_back(7); //faster than push_back

        vector<pair<int,int>> vp;
        vp.push_back({1,2});
        vp.emplace_back(5,7);

        //vector of 5 instances of 97
        vector<int> v1(5,97);

        //create v2 as copy of v1
        vector<int> v2(v1);

        //iterators
        cout<<*v1.begin()<<" "<<*v1.end()<<"\n";

        vector<int>::iterator it;
        for(it = v1.begin(); it!=v1.end(); it++){
            cout<<*it<<" ";
        }
        cout<<"\n";
        for(auto it=v2.begin(); it!=v2.end(); it++){
            cout<<*it<<" ";
        }

        cout<<"\n";
        v1.emplace_back(76);
        cout<<v1.back()<<"\n"; //returns the last element in the vector
        

        //erase(iterator)
        v2.erase(v2.begin()+1);
        for(auto x:v2)cout<<x<<" ";
        cout<<"\n";
        //erase(it1, it2)
        v1.erase(v1.begin()+1, v1.begin()+4);
        for(auto x:v1)cout<<x<<" ";cout<<"\n";

        
        //insert function - costly opeartion
        vector<int> v3(2, 100);
        v3.insert(v3.begin(), 30); //insert at the begining
         for(auto x:v3)cout<<x<<" ";cout<<"\n";
        v3.insert(v3.begin()+1, 2, 10); //insert 2 instances of 10 from index 1
         for(auto x:v3)cout<<x<<" ";cout<<"\n";

        vector<int> copy(2,50);
        v3.insert(v3.begin()+1, copy.begin(), copy.end());
         for(auto x:v3)cout<<x<<" ";cout<<"\n";

         cout<<v3.size()<<"\n";
         v3.pop_back();
         for(auto x:v3)cout<<x<<" ";cout<<"\n";
         cout<<v3.size()<<"\n";

         //swap vector v2 and v3
         v3.swap(v2);
        for(auto x:v3)cout<<x<<" ";cout<<"\n";
        for(auto x:v2)cout<<x<<" ";cout<<"\n";

        v3.clear(); //clears the entire vector
        // vector.empty() returns true if vector is empty
        cout<<v3.empty()<<"\n";

        return 0;
    }

    /*
    2
    5
    1 3 5 7 9
    6
    16 11 34 23 12  45
    */
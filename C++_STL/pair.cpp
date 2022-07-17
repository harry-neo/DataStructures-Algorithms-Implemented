
    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int
    #define ld long double
    // #define p 1000000007
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
        
        pair<int,int> p = {2,5};
        cout<<p.first<<" "<<p.second<<"\n";

        //A(x1,y1) = (3,5) , B(x2,y2) = (6,9)
        pair<int,int> A = {3, 5};
        pair<int,int> B = {6, 9};

        int euc_dist = sqrt(pow((B.first-A.first),2) + pow((B.second-A.second),2));
        cout<<euc_dist<<"\n";

        //nested pair
        pair<int, pair<int,int>> np = {1, {2,6}};
        cout<<np.first<<" "<<np.second.first<<" "<<np.second.second<<"\n";

        // array of pairs
        pair<int, int> arr[] = {{1,3},{5,7},{7,4}};
        cout<<arr[2].first<<" "<<arr[2].second<<"\n";

        //vector of pairs
        vector<pair<int, int>> vp = {{2,5}, {4,7}, {8,9}, {1,6}};
        for (auto i = 0; i < vp.size(); ++i) {
            cout << "(" << vp.at(i).first << ","
            << vp.at(i).second << ")" << "; ";
        }
        cout<<"\n";

        vector<pair<int, string>> vec1 = {{12, "twelve"},
                                      {32, "thirty-two"},
                                      {43, "forty-three"}};
         for (auto i = 0; i < vec1.size(); ++i) {
            cout << "(" << vec1.at(i).first << ","
            << vec1.at(i).second << ")" << "; ";
        }


        return 0;
    }


/* output:

2 5
5
1 2 6
7 4
(2,5); (4,7); (8,9); (1,6); 
(12,twelve); (32,thirty-two); (43,forty-three); 

*/
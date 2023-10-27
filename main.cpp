#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define triplet pair<ll,pair<ll,ll>>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define goog(tno) cout << "Case #" << tno <<": "
#define read(x) int x; cin >> x
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

vector<int> solve(int n){
    
}



int main() {
   init_code();
   //start your code from here.
   unordered_map<int,int> map;
   vector<int> num1{4,1,2};
   vector<int> num2{3,4,-1,-1};
   for(int i=0;i<num1.size();i++){
      map.insert({num1[i],i});
   }
   // cout<<"VALUE \t INDEX \n";
   // for(auto i = map.begin();i!=map.end();i++){
   //    cout<<i->first<<'\t'<<i->second<<'\n';
   // }
   return 0;
}

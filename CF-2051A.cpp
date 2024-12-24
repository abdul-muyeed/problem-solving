// my portfolio => https://abdul-muyeed.github.io/
	#include <bits/stdc++.h>
	#include <ext/pb_ds/assoc_container.hpp>
	#include <ext/pb_ds/tree_policy.hpp>
	#include <ext/pb_ds/detail/standard_policies.hpp>
	using namespace __gnu_pbds;
	using namespace std;
	#define endl '\n';
	#define ln cout<<endl;
	#define YES print("YES")
	#define NO print("NO")
	#define ll  long long
	#define lll __int128_t
	#define ull unsigned long long
	#define all(V) V.begin(),V.end()
	#define pb push_back
	#define ff first
	#define ss second
	#define fo(i,n) for(int i=0;i<n;i++)
	#define foi(i,a,n) for(int i=a;i<n;i++)
	#define print(A) cout<< A <<endl;
	#define elif else if
	#define sz(x) ((ll)(x).size())
	#define gcd(a,b) __gcd(a,b)
	#define lcm(a,b) ((a*b)/gcd(a,b))
	#define count(a,x) count(a.begin(), a.end(),x)
	#define sum(a) accumulate(a.begin(), a.end(),0)
	#define maxl(A) max_element(all(A))
	#define minl(A) min_element(all(A))
	#define imax  INT_MAX;
	#define imin  INT_MIN;
	#define umap unordered_map
	#define uset unordered_set
	#define bcount __builtin_popcountll
	#ifndef ONLINE_JUDGE
	#define debug(x) cerr << #x<< " " << x << endl;
	#define debugs(x) cerr << #x<< " "; _print(x);
	#define debuga(x,n) cerr << #x<< " "; _printa(x,n);
	#else
	#define debug(x)
	#define debugs(x)
	#endif

	template<class T>void _print(vector<T>v) {cerr << "[ "; for (T out : v) {cerr << out << " ";} cerr << "]" << endl;}
	template<class T, class V>void _print(map<T, V>v) {cerr << "[ "; for (auto &out : v) {cerr << "(" << out.ff << "," << out.ss << ")" << " ";} cerr << "]" << endl;}
	template<class T, class V>void _print(vector<pair<T, V>>v) {cerr << "[ "; for (auto &out : v) {cerr << "(" << out.ff << "," << out.ss << ")" << " ";} cerr << "]" << endl;}
	template<class T, class V>void _print(unordered_map<T, V>v) {cerr << "[ "; for (auto &out : v) {cerr << "(" << out.ff << "," << out.ss << ")" << " ";} cerr << "]" << endl;}
	template<class T>void _print(unordered_set<T>v) {cerr << "[ "; for (T out : v) {cerr << out << " ";} cerr << "]" << endl;}
	template<class T>void _print(set<T>v) {cerr << "[ "; for (T out : v) {cerr << out << " ";} cerr << "]" << endl;}
	template<class T, class V>void _printa(T arr[],V n){cerr<<"[ ";fo(i,n){cerr<< arr[i]<<" ";}cerr<<"]"<<endl;}
	//template<class T>void _print(vector<T>v){cerr<<"[ ";for(T out:v){cerr<<out<<" ";}cerr<<"]"<<endl;}
	// const ll M =109546051211;
	// const ll N =1e7+3;
	// ll arr[10][31];
	// const long double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128;
	// vector<int> vertex[55];
	// bool visited[10000000]={0};
	// ll dis[10000000]={0};
	// queue<ll> q;
	ll maxi=INT_MAX;
	ll ans=INT_MAX;
	// const ll MOD = 1e9 + 7;
	// const ll MAX_N = 1000;
	// vector<vector<ll>> C(MAX_N + 1, vector<ll>(MAX_N + 1, 0));
	

	void init() {
		ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	
}










void solve(){	
	ll n;cin>>n;
	vector<ll> a(n),b(n);
	fo(i,n)cin>>a[i];
	fo(i,n)cin>>b[i];
	ll ans = a[n-1];

	for(ll i=0;i<n-1;i++){
		if(a[i]>b[i+1]){
			ans+=(a[i]-b[i+1]);
		}
	}
	print(ans);


		
}





		
		

		
		

		
		
		
		

		
		
		
		









		

		
		
		


		
		
		
		
		

	
	
		

		
	



		
		


		
		

		
		

		
		
		
		
		
		
		


	int main(){init();ll t=1;
	cin>>t;	
	while(t--){solve();}return 0;}
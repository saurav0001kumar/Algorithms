// CODE AREANA PLAYER
// Probelem Link : https://www.hackerearth.com/problem/algorithm/xenny-and-k-equal-triplets/

#pragma Gpref optimize("O3")
//#pragma Gpref optimize("Ofast")
//#pragma Gpref target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma Gpref optimize("unroll-loops")
#include <bits/stdc++.h>
#define int unsigned long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define TC int t; cin >> t; while(t--)
#define FR(i,j,k) for(int i=j; i<k; i++)
#define BFR(i,j,k) for(int i=j; i>=k; --i)
#define pb push_back
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
#define go continue
#define F first
#define S second
using namespace std;
 

const int MOD = (int)1e9+7;
const int N = 104;
vector<int> fact;

int nCr(int n, int k) 
{ 
    int C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;
  
    for (int i = 1; i <= n; i++) 
    { 
        for (int j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
}

void reduceFraction(int x, int y) 
{ 
    int d; 
    d = __gcd(x, y); 
  
    x = x / d; 
    y = y / d; 
  
    cout << x << "/" << y << endl; 
}
int32_t main(){
IOS;
TC{
  int n,k,count = 0;
   cin >> n >> k;
   vector<int> v(n);
   FR(i,0,n)cin >> v[i];
   int a = nCr(n, 3);
   FR(i,0,n){
    if(v[i] == k)count++;
   }

   int b = nCr(count, 3);

   reduceFraction(b,a);
}
return 0;
}


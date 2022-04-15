#include<bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define vi vector<int> 
#define ll long long int

int main()
{
	ll n  ;
	cin >> n ; 
	// while(t--)
	vi v(n) ;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i] ; 
	}
	int sum = 0 ; 

	sum  = accumulate(v.begin(),v.end(), sum) ; 
	cout << sum << endl ;
	int ct ; 
	ct = count(v.begin() , v.end() , 1) ;
	cout << ct << endl ;  
	string s ; 
	cin >> s ; 
	int l = s.size() ; 
	int ct1 ;
	int pr = 0 ; 
	// ct1 = s.find("ab") ; 
	ct1 = s.find('a') ; 
	//above function doesn't works for strings, 
	//only for first position of the characters





	return 0;
}

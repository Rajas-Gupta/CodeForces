#include<iostream>
#include<math.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin>>n;
	while(n--){
		ll a , b;
		cin>>a>>b;
		// ek hi radiator hai toh jitne section utni squared cost 
		if(a==1) cout<<(long long)pow(b,2)<<endl; 
		//ek hi section hai toh 1 hi radiator lgegea
		else if(b==1 and a>=1) cout<<1<<endl;
		// radiator jyada hai sec kam so sab mein 1 
		else if(a>=b) cout<<b<<endl;

		//if sections are multiples of radiator toh equally distribute krdo like 3,3 in 2  6 case 
		else if(b%a == 0) cout<<(long long)pow(b/a , 2)*a<<endl;
		else {
			// we will chk kon kisko kitna full fill kr sakta hai 
			// like a=3 , b =8 then b/a => 2 so ,  2 2 2 ye toh sections ke liye fix kr skta hu 
			//                                     - - -
			// ab difference pe kaam krlo
			ll store = b/a;
			ll difference = b%a;
			cout<<(long long)(pow(store , 2)*(a-difference)+difference*pow(store+1 , 2))<<endl;
		}
	}
}
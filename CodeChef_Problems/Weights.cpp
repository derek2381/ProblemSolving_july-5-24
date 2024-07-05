// problem link
// https://www.codechef.com/problems/WGHTS


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int w,x, y, z;
	    cin  >> w >> x >> y >> z;
	    if(w == x || w == y || w == z){
	        cout << "YES\n";
	    }else if((x+y) == w || (x+z) == w || (y+z) == w){
	        cout << "YES\n";
	    }else if((x+y+z) == w){
	        cout << "YES\n";
	    }else{
	        cout << "NO\n";
	    }
	}

}

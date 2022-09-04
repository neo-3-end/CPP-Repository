#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    char s[100];
	    cin >> s;
	    for(int i = 0; i < n ;i++){
	        if(s[i] == 'A'){
	            s[i] = 'T';
	            }
	        else if(s[i] == 'T'){
	            s[i] = 'A';
	            }
	        else if(s[i] == 'G'){
	            s[i] == 'C';
	            }
	        else{
	            s[i] == 'G';
	            }
	    }
	    cout << s << endl;
	}
	return 0;
}
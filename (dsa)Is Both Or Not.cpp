//https://www.codechef.com/CCSTART2/problems/ISBOTH?tab=submissions

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if( (n%5==0) && (n%11==0)){
    cout<<"BOTH"<<endl;
    }
    else if(n%5==0 || n%11==0)
	{
	    cout<<"ONE"<<endl;
	}
    else{
        cout<<"NONE"<<endl;
    }
	// your code goes here
	return 0;
}

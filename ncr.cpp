#include<iostream>
using namespace std;

int factorial( int num ) {
    int ans = 1;
    for(int i = 1; i <= num; i++){
        ans = ans*i;
    }
    return ans;

}

int ncr(int n, int r) {
    
    int a = factorial( n );
    int b = factorial( r );
    int c = factorial( n-r );
    
    int ans = a/(b*c);
    return ans;
}

int main(){
    
    int n , r;

    cout << "\n Enter n : "; 
    cin >> n;
    
    cout << "\n Enter r : "; 
    cin >> r;

    int ans = ncr(n,r);
    cout << "\n The value is : " << ans;

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int H, w, a[502], su = 0 ; // Assuming a maximum of 100 elements
    cin>>H>>w;
    for ( int i = 0; i < w; i ++) {
        cin>>a[i];
    }
    for ( int i = 0; i < w; i ++) {
        int ma1 = 0, ma2 = 0;
        for ( int j = 0; j <= i; j ++) {
            if ( a[j] > ma1) ma1 = a[j];
        }
        for ( int j = i; j < w; j ++) {
            if ( a[j] > ma2) ma2 = a[j];
        }
        
        int mi = min(ma1, ma2) ;
        su += mi - a[i] ;
        
    }
    cout<<su;
    return 0;
}
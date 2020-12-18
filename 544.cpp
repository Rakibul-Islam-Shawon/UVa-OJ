#include<bits/stdc++.h>

using namespace std;
 
 
int main ()
{
    int n, r;
    int cases = 0;
 
    while ( scanf ("%d %d", &n, &r) ) {
        if ( n == 0 && r == 0 ) break;
 
        map <string, int> cityIndex;
        string first, second;
        int cost;
        int index = 1;
 
        int d [205] [205];
 
        for ( int i = 0; i < 205; i++ ) {
            for ( int j = 0; j < 205; j++ ) d [i] [j] = -1;
            d [i] [i] = 0;
        }
 
        for ( int i = 0; i < r; i++ ) {
            cin >> first >> second >> cost;
            if ( !cityIndex [first] ) cityIndex [first] = index++;
            if ( !cityIndex [second] ) cityIndex [second] = index++;
 
            d [cityIndex [first]] [cityIndex [second]] = cost;
            d [cityIndex [second]] [cityIndex [first]] = cost;
        }
 
        for ( int k = 1; k <= n; k++ ) {
            for ( int i = 1; i <= n; i++ ) {
                for ( int j = 1; j <= n; j++ )
                    d [i] [j] = d [j] [i] = max (d [i] [j], min (d [i] [k], d [k] [j]));
            }
        }
 
 
        string source, dest;
        cin >> source >> dest;
        printf ("Scenario #%d\n", ++cases);
        printf ("%d tons\n\n", d [cityIndex [source]][cityIndex [dest]]);
    }
 
    return 0;
}

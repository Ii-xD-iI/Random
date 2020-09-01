/*
10:53 PM
9/1/2020
*/
//==============================================================//
/*41
THE NUMBER OF 4 DIGITS NUMBER STRICTLY GREATER THAN 4321 THAT
CAN BE FORMED USING THE DIGITS 0 1 2 3 4 5 
(REPETITION OF DIGITS IS ALLOWED)
*/
//=============================================================//
#include "bits/stdc++.h"

#define GS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0)
#define Int long long
#define all(x) x.begin(), x.end()
#define el '\n'
#define ints unsigned
#define Ints unsigned long long 
#define elif else if
#define test int t; cin>>t; while(t--)

using namespace std;

int main () {
    GS;
    int cnt{};
    for(int i=4322;i<9999;i++){
    	int counter{};
    	int j = i;
    	while(j!=0){
            if(j%10<=5){
                j/=10;
                counter++;
            }
            else {
                counter=1;
                break;
            }
        }
    	if(counter==4){
    		cnt++;
    		cout << i << endl;//optional to display every possible number//
    	}

    }
    cout << cnt << endl;
    return 0;
}

//like basically just loop from i = 4322 to 9999
//and for each one check if the string representation of the value only has charaters 0-5

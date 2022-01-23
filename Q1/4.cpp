#include <iostream>
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
typedef long long ll;
__int128 memo[500];
__int128 _memo[500];

// Allowing cout for 128 bit integers.
std::ostream& operator << (std::ostream& dest, __int128_t value) {
    std::ostream::sentry s(dest);
    if (s) {
        __uint128_t tmp = value<0?-value:value;
        char buffer[128];
        char* d = std::end(buffer);
        do {
            -- d;
            *d = "0123456789"[tmp%10];
            tmp/=10;
        }while(tmp!=0);
        if(value<0) {
            --d;
            *d = '-';
        }
        int len = std::end(buffer)-d;
        if (dest.rdbuf()->sputn(d,len)!=len) {
            dest.setstate(std::ios_base::badbit);
        }
    }
    return dest;
}

// Recursion based function
// int fib_rec(int target, __int128 term1, __int128 term2){
//     if(target == 0){
//         cout<<term1;
//         return 0;
//     }
//     fib_rec(target-1, term2, term1+term2);
//     return 0;
// }
// Loop based function
// int fib_loop(int target){
//     __int128 term1 = 1, term2 = 1, dummy = 0;
//     for (int x = 0; x< target/2 - 1; x++){
//         term1 = term1 + term2;
//         term2 = term1 + term2;
//     }
//     cout<<term2;
//     return 0;
// }
// Loop with memoization
__int128 fib_memoloop(int target){
    for (int x = 0; x< target+1; x++){
        if (_memo[x] == -1){
            _memo[x] = _memo[x-1]+_memo[x-2];
        }
    }
    return _memo[target];
}
// // Recursion with memoization
// __int128 fib_memorec(int term){
//     if (term<=1){
//         return term;
//     }
//     if (memo[term]!= -1){//term is in memory
//     return memo[term];
//         }   
//     memo[term] = fib_memorec(term-1) + fib_memorec(term -2);
//     return memo[term];
// }

int main() {
    for (int x =0; x<500; x++){
        memo[x] = -1;
        _memo[x] = -1;
    }
    _memo[0] = 0;
    _memo[1] = 1;
    // auto start = high_resolution_clock::now();
    // cout<<"Via Recursion, "<<fib_rec(100,0,1)<<"\n";
    // auto end = high_resolution_clock::now();
    // cout<<"Time spent:"<<duration_cast<microseconds>(end - start).count()<<" microseconds\n\n";
    // start = end;
    // cout<<"Via Loops, "<<fib_loop(100)<<"\n";
    // end = high_resolution_clock::now();
    // cout<<"Time spent:"<<duration_cast<microseconds>(end - start).count()<<" microseconds\n\n";
    // start = end;
    // cout<<"Via Recursion and memoization, "<< fib_memorec(100) <<"\n";
    // end = high_resolution_clock::now();
    // cout<<"Time spent:"<<duration_cast<microseconds>(end - start).count()<<" microseconds\n\n";
    // start = end;
    cout<<"Via Loops and memoization, "<<fib_memoloop(100)<<"\n";
    // end = high_resolution_clock::now();
    // cout<<"Time spent:"<<duration_cast<microseconds>(end - start).count()<<" microseconds\n\n";
    // start = end;
}

// Hundredth Fibonacci number : 3542248481792619150750

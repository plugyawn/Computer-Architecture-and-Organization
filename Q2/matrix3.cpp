#define N 128 //Size of Square Matrix
#define val1 10.00 //Values in the first Matrix
#define val2 12.333 //Values in the next Matrix
#include <chrono>
#include <iostream>
#include<bits/stdc++.h>
bool doneOnce = false;
using namespace std::chrono;
using namespace std;


double arrayMult(double m1[N][N], double m2[N][N], int i, int j){
    static double product[N][N];
    double sum = 0.00;
    if (!doneOnce){
    for (int i =0; i<N; i++){
        for (int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                sum += m1[i][k]*m2[k][j];
            }
            product[i][j] = sum;
            sum = 0.00;
        }
    }
    }
    doneOnce = true;
    return (product[i][j]);
}

int main() {
    double m1[N][N], m2[N][N], mult[N][N];
    for (int i=0;i<N; i++){
        for(int j=0; j<N; j++){
            m1[i][j] = val1;
            m2[i][j] = val2;
        }
    }
    
    for (int x = 0; x <N; x++){
        for (int y= 0; y<N; y++){
            mult[x][y] = arrayMult(m1,m2,x,y);
            cout<<mult[x][y]<<" ";
        }
        cout<<endl<<endl;
    }
}
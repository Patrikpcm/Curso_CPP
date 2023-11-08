/*
Task
Given set S = {1,2,3...,N} Find two integers, A and B (where A<B), from set S such that the value of A&B 
is the maximum possible and also less than a given integer, K. In this case, & represents the bitwise AND 
operator.

Function Description
Complete the bitwiseAnd function in the editor below.

bitwiseAnd has the following paramter(s):
- int N: the maximum integer to consider
- int K: the limit of the result, inclusive

Returns
- int: the maximum value of A&B within the limit.

Input Format

The first line contains an integer, T, the number of test cases.
Each of the T subsequent lines defines a test case as 2 space-separated integers, N and K, respectively.

Sample Input

STDIN   Function
-----   --------
3       T = 3
5 2     N = 5, K = 2
8 5     N = 8, K = 5
2 2     N = 8, K = 5

Sample Output
1
4
0

*/

#include <bits/stdc++.h>
using namespace std;

/* SOLUTION TO SEE WHATS HAPPENING

int myBitwiseAnd(int a, int b) {
    bitset<10> bitset_a = bitset<10>((unsigned long)a);
    bitset<10> bitset_b = bitset<10>((unsigned long)b);
    bitset<10> a_and_b = bitset_a & bitset_b;
    cout << bitset_a << endl;
    cout << bitset_b << endl;
    cout << a_and_b << endl;
    cout << endl;
    return int(a_and_b.to_ulong());
}

int bitwiseAnd(int N, int K) {
    int maxAnd = -1;
    for (int i = 1; i <= N; i++) {
        for (int j = i+1; j <= N; j++) {
            int currentAnd = myBitwiseAnd(i, j);
            if (currentAnd < K && currentAnd > maxAnd) 
                maxAnd = currentAnd;
        }
    }
    return maxAnd;
}
*/

//SMART SOLUTION
int bitwiseAnd(int N, int K) {
    int a;int b;
    int max = 0;
    for (a=1;a<N;a++){
        for (b = 2; b <= N; b++){
            if(a<b & (a&b)<K){
                max = (a & b) > max ? a & b : max;
            }
        }
    }
    return max;
}

int main(){
    int T;
    cin >> T;
    while(T-- > 0){
        int N, K;
        cin >> N;
        cin >> K;
        cout << bitwiseAnd(N,K) << endl;
    }
    return 0;
}
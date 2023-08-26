#include <bits/stdc++.h>
using namespace std;

bool contains(const string& haystack, const string& needle) {
    return haystack.find(needle) != string::npos;
}

int sum (vector<int> v){
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}
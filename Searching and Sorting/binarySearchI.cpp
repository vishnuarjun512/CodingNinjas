
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {31,23,33,21,18,20,45};
    stack<int> s;
    vector<int> result(arr.size(), -1);
    
    for (int i = 0; i < arr.size(); i++) {
        while (!s.empty() && arr[s.top()] < arr[i]) {
            result[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
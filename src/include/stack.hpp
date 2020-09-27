#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Stack
{
    public:
    void nearestGreaterToRight(const vector<int>& v, vector<int>& answer);
    vector<int> nearestGreaterToLeft(const vector<int>& v);
    vector<int> nearestSmallerToLeft(const vector<int>& v);
    vector<int> nearestSmallerToRight(const vector<int>& v);
};
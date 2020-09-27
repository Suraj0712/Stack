#include "include/stack.hpp"

int main()
{
    vector<int> v = {1,3,2,4,8,4,0,67,4,79,45,89};
    vector<int> answer;

    Stack solution;

    solution.nearestGreaterToRight(v, answer);

    for(auto i: answer)
    {
        cout<<i<<" ";
    }
    return 0;
}
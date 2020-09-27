#include "include/stack.hpp"

/*
As we iterate the array from right to left we keep the elements in stack such that 
top is always greater than current element
*/
void Stack::nearestGreaterToRight(const vector<int>& v, vector<int>& answer)
{
    stack<int> st;

    for(int i = v.size()-1; i >= 0; i--)
    {
        while(!st.empty() and st.top() < v[i])
        {
            st.pop();
        }

        if(st.empty())
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(st.top());
        }

        st.push(v[i]);
    }

    reverse(answer.begin(), answer.end());
}
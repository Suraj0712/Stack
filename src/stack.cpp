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

vector<int> Stack::nearestGreaterToLeft(const vector<int>& v)
{
    stack<int> st;
    vector<int> answer;

    for(size_t i = 0; i < v.size(); i++)
    {
        while(!st.empty() and st.top() <= v[i])
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

    return answer;
}

vector<int> Stack:: nearestSmallerToLeft(const vector<int>& v)
{
    stack<int> st;
    vector<int> answer;

    for(int i = v.size()-1; i >= 0; i--)
    {
        while(!st.empty() and st.top() >= v[i])
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
    reverse(answer.begin(),answer.end());
    return answer;
}

vector<int> Stack:: nearestSmallerToRight(const vector<int>& v)
{
    stack<int> st;
    vector<int> answer;

    for(int i = 0; i < v.size(); i++)
    {
        while(!st.empty() and st.top() >= v[i])
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
    return answer;
}
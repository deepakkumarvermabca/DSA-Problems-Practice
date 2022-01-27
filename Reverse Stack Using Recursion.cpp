void insert(stack<int> &s, int t)
{
    if(s.size()==0)
    {
        s.push(t);
        return;
    }
    int to = s.top();
    s.pop();
    insert(s,t);
    s.push(to);
    return;
}

void reverseStack(stack<int> &stack) {
    if(stack.size()<=1)
        return;
    int t = stack.top();
    stack.pop();
    reverseStack(stack);
    insert(stack,t);
    return;
}
void solve(int n,int s, int h, int d, vector<vector<int>>&v)
{
    if(n==0)
        return;
    solve(n-1,s,d,h,v);
    v.push_back({s,d});
    solve(n-1,h,s,d,v);
}
vector<vector<int>> towerOfHanoi(int n)
{
    vector<vector<int>> v;
    if(n==0)
        return v;
    solve(n,1,2,3,v);
    return v;
}
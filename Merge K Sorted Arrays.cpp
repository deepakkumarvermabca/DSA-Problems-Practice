/*
*	USING STL SORT FUNCTION
*/

#include<bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    vector<int>res;
    for(int i=0;i<k;i++)
        for(int j=0;j<kArrays[i].size();j++)
            res.push_back(kArrays[i][j]);
    sort(res.begin(),res.end());
    return res;
}


/*
*	USING ITERATIVE METHOD
*/


vector<int> solve(vector<int>ans,vector<int>arr)
{
    vector<int>result;
    int i=0,j=0;
    while(i!=ans.size()&&j!=arr.size())
    {
        if(ans[i]<=arr[j])
            result.push_back(ans[i++]);
        else
        	result.push_back(arr[j++]);
    }
    while(i!=ans.size())
        result.push_back(ans[i++]);
    while(j!=arr.size())
        result.push_back(arr[j++]);
    return result;
}

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
	vector<int> ans;
	ans = kArrays[0];
    for(int i=1;i<kArrays.size();i++)
        ans = solve(ans,kArrays[i]);
    return ans;
}

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	vector<pair<int,int>> v;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==target)
                {
                    pair<int,int> p;
             		p = {arr[i],arr[j]};
                    v.push_back(p);
                    arr[i] = -345345;
                    arr[j] = -345345;
                }
            }
        }
    	if(v.size()==0||n<2)
        {
            pair<int,int> p;
            p = {-1,-1};
            v.push_back(p);
        }
    return v;
}

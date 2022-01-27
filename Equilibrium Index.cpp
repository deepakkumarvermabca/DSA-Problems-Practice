int findEquilibriumIndex(vector<int> &arr) 
{
    int sum=0;
    for(int i=0;i<arr.size();i++)
        sum += arr[i];
    int left = 0;
    for(int i=0;i<arr.size();i++)
    {
        sum -= arr[i];
        if(left==sum)
            return i;
        left += arr[i];
    }
    return -1;
}
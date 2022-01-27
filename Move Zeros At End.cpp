void pushZerosAtEnd(vector<int> &arr) 
{
    int i=0,j=0;
    while(j!=arr.size())
    {
        if(arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
            i++;
        }
        else{
            j++;
        }
    }
}
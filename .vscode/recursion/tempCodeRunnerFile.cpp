int index,int s,int *arr, int n, int sum)
{
    if(index == n)
    {
        if(s == sum)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    s += arr[index];
    int l = count(index+1,s,arr,n,sum);
    s-= arr[index];
    int r = count(index+1,s,arr,n,sum);
    return l+r;

}




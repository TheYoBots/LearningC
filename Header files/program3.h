// User defined function for sum of 2 numbers.
int sum(int a,int b)
{
    return(a+b);
}

// User defined function for facrtorial.
long int fact(int n)
{
    int i;
    long int f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
}
int array_sum(int array[], int n)
{
    int total = 0;
    if (n < 1)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            total += array[i];
        }
        return total;
    }
}
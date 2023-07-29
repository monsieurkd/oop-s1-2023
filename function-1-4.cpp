int sum_two_arrays(int array[], int secondarray[], int n)
{

    if (n < 1)
    {
        return 0;
    }
    else
    {
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            total += array[i] ;
            total += secondarray[i];
        }
        return total;
    }
}
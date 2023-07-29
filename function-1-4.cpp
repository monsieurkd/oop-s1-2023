int sum_two_array(int array[], int secondarray[], int n)
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
            total += array[i] + secondarray[i];
        }
        return total;
    }
}
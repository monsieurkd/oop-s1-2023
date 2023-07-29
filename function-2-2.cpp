int max_element(int array[], int n)
{
    if (n < 1)
    {
        return 0;
    }
    else
    {
        int max = array[0];
        for (int i = 0; i < n; i++)
        {
            if (array[i] > array[i - 1])
            {
                max = array[i];
            }
        }
        return max;
    }
}
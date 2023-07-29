int min_element(int array[], int n)
{
    if (n < 1)
    {
        return 0;
    }
    else
    {
        int min = array[0];
        for (int i = 0; i < n; i++)
        {
            if (array[i] < array[i - 1])
            {
                min = array[i];
            }
        }
        return min;
    }
}
int median_array(int array[], int n)
{
    if (n % 2 == 0 || n < 1)
        return 0;

    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < n; x++)
        {
            if (array[i] > array[x])
            {
                int temp;
                temp = array[i];
                array[i] = array[x];
                array[x] = temp;
            }
        }
    }
    int median = array[n / 2 ];

    return median;
}
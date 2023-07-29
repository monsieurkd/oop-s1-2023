double array_mean(int array[], int n)
{
    int total = 0;
    if (n < 1)
    {
        return 0.0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            total += array[i];
        }
        double mean = total / n;

        return mean;
    }
}
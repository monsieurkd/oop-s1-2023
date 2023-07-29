int num_count(int array[], int n, int number)
{
    if (n < 1)
    {
        return 0;
    }
    else
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] == number)
            {
                count += 1;
            }
        }
        return count;
    }
}

double weighted_average(int array[], int n)
{
    double weighted_average = 0.0;
    for (int i = 0; i < n; i++)
    {

        double count = num_count(array, n, array[i]);
        double weight_of_i = array[i] * count / n;
        weighted_average += weight_of_i;
    }
    return weighted_average;
}
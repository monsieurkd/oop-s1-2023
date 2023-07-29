extern int num_count(int[], int, int);

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
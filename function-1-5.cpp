int count_evens(int number)
{
    if (number < 1)
    {
        return 0;
    }
    else
    {
        int even = 0;
        for (int i = 2; i < number + 1; i++)
        {
            if (i % 2 == 0)
            {
                even += 1;
            }
        }
        return even;
    }
}
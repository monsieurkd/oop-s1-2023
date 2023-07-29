double sum_even(double array[], int n){
    double s = 0;
    if(n<1) return 0;
    for (int i = 0; i < n; i+=2)
    {
        s+= array[i];
    }
    return s;
}
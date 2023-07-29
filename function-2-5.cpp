bool is_descending(int array[], int n){
 if (n < 1)
    {
        return false;
    }
    else
    {
        int min = array[0];
        for (int i = 0; i < n; i++)
        {
            if (array[i] <= array[i - 1])
            {
                min = array[i];
            }
        }
        if(min == array[n-1]){
            return true;
        }
        
        return false;
    }
  
}


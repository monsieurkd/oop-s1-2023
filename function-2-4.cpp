bool is_ascending(int array[], int n){
 if (n < 1)
    {
        return false;
    }
    else
    {
        int max = array[0];
        for (int i = 0; i < n; i++)
        {
            if (array[i] >= array[i - 1])
            {
                max = array[i];
            }
        }
        if(max == array[n-1]){
            return true;
        }
        
        return false;
    }
  
}


int sum_diagonal(int array[4][4]){
    int total = 0;
    for (int  i = 0; i < 4; i++)
    {
        for (int x = 0; x < 4; x++)
        {
            if(i ==x){
            total += array[i][x];
        }
        }
        
    }
    return total;
    
}
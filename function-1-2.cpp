int is_identity(int array[10][10])
{
    bool check = true;
    for (int i = 0; i < 10; i++)
    {

        for (int x = 0; x < 10; x++)
        {
            if ((i == x && array[i][x] != 1) )
            {

                check = false;
            }
            if(i != x && array[i][x] != 0){
                check = false;
            }
        }
        return check;
    }
}
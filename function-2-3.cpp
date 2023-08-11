


int sum_integers(int integers[], int length){
if(length <0) return -1;
int total = 0;
for (int i = 0; i < length; i++)
{
    total+= integers[i];
}
return total;
}


bool is_array_palindrome(int integers[], int length){
if(length <0) {
    return -2;
}
bool check = true;
for (int i = 0; i < length; i++)
{
    if(integers[i] != integers[length-i-1]){
            check = false;
            
    }
}
return check;
}

int palindrome_sum(int integers[], int length){
bool check = is_array_palindrome(integers, length);
if(check == false){
    return -2;

}
int sum = sum_integers(integers, length);
return sum;
}


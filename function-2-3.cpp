bool is_palindrome(int integers[], int length){
if(length<1){
    return false;
}
bool condition = true;
for (int i = 0; i < length; i++)
{
    if(integers[i] != integers[length -i -1]){
        condition = false;
    }
}
return condition;
}
int sum_array_elements(int integers[], int length){
if(length<1){
    return -1;

}
int total = 0;
for (int i = 0; i < length ; i++)
{
    total += integers[i];
}
return total;
}

int sum_if_palindrome(int integers[], int length){
    if(length<1) return -1;
    if(!(is_palindrome(integers, length))){
return -2;
    }else{
        return sum_array_elements(integers, length);
    }
}

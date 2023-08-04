bool if_palindrome(int integers[], int length){
if(sizeof(integers)<1){
    return false;
}
bool condition = true;
for (int i = 0; i < sizeof(integers); i++)
{
    if(integers[i] != integers[sizeof(integers) -i -1]){
        condition = false;
    }
}
return condition;
}
int sum_array_elements(int integers[], int length){
if(sizeof(integers)<1){
    return -1;

}
int total = 0;
for (int i = 0; i < sizeof(integers) ; i++)
{
    total += integers[i];
}

}

int sum_if_palindrome(int integers[], int length){
    if(sizeof(integers)<1) return -1;
    if(if_palindrome(integers, length) == false ){
return -2;
    }else{
        return sum_array_elements(integers, length);
    }
}

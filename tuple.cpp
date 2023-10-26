#include <iostream>
#include <vector>
using namespace std;
#include <tuple>
#include <string>
int main(){
    char a;
    int b;
    string d;
    tuple<char, int , string> t('a',9,"alphabet");
    tuple<char, int , string> c('b',10,"blphabet");
c.swap(t);
auto g = tuple_cat(c,t);
    tie(a,  b , d) = c;
    t = make_tuple('a', 9, "something");
    get<1>(t) = 10;
    cout << get<0>(t)<< " " << get<1>(t) << " " << get<2>(t) << " " <<  tuple_size<decltype(t)>::value;
    return 0;

}

//for lazy pp
auto x(){
    
}
#include <iostream>
#include "Movie.h"

using namespace std;

int main(){
    string s1, s2, s3, s4;
    s1 = "title1";
    s2 = "title2";
    s3 = "title3";
    s4 = "title4";

    cout << endl << endl;
/**
 * QUESTION:
 * 1. What constructors do each of
 * these lines call?
 **/

    
    Movie a(0, s1);
    Movie b(a);
    Movie c = a;
    Movie d;
    //creates deep copy of c 
    d = c;
    Movie e;

    cout << endl << endl;

    // Checking to see what the values on a, b, c, d are.
    cout << "a.) " << a << endl;
    cout << "b.) " << b << endl;
    cout << "c.) " << c << endl;
    cout << "d.) " << d << endl;

    int n = 0;

    // Manually setting values
    b.set_title_pointer_memory(s2);
    b.num_inc_value(n);

    c.set_title_pointer_memory(s3);
    c.num_inc_reference(n);

    d.set_title_pointer_memory(s4);
    d.num_inc_value(n);

    cout << endl << endl;

    // Checking again
    cout << "a.) " << a << endl;
    cout << "b.) " << b << endl;
    cout << "c.) " << c << endl;
    cout << "d.) " << d << endl;

    return 0;

}

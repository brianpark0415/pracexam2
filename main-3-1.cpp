#include <iostream>
#include <stdlib.h>

using namespace std;

extern bool is_more_positive(int vals[], int length);

int main(int argc, char **argv){
    int test_array[] = {1,1,0,-2,3,-5,7};
    int len = 7;
    bool res = is_more_positive(test_array, len);
    cout << res << endl;
}
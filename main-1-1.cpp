#include <iostream>
#include <stdlib.h>

using namespace std;

extern int *array_pad(int *vals, int len);

int main(int argc, char **argv){
    int vals[]={2,3,4,5,6};
    int *pv = array_pad(vals,5);
    for (int i=0;i<7;i++){
        cout << pv[i] << endl;
    }
    return 0;
}
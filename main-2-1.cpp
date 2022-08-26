#include <iostream>
#include <stdlib.h>

using namespace std;

extern string get_temp_phase(int temp);

int main(int argc, char **argv){
    int temp =10;
  cout << "phase at " << temp << "K is: " << get_temp_phase(temp) << endl;
  temp =273;
  cout << "phase at " << temp << "K is: " << get_temp_phase(temp) << endl;
  temp =294;
  cout << "phase at " << temp << "K is: " << get_temp_phase(temp) << endl;
  temp =4703;
  cout << "phase at " << temp << "K is: " << get_temp_phase(temp) << endl;
  temp =5900;
  cout << "phase at " << temp << "K is: " << get_temp_phase(temp) << endl;
  return 0;
}
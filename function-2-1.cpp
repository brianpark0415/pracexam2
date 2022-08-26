#include <string>

using namespace std;

string get_temp_phase(int temp){
    string str1,str2,str3,str4;
    str1 = "ice";
    str2 = "liquid";
    str3 = "gas";
    str4 = "decomposed";

    if (temp <=273){
        return str1;
    } else if(temp >273 && temp <=373){
        return str2;
    } else if(temp > 373 && temp<=4700){
        return str3;
    } else if( temp > 4700){
        return str4;    
    }
    return 0;
}


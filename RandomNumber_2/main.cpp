#include <iostream>
#include "NickFury.h"
using namespace std;

class RandGenerator{
public:
    RandGenerator(){
        srand(time(0));
        for(int i = 1; i <= 10; i++){
            cout << rand()%10;
        }
    }

};

int main()
{

//    NickFury nickie;
//    nickie.randomNumbers();

}

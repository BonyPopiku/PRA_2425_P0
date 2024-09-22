#include <iostream>
#include <BrazoRobotico.h>

using namespace std;


int main(){

    BrazoRobotico R1;

    BrazoRobotico();
    R1.Coger();
    R1.Mover(30.2, 15.05, 20.56);
    R1.Soltar();

    return 0;
}

#include <iostream>

using namespace std;

//Formula: The amount of rockets soldier fires X the amount of alcohol demoman consumes per hour^ of medics needles fired into heavy
int main () 
{
    int demoman = 14; //The amount of alcohol demoman usually consumes in liters per hour
    int soldier = 22; //The amount of rockets soldier fires per hour
    int medic = 24; // of medics needles fired into the heavy
    int sandvich;
    sandvich = soldier * demoman ^ medic;
    cout << sandvich;

}
#include "TowersOfHanoi.h"

#include <iostream>
using namespace std;

TowersOfHanoi::TowersOfHanoi() {

}


TowersOfHanoi::~TowersOfHanoi() {

}
 
void TowersOfHanoi::towerOfHanoi(int n, char from_rod,
                    char to_rod, char aux_rod)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod <<
                                " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
 
// Driver code
void TowersOfHanoi::Run() 
{
    int n = 4; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
}
 
// This is code is contributed by rathbhupendra

#include <bits/stdc++.h>

using namespace std;

void towerOfHanoi(int n, char from_rod,
                    char to_rod, char aux_rod)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << from_rod <<
                            " to rod " << to_rod<<endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod <<
                                " aux rod " << aux_rod << endl;
    towerOfHanoi(n - 1, to_rod, from_rod, aux_rod);
}

// Driver code
int main()
{
    int n;
    cout << " No of Dics ";
    cin >> n; // Number of disks
    towerOfHanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods
    return 0;
}

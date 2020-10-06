/* A troop of Etruscan warriors is organized as follows. In the first row, there is only one warrior; then,
the second row contains two warriors; the third row contains three warriors, and so on. In general, each
row i contains i warriors.
We know the number of Etruscan warriors of a given troop. You have to compute the number of
rows in which they are organized.
Please note that there may be some remaining warriors (this could happen if they are not enough
to form the next row). For example, 3 warriors are organized in 2 rows. With 6 warriors you can form
3 rows; but you can also form 3 rows with 7, 8 or 9 warriors. */
/*A troop of Etruscan warriors is organized as follows. In the first row, there is only one warrior; then,
the second row contains two warriors; the third row contains three warriors, and so on. In general, each
row i contains i warriors.
We know the number of Etruscan warriors of a given troop. You have to compute the number of
rows in which they are organized.
Please note that there may be some remaining warriors (this could happen if they are not enough
to form the next row). For example, 3 warriors are organized in 2 rows. With 6 warriors you can form
3 rows; but you can also form 3 rows with 7, 8 or 9 warriors*/

#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    int test;
    long long w;
    cin>>test;
    for(int i=0;i<test;i++) 
    {
        cin>>w;
        int n = (long long)floor(sqrt(2.0*w+0.25)+0.5)-1;
        cout<<n;
    }
    return 0;
}
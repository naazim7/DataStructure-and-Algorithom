#include <bits/stdc++.h>
using namespace std;

typedef struct squareroot{
    int number[100];
    double root[100];
}squareroot;



 main()
{

    int i;
    squareroot squareroot1;
    for (i = 0; i < 100;i++)
    {
            squareroot1.number[i] = i;
            squareroot1.root[i] = sqrt(i);
    }

    for(i = 0; i < 100;i++)
    {
        printf(" The square root of %d  is", squareroot1.number[i]);
        printf(" = %f\n",squareroot1.root[i]);
    }
    return 0;
}
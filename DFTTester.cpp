#include <iostream>
#include "DFT.h"
#define SQR(x) x*x
using namespace std;
int main()
{

    double inImpulse[8] = {1,0,0,0,0,0,0,0};
    int inImpulseLen = sizeof(inImpulse) / sizeof(double);
    double inImpulseShift[8] = {0,1,0,0,0,0,0,0};
    int inImpulseShiftLen = sizeof(inImpulseShift) / sizeof(double);

    complex<double> out[8];



    // test the impulse function
    cout << "\nDFT Impulse Tester" << endl;
    DFT(inImpulse, inImpulseLen, out);
    for (int i = 0; i < inImpulseLen; i++)
        cout << out[i] << " mag = " << sqrt(SQR(out[i].real()) + SQR(out[i].imag())) << endl;

    // now test the shifted impulse
    cout << "\nDFT Impulse Shifted Tester" << endl;
    DFT(inImpulseShift, inImpulseShiftLen, out);
    for (int i = 0; i < inImpulseShiftLen; i++)
        cout << out[i] << " mag = " << sqrt(SQR(out[i].real()) + SQR(out[i].imag())) << endl;


    cout << "\nDONE" << endl;
    return 0;
}

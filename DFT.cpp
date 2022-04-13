#include <complex>
#include <iostream>
#include <math.h>
#include "DFT.h"

/// <summary>
///  DFT
/// </summary>
/// <param name="in"></param>   // Input signal
/// <param name="N"></param>    // number of elements
/// <param name="out"></param>  // Output "transformed signal" in frequency domain
void DFT (double x[], int N, complex<double> X[]){
    complex<double> sum;

    // For each output value X[k]
    for( int k = 0; k < N; k++ ){

        // Do the summation over all X[n] values
        sum = 0;
        for ( int n = 0; n < N; n++ ){
            sum += x[n] * ( cos((2*M_PI*k*n)/N) - 1.0i * sin((2*M_PI*k*n)/N));
        }
        X[k] = sum;
    }
}

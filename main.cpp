#include <QtCore/QCoreApplication>
#include <iostream>

using namespace std;
// the next 'include' is for CUDA error checks
#include <cuda_runtime.h>
// This is the 'elder trick of the...' - Tell the compiler this function is defined in other place
extern "C"
void cuda_main();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
     cout <<"tét Qt CUda"<<endl;
    // run your cuda application
   cuda_main();
    // check for errors is always a good practice!
   // if (cuerr != cudaSuccess) cout << "CUDA Error: " << cudaGetErrorString( cuerr ) << endl;
    cout <<"done"<<endl;

    return a.exec();
}

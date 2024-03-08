//Nombre:
// Grupo:
// Fecha:
//

#include <iostream>
#include"Eigen/Dense"

using namespace std;
using namespace Eigen;

int main()
{
    
    MatrixXd A(3, 3);
    A << 1, 2, 3, 
         4, 5, 6, 
         7, 8, 9;   
    cout << A;
    cout << endl;
    cout << endl;

    MatrixXd B(3, 3);
    B << 1, 2, 3,
        4, 5, 6,
        7, 8, 9;    
    cout << B;
    cout << endl;
    cout << endl;

    MatrixXd C(3, 3);
    C << 1, 2, 3,
        4, 5, 6,
        7, 8, 9;
    cout << C;
    cout << endl;
    cout << endl;

}

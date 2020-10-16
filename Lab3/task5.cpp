// task5.cpp : CPP to find the product of two 3 by 3 matrices entered by the user by overloading binary * operator
#include <iostream>

using namespace std;

class matrix
{
    int mat[3][3];
public:
    void get_mat()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void display_mat()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
   matrix operator *(matrix m)
    {
      matrix a;
       for(int i=0;i<3;i++)
       {
           for(int j=0;j<3;j++)
           {
               a.mat[i][j]=0;
               for(int k=0;k<3;k++)
               {
                   a.mat[i][j]+=mat[i][k]*m.mat[k][j];
               }
           }
       }

       return a;
    }
};

int main()
{
    matrix a, b, c, d;
    cout << "enter the first 3*3 matrix: " << endl;
    a.get_mat();
    cout << " enter the second 3*3 matrix: " << endl;
    b.get_mat();
    cout << "Product of first and seconf matrix: " << endl;
    c = a * b;
    cout << "product of the above product and second matrix: " << endl;
    d = b * c;
    c.display_mat();
    d.display_mat();
    return 0;
}


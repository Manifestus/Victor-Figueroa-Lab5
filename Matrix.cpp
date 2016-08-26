#include <iostream>
#include "Matrix.h"
#include <string>
#include <sstream>

using namespace std;

int matrix[][];
int rows;
int columns;

Matrix::Matrix(int rows, int columns, double** matrix)
{
	this-> matrix = matrix;
	this-> rows = rows;
	this-> columns = columns;
}

const Matrix Matrix::operator+(const Matrix& m)const{
    Matrix salida(m.rows, m.columns);
    for (int i = 0; i < m.rows; ++i)
    {
    	for (int k = 0; i < m.columns; ++k)
    	{
    		salida[i][j] = this->matrix[i][j] + m[i][j];
    	}
    }
    return salida;
}
const Matrix Matrix::operator-(const Matrix& m)const{
    Matrix salida(m.rows, m.columns);
    for (int i = 0; i < m.rows; ++i)
    {
    	for (int k = 0; i < m.columns; ++k)
    	{
    		salida[i][j] = this->matrix[i][j] - m[i][j];
    	}
    }
    return salida;
}

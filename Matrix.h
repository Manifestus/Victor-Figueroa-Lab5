#pragma once

#include <iostream>
#include <string>

using namespace std;

class Matrix
{
	private:
			int rows;
			int columns;
			double** matrix;

	public:
			Matrix(int, int, double**);
			getRows();
			getColumns();
			const Matrix& operator=(const Matrix&);
	  		const Matrix& operator+=(const Matrix&);
	  		const Matrix& operator-=(const Matrix&);
	  		const Matrix& operator*=(const Matrix&);
		  	const Matrix& operator/=(const Matrix&);
  			const Matrix operator+(const Matrix&)const;
	  		const Matrix operator-(const Matrix&)const;
	  		const Matrix operator*(const Matrix&)const;


	~Matrix();	
};
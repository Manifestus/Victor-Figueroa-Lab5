#include "Matrix.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>

int menu();

int main(int argc, char* argv[])
{

	int opcion;
	vector<Matrix> Matriz;

	while((opcion = menu()) != 11 )
	{
		if (opicon == 1)
		{`
			int rows, columns;
			cout<< "Ingrese numero de filas!" << endl;
			cin>> rows;
			cout<< "Ingrese numero de filas!" << endl;
			cin>> columns;

			double** M1;
			double** M2;
            
            M1 = new double*[rows];

            for(int i = 0; i < columns; ++i)
            {	
                M1[i] = new double[columns];
			}

			for (int i = 0; i < rows; ++i)
			{
				for (int k = 0; k < columns; ++k)
				{
					cout<< "Ingrese un numero para la posicion: " << i << ", " << k << endl;
					cin>> M1[i][k];
				}
			}
			Matriz.push_bacl(new Matrix(rows, columns, M1));
			cout<< "A llenado una matriz sucesivamente!"
		}

		if (opcion == 2)
		{
			imprimir(Matriz);

		}
	}


}

int menu(){

	int opcion;
	cout << endl;
	cout << "----------Menu----------" << endl;
	cout << "1. Agregar Matriz" << endl;
	cout << "2. Sumar" << endl;
	cout << "3. Restar" << endl;
	cout << "4. Menos Unitario" << endl;
	cout << "5. Multiplicacion" << endl;
	cout << "6. Traspuesta " << endl; 
	cout << "7. Comparacion" << endl;
	cout << "8. Diferencia" << endl;
	cout << "9. Inversa" << endl;
	cout << "10. Extraccion de Flujo" << endl;
	cout << "11. Salir" << endl;


	cin >> opcion;
	return opcion;

}

void imprimir(vector<Matrix> Matriz)
{
	for (int i = 0; i < Matriz.size(); ++i)
	{
		cout<< i << ". " << endl;
		for (int k = 0; k < Matriz[i].getRows(); ++k)
		{
			for (int o = 0; o < Matriz[i].getColumns(); ++o)
			{
				cout<< " " << Matriz[i].Matrix[k][o]; << " ";
			}
			cout<< endl;
		}
	}
}
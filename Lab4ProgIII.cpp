#include <iostream>
using namespace std;

int main(){
	

	char resp = 's';
	int opcion = 0;

	int matriz1[3][3];
	int matriz2[3][3];
	int matriz3[3][3];
	int matriz4[3][3];
	int matriz5[3][3];
	int matriz6[3][3];



	for (int h = 0; h <= 6; ++h)
	{
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (h == 1){
					matriz1[i][j] = 1;
				}
				else if(h == 2){
					matriz2[i][j] = 2;
				}
				else if(h == 3){
					matriz3[i][j] = 3;
				} 
				else if(h == 4){
					matriz4[i][j] = 4;
				}
				else if(h == 5){
					matriz5[i][j] = 5;
				}
				else if(h == 6){
					matriz6[i][j] = 6;
				}
			}
		}
	}

	while (resp == 's'){
		cout<< "Ingrese la opcion que quiere: \n \n";
		cout << "1. F mueve la cara frontal en sentido horario." << endl << 
				"2. f mueve la cara frontal en sentido anti-horario." << endl << 
				"3. X mueve la cara trasera en sentido horario." << endl <<
				"4. x mueve la cara trasera en sentido anti-horario." << endl <<
				"5. U mueve la cara superior en sentido horario. " << endl << 
				"6. u mueve la cara superior en sentido anti-horario." << endl << 
				"7. B mueve la cara inferior en sentido horario." << endl <<
				"8. b mueve la cara inferior en sentido anti-horario." << endl <<
				"9. R mueve la cara derecha en sentido horario. " << endl << 
				"10. r mueve la cara derecha en sentido anti-horario." << endl<< 
				"11. L mueve la cara izquierda en sentido horario." << endl << 
				"12. l mueve la cara izquierda en sentido anti-horario." << endl << 
				"13. Salir" << endl << endl;
		cin >> opcion;
		if(opcion == 1){

			//matriz 3 col 1 -> matriz 5 col1
			int arrderecho[3];
			int arrabajo[3];
			int arrizq[3];
			int arrarriba[3];

			int cont = 0;
			for (int h = 0; h <= 4; ++h){
				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j < 3; ++j)
					{
						if(h == 1){
							if(j == 0){
								arrderecho[cont] = matriz5[i][j];
								cont++;
							}
						}
						else if(h == 2){
							if(j == 0){
								arrabajo[cont] = matriz4[i][j];
								cont++;
							}
						}
						else if(h == 3){
							if(j == 2){
								arrizq[cont] = matriz6[i][j];
								cont++;
							}
						}
						else if(h == 4){
							if(j == 0){
								arrarriba[cont] = matriz3[i][j];
								cont++;
							}
						}

						
					}
				}
				cont = 0;
			}

			cont = 0;

			for (int h = 0; h <= 4; ++h)
			{
				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j < 3; ++j)
					{
						if(h == 1){
							if(j == 0){
								matriz5[i][j] = arrarriba[cont];
								cont++;
							}
						}
						else if(h == 2){
							if(i == 0){
								matriz4[i][j] = arrderecho[cont];
								cont++;
							}
						}
						else if(h == 3){
							if(j == 2){
								matriz6[i][j] = arrabajo[cont];
								cont++;
							}
						}
						else if(h == 4){
							if(i == 2){
								matriz3[i][j] = arrizq[cont];
								cont++;
							}
						}
					}
				}
				cont = 0;
			}
			cont = 0;

			int arrsuperior[3];
			int arrlateralderecho[3];
			int arrinferior[3];
			int arrlateralizquierdo[3];
			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					if(i == 0){
						if(j == 0){
							arrsuperior[0] = matriz1[i][j];
							arrlateralizquierdo[0] = matriz1[i][j];
							cont++;
						}		
						else if(i == 1 && j == 0){
							arrsuperior[cont] = matriz1[i][j];
							cont++;
						}
					}
					else if(j == 2){
						if(i == 0){
							arrsuperior[2] = matriz1[i][j];
							arrlateralderecho[0] = matriz1[i][j];
							cont++;
						}
						else if(i != 0){

							arrlateralderecho[cont] = matriz1[i][j];
							cont++;
						}
						
					}
					else if(i == 2){
						if(j == 2){
							arrinferior[2] = matriz1[i][j];
							arrlateralderecho[2] = matriz1[i][j];
							cont++;
						}
						else{
							arrinferior[cont] = matriz1[i][j];
							cont++;
						}
					}
					else if(j == 0){
						arrinferior[0] = matriz1[i][j];
						arrlateralizquierdo[2] = matriz1[i][j];
						cont++;
					}
				}
				cout << cont << endl;
				cont = 0;
			} //for para llenar arreglos matriz 1
			cont = 0;

			for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					if(i == 0){
						matriz1[i][j] = arrlateralizquierdo[cont];
						cont++;
					} 
					else if(j == 2){
						matriz1[i][j] = arrsuperior[cont];
						cont++;
					}
					else if(i == 2){
						matriz1[i][j] = arrlateralderecho[cont];
						cont++;
					}
					else if(j == 0){
						matriz1[i][j] = arrinferior[cont];
						cont++;
					}

				}
				cont = 0;
			} //for asignar valores nuevos matriz 1




		} //fin opcion 1

		
		for (int h = 0; h <= 6; ++h){
				for (int i = 0; i < 3; ++i){
					for (int j = 0; j < 3; ++j){
						if (h == 1){
							cout << matriz1[i][j] << " ";
						}
						else if(h == 2){
							cout << matriz2[i][j] << " ";
						}
						else if(h == 3){
							cout << matriz3[i][j] << " ";
						} 
						else if(h == 4){
							cout << matriz4[i][j] << " ";
						}
						else if(h == 5){
							cout << matriz5[i][j] << " ";
						}
						else if(h == 6){
							cout << matriz6[i][j] << " ";
						}
					}
					cout << endl;
				}
				cout << endl;
			}
		cout << endl << "Quiere seguir? s/n ";
		cin >> resp;

	}

	return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int showMat(int[20][20], int);
int defMat(int[20][20], int);
int addMat(int[20][20], int[20][20], int, int);
int equMat(int[20][20], int[20][20], int, int);

int mat1[20][20];
int mat2[20][20];
int mat3[20][20];
int mat4[20][20];
int mat5[20][20];
int mat6[20][20];
int mat7[20][20];
int mat8[20][20];
int mat9[20][20];
int mat10[20][20];
int sz[10][2];

int main()
{
	int choice;
	do
	{
		do
		{
			cout << "1) Define A Matrix" << endl;
			cout << "2) Show A Matrix" << endl;
			cout << "3) Add Two Matrices" << endl;
			cout << "4) Subtract Two Matrices" << endl;
			cout << "5) Multiply a Matrix With A Number" << endl;
			cout << "6) Multiply Two Matrices" << endl;
			cout << "7) Transpose A Matrix" << endl;
			cout << "8) Exit" << endl;
			cout << "Choose From The Above Menu (1 ~ 8) : ";
			cin >> choice;
		} while (choice < 1 || choice > 8);

		switch (choice)
		{
		case 1:
			int choice1;

			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 11) : ";
				cin >> choice1;
			} while (choice1 < 1 || choice1 > 11);

			switch (choice1)
			{
			case 1:
				defMat(mat1, 0);
				break;
			case 2:
				defMat(mat2, 1);
				break;
			case 3:
				defMat(mat3, 2);
				break;
			case 4:
				defMat(mat4, 3);
				break;
			case 5:
				defMat(mat5, 4);
				break;
			case 6:
				defMat(mat6, 5);
				break;
			case 7:
				defMat(mat7, 6);
				break;
			case 8:
				defMat(mat8, 7);
				break;
			case 9:
				defMat(mat9, 8);
				break;
			case 10:
				defMat(mat10, 9);
				break;
			case 11:
				exit(0);
				break;
			default:
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			break;
		case 2:
			int choice2;

			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 11) : ";
				cin >> choice2;
			} while (choice2 < 1 || choice2 > 11);

			switch (choice2)
			{
			case 1:
				showMat(mat1, 0);
				break;
			case 2:
				showMat(mat2, 1);
				break;
			case 3:
				showMat(mat3, 2);
				break;
			case 4:
				showMat(mat4, 3);
				break;
			case 5:
				showMat(mat5, 4);
				break;
			case 6:
				showMat(mat6, 5);
				break;
			case 7:
				showMat(mat7, 6);
				break;
			case 8:
				showMat(mat8, 7);
				break;
			case 9:
				showMat(mat9, 8);
				break;
			case 10:
				showMat(mat10, 9);
				break;
			case 11:
				exit(0);
				break;
			default:
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			break;
		case 3:
			int choice31, choice32, matx[20][20], maty[20][20], nx, ny;
			cout << "Choose Two Matrices To Add : " << "\n\n";

			cout << "Choose First Matrix : " << endl;
			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 11) : ";
				cin >> choice31;
			} while (choice31 < 1 || choice31 > 11);
			switch (choice31)
			{
			case 1:
				nx = 0;
				equMat(matx, mat1, nx, nx);
				//matx[0][0] = mat1[0][0];
				//nx = 0;
				break;
			case 2:
				nx = 1;
				equMat(matx, mat2, nx, nx);
				//matx[20][20] = mat2[20][20];
				//nx = 1;
				break;
			case 3:
				nx = 2;
				equMat(matx, mat3, nx, nx);
				//matx[20][20] = mat3[20][20];
				//nx = 2;
				break;
			case 4:
				nx = 0;
				equMat(matx, mat1, nx, nx);
				//matx[20][20] = mat4[20][20];
				//nx = 3;
				break;
			case 5:
				nx = 4;
				equMat(matx, mat5, nx, nx);
				//matx[20][20] = mat5[20][20];
				//nx = 4;
				break;
			case 6:
				nx = 5;
				equMat(matx, mat6, nx, nx);
				//matx[20][20] = mat6[20][20];
				//nx = 5;
				break;
			case 7:
				nx = 6;
				equMat(matx, mat7, nx, nx);
				//matx[20][20] = mat7[20][20];
				//nx = 6;
				break;
			case 8:
				nx = 7;
				equMat(matx, mat8, nx, nx);
				//matx[20][20] = mat8[20][20];
				//nx = 7;
				break;
			case 9:
				nx = 8;
				equMat(matx, mat9, nx, nx);
				//matx[20][20] = mat9[20][20];
				//nx = 8;
				break;
			case 10:
				nx = 9;
				equMat(matx, mat10, nx, nx);
				//matx[20][20] = mat10[20][20];
				//nx = 9;
				break;
			case 11:
				exit(0);
				break;
			default:
				cout << "Unknown Error , Try To Run The Program Again.";
			}

			cout << "Choose Second Matrix : " << endl;
			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 11) : ";
				cin >> choice32;
			} while (choice32 < 1 || choice32 > 11);
			switch (choice32)
			{
			case 1:
				ny = 0;
				equMat(maty, mat1, ny, ny);
				//maty[20][20] = mat1[20][20];
				//ny = 0;
				break;
			case 2:
				ny = 1;
				equMat(maty, mat2, ny, ny);
				//maty[20][20] = mat2[20][20];
				//ny = 1;
				break;
			case 3:
				ny = 2;
				equMat(maty, mat3, ny, ny);
				//maty[20][20] = mat3[20][20];
				//ny = 2;
				break;
			case 4:
				ny = 3;
				equMat(maty, mat4, ny, ny);
				//maty[20][20] = mat4[20][20];
				//ny = 3;
				break;
			case 5:
				ny = 4;
				equMat(maty, mat5, ny, ny);
				//maty[20][20] = mat5[20][20];
				//ny = 4;
				break;
			case 6:
				ny = 5;
				equMat(maty, mat6, ny, ny);
				//maty[20][20] = mat6[20][20];
				//ny = 5;
				break;
			case 7:
				ny = 6;
				equMat(maty, mat7, ny, ny);
				//maty[20][20] = mat7[20][20];
				//ny = 6;
				break;
			case 8:
				ny = 7;
				equMat(maty, mat8, ny, ny);
				//maty[20][20] = mat8[20][20];
				//ny = 7;
				break;
			case 9:
				ny = 8;
				equMat(maty, mat9, ny, ny);
				//maty[20][20] = mat9[20][20];
				//ny = 8;
				break;
			case 10:
				ny = 9;
				equMat(maty, mat10, ny, ny);
				//maty[20][20] = mat10[20][20];
				//ny = 9;
				break;
			case 11:
				exit(0);
				break;
			default:
				cout << "Unknown Error , Try To Run The Program Again.";
			}

			cout << "Result : " << endl;
			cout << addMat(matx, maty, nx, ny);

			break;
		}
	} while (true);
}





int defMat(int mat[20][20], int n)
{
	cout << "enter matrix " << n + 1 << " number of rows : ";
	cin >> sz[n][0];
	cout << "enter matrix " << n + 1 << " number of columns : ";
	cin >> sz[n][1];
	cout << "enter matrix " << n + 1 << " elements" << endl;
	for (int i = 0; i < sz[n][0]; i++)
	{
		for (int j = 0; j < sz[n][1]; j++)
		{
			cout << "enter row " << i + 1 << " column " << j + 1 << " : ";
			cin >> mat[i][j];
			mat[20][20] = mat[i][j];
		}
	}
	cout << endl;
	return mat[20][20];
}





int showMat(int mat[20][20], int n)
{
	cout << "matrix " << n + 1 << " : " << "\n\n";
	for (int i = 0; i < sz[n][0]; i++)
	{
		for (int j = 0; j < sz[n][1]; j++)
		{
			cout << left << setw(5) << mat[i][j] << " ";
		}
		cout << endl << endl;
	}
	cout << endl;

	return mat[20][20];
}





int addMat(int matx[20][20], int maty[20][20], int nx, int ny)
{
	int matSum[20][20];
	cout << "Matrix " << nx + 1 << " + " << "Matrix " << ny + 1 << " : " << "\n\n";
	if (sz[nx][0] == sz[ny][0] && sz[nx][1] == sz[ny][1])
	{
		for (int i = 0; i < sz[nx][0]; i++)
		{
			for (int j = 0; j < sz[nx][1]; j++)
			{
				matSum[i][j] = matx[i][j] + maty[i][j];
			}
		}

		for (int i = 0; i < sz[nx][0]; i++)
		{
			for (int j = 0; j < sz[nx][1]; j++)
			{
				cout << left << setw(5) << matSum[i][j] << " ";
			}
		}
		cout << "\n\n";

		return matSum[20][20];
	}
	else
	{
		cout << "Error : Can't Add Matrices Of Different Size" << endl;
		cout << "\n\n";
	}
}





int equMate(int matx[20][20], int maty[20][20], int nx, int ny)
{
	if (sz[nx][0] == sz[ny][0] && sz[nx][1] == sz[ny][1])
	{
		for (int i = 0; i < sz[nx][0]; i++)
		{
			for (int j = 0; j < sz[nx][1]; j++)
			{
				matx[i][j] = maty[i][j];

			}
		}

		return matx[20][20];
	}
	else
	{
		cout << "Error : Can't Equate Matrices Of Different Size" << endl;
		cout << "\n\n";
	}
}
#include <iostream>
#include <iomanip>
using namespace std;


int showMat(int[20][20], int);
int defMat(int[20][20], int);
int addMat(int[20][20], int[20][20], int, int);
int subMat(int[20][20], int[20][20], int, int);
int multiMatN(int[20][20], int, int);
int multiMatM(int[20][20], int[20][20], int, int);
int detMat(int[20][20], int);
int tranMat(int[20][20], int);


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
			cout << "5) Multiply A Matrix With A Number" << endl;
			cout << "6) Multiply Two Matrices" << endl;
			cout << "7) Determinant Of A Matrix" << endl;
			cout << "8) Transpose A Matrix" << endl;
			cout << "9) Exit" << endl;
			cout << "Choose From The Above Menu (1 ~ 9) : ";
			cin >> choice;
		} while (choice < 1 || choice > 9);

		switch (choice)
		{
		case 1:
		{
			int choice1;

			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << setw(23) <<  "12) Main Menu" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 12) : ";
				cin >> choice1;
			} while (choice1 < 1 || choice1 > 12);

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
			{
				char choice111;

				cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

				cin >> choice111;

				switch (choice111)
				{
				case 'y':
				{
					cout << "Good Bye :(" << endl;
					cout << "Program Made By Ahmed Sarg" << endl;
					exit(0);
					break;
				}
				case 'n':
				{
					cout << "Sending You Back..." << endl;
					break;
				}
				}

				break;
			}
			case 12:
			{
				cout << "Sending You Back..." << endl;
				break;
			}
			default:
			{
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			}

			break;
		}
		case 2:
		{
			int choice2;

			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << setw(23) << "12) Main Menu" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 12) : ";
				cin >> choice2;
			} while (choice2 < 1 || choice2 > 12);

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
			{
				char choice211;

				cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

				cin >> choice211;

				switch (choice211)
				{
				case 'y':
				{
					cout << "Good Bye :(" << endl;
					cout << "Program Made By Ahmed Sarg" << endl;
					exit(0);
					break;
				}
				case 'n':
				{
					cout << "Sending You Back..." << endl;
					break;
				}
				}

				break;
			}
			case 12:
			{
				cout << "Sending You Back..." << endl;
				break;
			}
			default:
			{
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			}

			break;
		}
		case 3:
		{
			int choice31, choice32, matx[20][20], maty[20][20], nx = 0, ny = 0;
			cout << "Choose Two Matrices To Add : " << "\n\n";

			cout << "Choose First Matrix : " << endl;
			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << setw(23) << "12) Main Menu" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 12) : ";
				cin >> choice31;
			} while (choice31 < 1 || choice31 > 12);
			switch (choice31)
			{
			case 1:
			{
				//matx[20][20] = mat1[20][20];
				nx = 0;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat1[i][j];
					}
				}
				break;
			}
			case 2:
			{
				//matx[20][20] = mat2[20][20];
				nx = 1;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat2[i][j];
					}
				}
				break;
			}
			case 3:
			{
				//matx[20][20] = mat3[20][20];
				nx = 2;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat3[i][j];
					}
				}
				break;
			}
			case 4:
			{
				//matx[20][20] = mat4[20][20];
				nx = 3;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat4[i][j];
					}
				}
				break;
			}
			case 5:
			{
				//matx[20][20] = mat5[20][20];
				nx = 4;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat5[i][j];
					}
				}
				break;
			}
			case 6:
			{
				//matx[20][20] = mat6[20][20];
				nx = 5;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat6[i][j];
					}
				}
				break;
			}
			case 7:
			{
				//matx[20][20] = mat7[20][20];
				nx = 6;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat7[i][j];
					}
				}
				break;
			}
			case 8:
			{
				//matx[20][20] = mat8[20][20];
				nx = 7;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat8[i][j];
					}
				}
				break;
			}
			case 9:
			{
				//matx[20][20] = mat9[20][20];
				nx = 8;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat9[i][j];
					}
				}
				break;
			}
			case 10:
			{
				//matx[20][20] = mat10[20][20];
				nx = 9;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat10[i][j];
					}
				}
				break;
			}
			case 11:
			{
				char choice3111;

				cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

				cin >> choice3111;

				switch (choice3111)
				{
				case 'y':
				{
					cout << "Good Bye :(" << endl;
					cout << "Program Made By Ahmed Sarg" << endl;
					exit(0);
					break;
				}
				case 'n':
				{
					cout << "Sending You Back..." << endl;
					break;
				}
				}

				break;
			}
			case 12:
			{
				cout << "Sending You Back..." << endl;
				break;
			}
			default:
			{
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			}

			cout << "Choose Second Matrix : " << endl;
			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << setw(23) << "12) Main Menu" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 12) : ";
				cin >> choice32;
			} while (choice32 < 1 || choice32 > 12);
			switch (choice32)
			{
			case 1:
			{
				//maty[20][20] = mat1[20][20];
				ny = 0;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat1[i][j];
					}
				}
				break;
			}
			case 2:
			{
				//maty[20][20] = mat2[20][20];
				ny = 1;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat2[i][j];
					}
				}
				break;
			}
			case 3:
			{
				//maty[20][20] = mat3[20][20];
				ny = 2;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat3[i][j];
					}
				}
				break;
			}
			case 4:
			{
				//maty[20][20] = mat4[20][20];
				ny = 3;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat4[i][j];
					}
				}
				break;
			}
			case 5:
			{
				//maty[20][20] = mat5[20][20];
				ny = 4;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat5[i][j];
					}
				}
				break;
			}
			case 6:
			{
				//maty[20][20] = mat6[20][20];
				ny = 5;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat6[i][j];
					}
				}
				break;
			}
			case 7:
			{
				//maty[20][20] = mat7[20][20];
				ny = 6;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat7[i][j];
					}
				}
				break;
			}
			case 8:
			{
				//maty[20][20] = mat8[20][20];
				ny = 7;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat8[i][j];
					}
				}
				break;
			}
			case 9:
			{
				//maty[20][20] = mat9[20][20];
				ny = 8;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat9[i][j];
					}
				}
				break;
			}
			case 10:
			{
				//maty[20][20] = mat10[20][20];
				ny = 9;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat10[i][j];
					}
				}
				break;
			}
			case 11:
			{
				char choice3211;

				cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

				cin >> choice3211;

				switch (choice3211)
				{
				case 'y':
				{
					cout << "Good Bye :(" << endl;
					cout << "Program Made By Ahmed Sarg" << endl;
					exit(0);
					break;
				}
				case 'n':
				{
					cout << "Sending You Back..." << endl;
					break;
				}
				}

				break;
			}
			case 12:
			{
				cout << "Sending You Back..." << endl;
				break;
			}
			default:
			{
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			}

			cout << "Result : " << endl;
			addMat(matx, maty, nx, ny);

			break;
		}
		case 4:
		{
			int choice41, choice42, matx[20][20], maty[20][20], nx = 0, ny = 0;
			cout << "Choose Two Matrices To Subtract : " << "\n\n";

			cout << "Choose First Matrix : " << endl;
			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << setw(23) << "12) Main Menu" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 12) : ";
				cin >> choice41;
			} while (choice41 < 1 || choice41 > 12);
			switch (choice41)
			{
			case 1:
			{
				//matx[20][20] = mat1[20][20];
				nx = 0;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat1[i][j];
					}
				}
				break;
			}
			case 2:
			{
				//matx[20][20] = mat2[20][20];
				nx = 1;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat2[i][j];
					}
				}
				break;
			}
			case 3:
			{
				//matx[20][20] = mat3[20][20];
				nx = 2;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat3[i][j];
					}
				}
				break;
			}
			case 4:
			{
				//matx[20][20] = mat4[20][20];
				nx = 3;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat4[i][j];
					}
				}
				break;
			}
			case 5:
			{
				//matx[20][20] = mat5[20][20];
				nx = 4;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat5[i][j];
					}
				}
				break;
			}
			case 6:
			{
				//matx[20][20] = mat6[20][20];
				nx = 5;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat6[i][j];
					}
				}
				break;
			}
			case 7:
			{
				//matx[20][20] = mat7[20][20];
				nx = 6;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat7[i][j];
					}
				}
				break;
			}
			case 8:
			{
				//matx[20][20] = mat8[20][20];
				nx = 7;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat8[i][j];
					}
				}
				break;
			}
			case 9:
			{
				//matx[20][20] = mat9[20][20];
				nx = 8;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat9[i][j];
					}
				}
				break;
			}
			case 10:
			{
				//matx[20][20] = mat10[20][20];
				nx = 9;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat10[i][j];
					}
				}
				break;
			}
			case 11:
			{
				char choice4111;

				cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

				cin >> choice4111;

				switch (choice4111)
				{
				case 'y':
				{
					cout << "Good Bye :(" << endl;
					cout << "Program Made By Ahmed Sarg" << endl;
					exit(0);
					break;
				}
				case 'n':
				{
					cout << "Sending You Back..." << endl;
					break;
				}
				}

				break;
			}
			case 12:
			{
				cout << "Sending You Back..." << endl;
				break;
			}
			default:
			{
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			}

			cout << "Choose Second Matrix : " << endl;
			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << setw(23) << "12) Main Menu" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 12) : ";
				cin >> choice42;
			} while (choice42 < 1 || choice42 > 12);
			switch (choice42)
			{
			case 1:
			{
				//maty[20][20] = mat1[20][20];
				ny = 0;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat1[i][j];
					}
				}
				break;
			}
			case 2:
			{
				//maty[20][20] = mat2[20][20];
				ny = 1;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat2[i][j];
					}
				}
				break;
			}
			case 3:
			{
				//maty[20][20] = mat3[20][20];
				ny = 2;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat3[i][j];
					}
				}
				break;
			}
			case 4:
			{
				//maty[20][20] = mat4[20][20];
				ny = 3;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat4[i][j];
					}
				}
				break;
			}
			case 5:
			{
				//maty[20][20] = mat5[20][20];
				ny = 4;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat5[i][j];
					}
				}
				break;
			}
			case 6:
			{
				//maty[20][20] = mat6[20][20];
				ny = 5;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat6[i][j];
					}
				}
				break;
			}
			case 7:
			{
				//maty[20][20] = mat7[20][20];
				ny = 6;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat7[i][j];
					}
				}
				break;
			}
			case 8:
			{
				//maty[20][20] = mat8[20][20];
				ny = 7;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat8[i][j];
					}
				}
				break;
			}
			case 9:
			{
				//maty[20][20] = mat9[20][20];
				ny = 8;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat9[i][j];
					}
				}
				break;
			}
			case 10:
			{
				//maty[20][20] = mat10[20][20];
				ny = 9;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat10[i][j];
					}
				}
				break;
			}
			case 11:
			{
				char choice4211;

				cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

				cin >> choice4211;

				switch (choice4211)
				{
				case 'y':
				{
					cout << "Good Bye :(" << endl;
					cout << "Program Made By Ahmed Sarg" << endl;
					exit(0);
					break;
				}
				case 'n':
				{
					cout << "Sending You Back..." << endl;
					break;
				}
				}

				break;
			}
			case 12:
			{
				cout << "Sending You Back..." << endl;
				break;
			}
			default:
			{
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			}

			cout << "Result : " << endl;
			subMat(matx, maty, nx, ny);
			break;
		}
		case 5:
		{
			int choice5, n, num;

			cout << "Choose A MatriX To Multiply By A Number : " << endl;

			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << setw(23) << "12) Main Menu" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 12) : ";
				cin >> choice5;
			} while (choice5 < 1 || choice5 > 12);

			cout << "Enter A Number To Multiply The Matrix With : ";
			cin >> num;

			switch (choice5)
			{
			case 1:
				n = 0;
				multiMatN(mat1, n, num);
				break;
			case 2:
				n = 1;
				multiMatN(mat2, n, num);
				break;
			case 3:
				n = 2;
				multiMatN(mat3, n, num);
				break;
			case 4:
				n = 3;
				multiMatN(mat4, n, num);
				break;
			case 5:
				n = 4;
				multiMatN(mat5, n, num);
				break;
			case 6:
				n = 5;
				multiMatN(mat6, n, num);
				break;
			case 7:
				n = 6;
				multiMatN(mat7, n, num);
				break;
			case 8:
				n = 7;
				multiMatN(mat8, n, num);
				break;
			case 9:
				n = 8;
				multiMatN(mat9, n, num);
				break;
			case 10:
				n = 9;
				multiMatN(mat10, n, num);
				break;
			case 11:
			{
				char choice511;

				cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

				cin >> choice511;

				switch (choice511)
				{
				case 'y':
				{
					cout << "Good Bye :(" << endl;
					cout << "Program Made By Ahmed Sarg" << endl;
					exit(0);
					break;
				}
				case 'n':
				{
					cout << "Sending You Back..." << endl;
					break;
				}
				}

				break;
			}
			case 12:
			{
				cout << "Sending You Back..." << endl;
				break;
			}
			default:
			{
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			}

			break;
		}
		case 6:
		{
			int choice61, choice62, nx, ny, matx[20][20], maty[20][20];
			cout << "Choose Two Matrices To Multiply : " << "\n\n";

			cout << "Choose First Matrix : " << endl;
			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << setw(23) << "12) Main Menu" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 12) : ";
				cin >> choice61;
			} while (choice61 < 1 || choice61 > 12);
			switch (choice61)
			{
			case 1:
			{
				//matx[20][20] = mat1[20][20];
				nx = 0;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat1[i][j];
					}
				}
				break;
			}
			case 2:
			{
				//matx[20][20] = mat2[20][20];
				nx = 1;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat2[i][j];
					}
				}
				break;
			}
			case 3:
			{
				//matx[20][20] = mat3[20][20];
				nx = 2;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat3[i][j];
					}
				}
				break;
			}
			case 4:
			{
				//matx[20][20] = mat4[20][20];
				nx = 3;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat4[i][j];
					}
				}
				break;
			}
			case 5:
			{
				//matx[20][20] = mat5[20][20];
				nx = 4;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat5[i][j];
					}
				}
				break;
			}
			case 6:
			{
				//matx[20][20] = mat6[20][20];
				nx = 5;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat6[i][j];
					}
				}
				break;
			}
			case 7:
			{
				//matx[20][20] = mat7[20][20];
				nx = 6;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat7[i][j];
					}
				}
				break;
			}
			case 8:
			{
				//matx[20][20] = mat8[20][20];
				nx = 7;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat8[i][j];
					}
				}
				break;
			}
			case 9:
			{
				//matx[20][20] = mat9[20][20];
				nx = 8;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat9[i][j];
					}
				}
				break;
			}
			case 10:
			{
				//matx[20][20] = mat10[20][20];
				nx = 9;
				for (int i = 0; i < sz[nx][0]; i++)
				{
					for (int j = 0; j < sz[nx][1]; j++)
					{
						matx[i][j] = mat10[i][j];
					}
				}
				break;
			}
			case 11:
			{
				char choice6111;

				cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

				cin >> choice6111;

				switch (choice6111)
				{
				case 'y':
				{
					cout << "Good Bye :(" << endl;
					cout << "Program Made By Ahmed Sarg" << endl;
					exit(0);
					break;
				}
				case 'n':
				{
					cout << "Sending You Back..." << endl;
					break;
				}
				}

				break;
			}
			case 12:
			{
				cout << "Sending You Back..." << endl;
				break;
			}
			default:
			{
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			}

			cout << "Choose Second Matrix : " << endl;
			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << setw(23) << "12) Main Menu" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 12) : ";
				cin >> choice62;
			} while (choice62 < 1 || choice62 > 12);
			switch (choice62)
			{
			case 1:
			{
				//maty[20][20] = mat1[20][20];
				ny = 0;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat1[i][j];
					}
				}
				break;
			}
			case 2:
			{
				//maty[20][20] = mat2[20][20];
				ny = 1;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat2[i][j];
					}
				}
				break;
			}
			case 3:
			{
				//maty[20][20] = mat3[20][20];
				ny = 2;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat3[i][j];
					}
				}
				break;
			}
			case 4:
			{
				//maty[20][20] = mat4[20][20];
				ny = 3;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat4[i][j];
					}
				}
				break;
			}
			case 5:
			{
				//maty[20][20] = mat5[20][20];
				ny = 4;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat5[i][j];
					}
				}
				break;
			}
			case 6:
			{
				//maty[20][20] = mat6[20][20];
				ny = 5;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat6[i][j];
					}
				}
				break;
			}
			case 7:
			{
				//maty[20][20] = mat7[20][20];
				ny = 6;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat7[i][j];
					}
				}
				break;
			}
			case 8:
			{
				//maty[20][20] = mat8[20][20];
				ny = 7;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat8[i][j];
					}
				}
				break;
			}
			case 9:
			{
				//maty[20][20] = mat9[20][20];
				ny = 8;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat9[i][j];
					}
				}
				break;
			}
			case 10:
			{
				//maty[20][20] = mat10[20][20];
				ny = 9;
				for (int i = 0; i < sz[ny][0]; i++)
				{
					for (int j = 0; j < sz[ny][1]; j++)
					{
						maty[i][j] = mat10[i][j];
					}
				}
				break;
			}
			case 11:
			{
				char choice6211;

				cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

				cin >> choice6211;

				switch (choice6211)
				{
				case 'y':
				{
					cout << "Good Bye :(" << endl;
					cout << "Program Made By Ahmed Sarg" << endl;
					exit(0);
					break;
				}
				case 'n':
				{
					cout << "Sending You Back..." << endl;
					break;
				}
				}

				break;
			}
			case 12:
			{
				cout << "Sending You Back..." << endl;
				break;
			}
			default:
			{
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			}

			cout << "Result : " << endl;
			multiMatM(matx, maty, nx, ny);
			break;
		}
		case 7:
		{
			int choice7, n;

			cout << "Choose A Matrix To Get It's Determinant : " << endl;

			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << setw(23) << "12) Main Menu" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 12) : ";
				cin >> choice7;
			} while (choice7 < 1 || choice7 > 12);

			switch (choice7)
			{
			case 1:
				n = 0;
				detMat(mat1, n);
				break;
			case 2:
				n = 1;
				detMat(mat2, n);
				break;
			case 3:
				n = 2;
				detMat(mat3, n);
				break;
			case 4:
				n = 3;
				detMat(mat4, n);
				break;
			case 5:
				n = 4;
				detMat(mat5, n);
				break;
			case 6:
				n = 5;
				detMat(mat6, n);
				break;
			case 7:
				n = 6;
				detMat(mat7, n);
				break;
			case 8:
				n = 7;
				detMat(mat8, n);
				break;
			case 9:
				n = 8;
				detMat(mat9, n);
				break;
			case 10:
				n = 9;
				detMat(mat10, n);
				break;
			case 11:
			{
				char choice711;

				cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

				cin >> choice711;

				switch (choice711)
				{
				case 'y':
				{
					cout << "Good Bye :(" << endl;
					cout << "Program Made By Ahmed Sarg" << endl;
					exit(0);
					break;
				}
				case 'n':
				{
					cout << "Sending You Back..." << endl;
					break;
				}
				}

				break;
			}
			case 12:
			{
				cout << "Sending You Back..." << endl;
				break;
			}
			default:
			{
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			}
			
			break;
		}
		case 8:
		{
			int choice8, n;

			cout << "Choose A MatriX To Get It's Transpose : " << endl;

			do
			{
				cout << "1) Mat1" << setw(17) << "6) Mat6" << setw(18) << "11) Exit" << endl;
				cout << "2) Mat2" << setw(17) << "7) Mat7" << setw(23) << "12) Main Menu" << endl;
				cout << "3) Mat3" << setw(17) << "8) Mat8" << endl;
				cout << "4) Mat4" << setw(17) << "9) Mat9" << endl;
				cout << "5) Mat5" << setw(19) << "10) Mat10" << endl;
				cout << "Choose From The Above Menu (1 ~ 12) : ";
				cin >> choice8;
			} while (choice8 < 1 || choice8 > 12);

			switch (choice8)
			{
			case 1:
				n = 0;
				tranMat(mat1, n);
				break;
			case 2:
				n = 1;
				tranMat(mat2, n);
				break;
			case 3:
				n = 2;
				tranMat(mat3, n);
				break;
			case 4:
				n = 3;
				tranMat(mat4, n);
				break;
			case 5:
				n = 4;
				tranMat(mat5, n);
				break;
			case 6:
				n = 5;
				tranMat(mat6, n);
				break;
			case 7:
				n = 6;
				tranMat(mat7, n);
				break;
			case 8:
				n = 7;
				tranMat(mat8, n);
				break;
			case 9:
				n = 8;
				tranMat(mat9, n);
				break;
			case 10:
				n = 9;
				tranMat(mat10, n);
				break;
			case 11:
			{
				char choice811;

				cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

				cin >> choice811;

				switch (choice811)
				{
				case 'y':
				{
					cout << "Good Bye :(" << endl;
					cout << "Program Made By Ahmed Sarg" << endl;
					exit(0);
					break;
				}
				case 'n':
				{
					cout << "Sending You Back..." << endl;
					break;
				}
				}

				break;
			}
			case 12:
			{
				cout << "Sending You Back..." << endl;
				break;
			}
			default:
			{
				cout << "Unknown Error , Try To Run The Program Again.";
			}
			}

			break;
		}
		case 9:
		{
			char choice9;

			cout << "Are You Sure You Want To Exit ? (Reply With y/n) : ";

			cin >> choice9;

			switch (choice9)
			{
			case 'y':
			{
				cout << "Good Bye :(" << endl;
				cout << "Program Made By Ahmed Sarg" << endl;
				exit(0);
			}
			case 'n':
			{
				cout << "Sending You Back..." << endl;
			}
			}
			
			break;
		}
		default:
		{
			cout << "Unknown Error , Try To Run The Program Again." << endl;
		}
		}
	}
	while (true);
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
			cout << "\n\n";
		}

		return matSum[20][20];

		cout << "\n\n";
	}
	else
	{
		cout << "Error : Can't Add Matrices Of Different Size" << endl;
		cout << "\n\n";
	}
}





int subMat(int matx[20][20], int maty[20][20], int nx, int ny)
{
	int matDif[20][20];
	cout << "Matrix " << nx + 1 << " + " << "Matrix " << ny + 1 << " : " << "\n\n";

	if (sz[nx][0] == sz[ny][0] && sz[nx][1] == sz[ny][1])
	{
		for (int i = 0; i < sz[nx][0]; i++)
		{
			for (int j = 0; j < sz[nx][1]; j++)
			{
				matDif[i][j] = matx[i][j] - maty[i][j];
			}
		}

		for (int i = 0; i < sz[nx][0]; i++)
		{
			for (int j = 0; j < sz[nx][1]; j++)
			{
				cout << left << setw(5) << matDif[i][j] << " ";
			}
			cout << "\n\n";
		}

		return matDif[20][20];

		cout << "\n\n";
	}
	else
	{
		cout << "Error : Can't Add Matrices Of Different Size" << endl;
		cout << "\n\n";
	}
}





int multiMatN(int mat[20][20], int n, int num)
{
	int matRes[20][20];

	for (int i = 0; i < sz[n][0]; i++)
	{
		for (int j = 0; j < sz[n][1]; j++)
		{
			matRes[i][j] = mat[i][j] * num;
		}
	}

	for (int i = 0; i < sz[n][0]; i++)
	{
		for (int j = 0; j < sz[n][1]; j++)
		{
			cout << left << setw(5) << matRes[i][j] << " ";
		}
		cout << "\n\n";
	}

	return matRes[20][20];

	cout << "\n\n";
}





int multiMatM(int matx[20][20], int maty[20][20], int nx, int ny)
{
	int matProd[20][20], rc = 0;

	if (sz[nx][1] == sz[ny][0])
	{
		for (int i = 0; i < sz[nx][0]; i++)
		{
			for (int j = 0; j < sz[ny][1]; j++)
			{
				for (int k = 0; k < sz[nx][1]; k++)
				{
					rc += (matx[i][k] * maty[k][j]);
				}

				matProd[i][j] = rc;
				rc = 0;
			}
		}

		for (int i = 0; i < sz[nx][0]; i++)
		{
			for (int j = 0; j < sz[ny][1]; j++)
			{
				cout << left << setw(5) << matProd[i][j] << " ";
			}
			cout << "\n\n";
		}

		return matProd[20][20];

		cout << "\n\n";
	}
	else
	{
		cout << "Error : To Multiply Matrices Number Of Rows In First Matrix Must Be Equal To Number Of Columns In Second Matrix" << endl;
		cout << "\n\n";
	}
}





int detMat(int mat[20][20], int n)
{
	int res;

	if (sz[n][0] == sz[n][1])
	{
		if (sz[n][0] == 2 && sz[n][1] == 2)
		{
			res = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
			cout << "Result : " << res << endl;
			return res;
		}
		else if (sz[n][0] == 3 && sz[n][1] == 3)
		{
			res = (mat[0][0] * ((mat[1][1] * mat[2][2]) - (mat[1][2] * mat[2][1]))) - (mat[0][1] * ((mat[1][0] * mat[2][2]) - (mat[1][2] * mat[2][0]))) + (mat[0][2] * ((mat[1][0] * mat[2][1]) - (mat[1][1] * mat[2][0])));
			cout << "Result : " << res << endl;
			return res;
		}
		else if (sz[n][0] == 4 && sz[n][1] == 4)
		{
			res = ((mat[0][0] * ((mat[1][1] * ((mat[2][2] * mat[3][3]) - (mat[2][3] * mat[3][2]))) - (mat[1][2] * ((mat[2][1] * mat[3][3]) - (mat[2][3] * mat[3][1]))) + (mat[1][3] * ((mat[2][1] * mat[3][2]) - (mat[2][2] * mat[3][1]))))) - (mat[0][1] * ((mat[1][0] * ((mat[2][2] * mat[3][3]) - (mat[2][3] * mat[3][2]))) - (mat[1][2] * ((mat[2][0] * mat[3][3]) - (mat[2][3] * mat[3][0]))) + (mat[1][3] * ((mat[2][0] * mat[3][2]) - (mat[2][2] * mat[3][0]))))) + (mat[0][2] * ((mat[1][0] * ((mat[2][1] * mat[3][3]) - (mat[2][3] * mat[3][1]))) - (mat[1][1] * ((mat[2][0] * mat[3][3]) - (mat[2][3] * mat[3][0]))) + (mat[1][3] * ((mat[2][0] * mat[3][1]) - (mat[2][1] * mat[3][0]))))) - (mat[0][3] * ((mat[1][0] * ((mat[2][1] * mat[3][2]) - (mat[2][2] * mat[3][1]))) - (mat[1][1] * ((mat[2][0] * mat[3][2]) - (mat[2][2] * mat[3][0]))) + (mat[1][2] * ((mat[2][0] * mat[3][1]) - (mat[2][1] * mat[3][0]))))));
			cout << "Result : " << res << endl;
			return res;
		}
		else if ((sz[n][0] > 4 && sz[n][1] > 4) || (sz[n][0] < 2 && sz[n][1] < 2))
		{
			cout << "Sorry, Maximum Size Of Matrix You Can Get Determinat To Is 4X4 \"For Now Wait For Updates ;)\"" << endl;
		}
		else
		{
			cout << "Unknown Error , Try To Run The Program Again.";
		}
	}
	else
	{
		cout << "Error : Can't Add Matrices Of Different Size" << endl;
		cout << "\n\n";
	}
}





int tranMat(int mat[20][20], int n)
{
	int matRes[20][20];
	
	for (int i = 0; i < sz[n][1]; i++)
	{
		for (int j = 0; j < sz[n][0]; j++)
		{
			matRes[i][j] = mat[j][i];
		}
	}

	for (int i = 0; i < sz[n][1]; i++)
	{
		for (int j = 0; j < sz[n][0]; j++)
		{
			cout << left << setw(5) << matRes[i][j] << " ";
		}
		cout << "\n\n";
	}

	cout << endl;

	return matRes[20][20];
}
/************************************
 * Выполнил: Чепуштанов Е.П.        *
 * Группа: ПИ-231                   *
 * Лаба 5, вариант 25               *
 * https://onlinegdb.com/arT9sV03k  *
*************************************/

#include <iostream>

using namespace std;

void FillArray(double Array[], int SizeArray) {
  for (int NumbersArray = 0; NumbersArray < SizeArray; ++NumbersArray) {
    cout << NumbersArray + 1 << ". ";
    cin  >> Array[NumbersArray];
  }
}

void OutArray(double Array[], int SizeArray) {
  cout << "[ ";
  
  for (int NumbersArray = 0; NumbersArray < SizeArray; ++NumbersArray) {
    cout << Array[NumbersArray] << " ";
  }
  
  cout << "]";
}

int CountElements(double Array[], int SizeArray, double Condition) {
  int Result = 0;
  
  for (int NumbersArray = 0; NumbersArray < SizeArray; ++NumbersArray) {
    if (Array[NumbersArray] < Condition) {
      Result += 1;
    }
  }
  return (Result);
}

int main() {
  int k, m;
  double s;
  
  cout << "Введите значение s: ";
  cin >> s;
  cout << "Введите количество элементов массива P: ";
  cin >> k;
  cout << "Введите количество элементов массива D: ";
  cin >> m;
  
  double P[k], D[m];
  
  cout << "Введите элементы массива P: " << endl;
  FillArray(P, k);
  cout << endl;
  
  cout << "Введите элементы массива D: " << endl;
  FillArray(D, m);
  cout << endl;
  
  cout << "Массив P: " << endl;
  OutArray(P, k);
  cout << endl << "Количество элементов массива P, меньших s: " << CountElements(P, k, s) << endl << endl;
  
  cout << "Массив D: " << endl;
  OutArray(D, m);
  cout << endl << "Количество элементов массива D, меньших s: " << CountElements(D, m, s) << endl << endl;
  
  return (0);
}

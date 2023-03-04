/* Hãy cài đặt hàm đệ quy tính T(n) = n! = 1 x 2 x 3 x … x n. Trong đó T(0) = 1 */

#include <iostream>

using namespace std;

int giaiThua(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return giaiThua(n-1)*n;
	}
}

int main()
{
	int n,S;
	cout << "Nhap n = "; cin >> n;

	S = giaiThua(n);
	cout << "Giai thua = " << S << endl; 
}
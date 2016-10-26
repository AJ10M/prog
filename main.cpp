#include <iostream>

using namespace std;

int NPrime( int n );

int main()
{
  int n;
  cout << "Input N: ";
  cin >> n;
  cout << NPrime(n);
  return 0;
}

int NPrime( int n )
{
  int *a = new int[n + 1];
  for (int i = 0; i <= n; i++)
	a[i] = i;

  for (int i = 2; i * i <= n; i++)
  {
	if (a[i])
	for (int j = i*i; j <= n; j += i)//поиск составных
      a[j] = 0;
  }

  for (int i = 2; i < n; i++)
  {
	if (a[i])
	  cout << a[i] << ' ';
  }

	cout << endl;
	delete[] a;

	return 0;
}


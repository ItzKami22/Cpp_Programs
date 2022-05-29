#include <iostream>
#include <string>
#include <math.h> 
#include <cmath> 
using namespace std;
int main()
{
	int m[16][16];
	int N;
	int d;
	int x;
	int a = 1;
	int i = 0;
	int q = 0;
	int j = 0;
	int z = 0;
	int z2 = 0;
	int z3 = 0;
	cin >> N;
	while (true)
	{
		for (d = 0; d < N-1; d++){
			if (m[i][d] == 0) {
				m[i][d] = a;
				a += 1;
			}
			else {break;}
		}
		i += 1;
		for (x = i+q; x < N; x++) {
			if (m[x][N - i - q] == 0) {
				m[x][N - i - q] = a;
				a += 1;
			}
			else { break; }
		}
		q += 1;
		for (d = N-1-q; d > -1; d--) {
			if (m[N - i - 1][d] == 0) {
				m[N - i - 1][d] = a;
				a += 1;
			}
			else { break; }
		}
		for (d = 0; d < N-1-j; d++) {
			if (m[d][N - i - 2] == 0) {
				m[d][N - i - 2] = a;
				a += 1;
			}
			else { break; }
		}
		j += 1;
		N -= 1;
		for (x = N - 2-z; x > 0+z+z2; x--) {
			if (m[x][N - i] == 0) {
				m[x][N - i] = a;
				a += 1;
			}
			else { break; }
		}
		z += 1;
		z2 += 1;
		for (d = N - 2; d > -1; d--) {
			if (m[N - i - 1 + z3][d] == 0) {
				m[N - i - 1 + z3][d] = a;
				a += 1;
			}
			else { break; }
		}
		z3 += 1;
	}
	cout << m << endl;
	return 0;
}

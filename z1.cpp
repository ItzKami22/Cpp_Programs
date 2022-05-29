#include <iostream>
#include <string>
using namespace std;
void mass(long long a[18]) {
	string m, n;
	int h, j, k=0;
	for (int i = 0; i < 18; i++)
	{
		h = i * 2;
		j = i;
		while (h > 0) {
			m = m+to_string(h % 2);
			h /= 2;
		}
		reverse(m.begin(),m.end());
		while (j > 0) {
			n = n+to_string(j % 2);
			j /= 2;
			k += 1;
		}
		cout << n[0] << endl;
		reverse(n.begin(), n.end());
		for (int l = 0; l < 8 - k; l++)
		{
			n.insert(0, "0");
		}
		a[i] = stoll(m + n);
		k = 0;
		m = "";
		n = "";
	}
}

int main()
{
    long long a[18];
    mass(a);
}

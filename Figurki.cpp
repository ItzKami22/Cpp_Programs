#include <iostream>
#include <string>
using namespace std;
void draw(string a, int b, int c, char d) {
	string w = "";
	string h = w;
	int i;
	int s;
	int j;
//Pryamougolbniky

	if (a == "1") {
		for (i = 0; i < b; i++) { w += d; }
		cout << w << endl;
		h = w;
		w = "";
		w = d;
		w += d;
		for (i = 0; i < b - 2; i++) { w.insert(1, " "); }
		for (i = 0; i < c - 2; i++) { cout << w << endl; }
		cout << h << endl;
	}
//Triangles

	if (a == "2") {
		for (i = 0; i < b; i++) { w += d; }
		if (b == 3) {						//ultra tight type
			h += ' ';
			h += d;
			for (i = 0; i < c - 1; i++) {
				if (i < c / 2) { cout << h << endl; }
				else { cout << d ; cout << ' '; cout << d << endl;}
			}
			cout << w << endl;
		}
		else {
			if ((b - 1) / 2 == c - 1) {						//normal type
				if (b % 2 == 1) {
					h.insert(int(0), int((b / 2)), ' ');
					h += d + ' ';
					string k = " ";
					for (i = 0; i < c - 1; i++) {
						cout << h << endl;
						h.insert(h.size() - 1, k);
						if (i == 0) { h.erase(h.size() - 1, 1); h += d; k += " "; }
						h.erase(0, 1);
					}
				}
				if (b % 2 == 0) {
					h.insert(int(0), int(((b - 2) / 2)), ' ');
					h += d;
					h += d;
					string k = "  ";
					for (i = 0; i < c - 1; i++) {
						cout << h << endl;
						h.insert(h.size() - 1, k);
						if (i == 0) { h.erase(h.size() - 1, 1); h += d; }
						h.erase(0, 1);
					}
				}
				cout << w << endl;
			}
			if ((b + 1) / 2 < c) {							//tight type
				int l = 2;
				for (i = 1; i < c - b + 1; i++) {
					if (i % ((b - 1) / 2) == 0) { l += 1; }
				}
				if (((c - b) % ((b - 1) / 2) != 0) && b < c) { l += 1; }
				int z = l - 1;
				int t = 0;
				if (b % 2 == 1) {
					h.insert(int(0), int((b / 2)), ' ');
					h += d;
					for (i = 0; i < c - 1; i++) {
						cout << h << endl;
						if (i == 0) { h += d; }
						z += 1;
						if (z == l && t != 1) { h.insert(h.size() - 1, " "); z = 0; t += 1; h.erase(0, 1); }
						if (t == 1 && z == l) { h.insert(h.size() - 1, "  "); z = 0; h.erase(0, 1); }
					}
				}
				if (b % 2 == 0) {
					h.insert(int(0), int(((b - 2) / 2)), ' ');
					h += d;
					h += d;
					for (i = 0; i < c - 1; i++) {
						cout << h << endl;
						z += 1;
						if (z == l) { h.insert(h.size() - 1, "  "); z = 0; h.erase(0, 1); }
					}
				}
				cout << w << endl;
			}
			if ((b + 1) / 2 > c) {							//wide type
				if (b % 2 == 1) {
					h.insert(int(0), int((b / 2)), ' ');
					h += d;
					j = (b - 1) / 2 / (c - 2);
					for (i = 0; i < c - 1; i++) {
						cout << h << endl;
						h = "";
						h.insert(int(0), int((b / 2)), ' ');
						if (i == 0) { h.insert(h.size(), j, d); h.erase(0, j); h += ' '; h.insert(h.size(), j, d); }
						if (i != 0) { h.insert(h.size(), j, d);  h.insert(h.size(), j * i * 2, ' '); h += ' '; h.erase(0, j * (i + 1)); h.insert(h.size(), j, d); }
					}
				}
				if (b % 2 == 0) {
					h.insert(int(0), int((b - 2) / 2), ' ');
					h += d;
					h += d;
					j = (b - 1) / 2 / (c - 2);
					for (i = 0; i < c - 1; i++) {
						cout << h << endl;
						h = "";
						h.insert(int(0), int((b - 2) / 2), ' ');
						if (i == 0) { h.insert(h.size(), j, d); h.erase(0, j); h += "  "; h.insert(h.size(), j, d); }
						if (i != 0) {
							h.insert(h.size(), j, d);  h.insert(h.size(), j * i * 2, ' '); h += "  "; h.erase(0, j * (i + 1)); h.insert(h.size(), j, d);
						}
					}
				}
				cout << w << endl;
			}
		}
	}
}



int main() {
draw("2", 10, 100, 'n');
}
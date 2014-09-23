#include <iostream>
using namespace std;
int main() {

	char s[40];
	int n = 0; double ra = 0.0, k = 0.0, r = 0.0;
	double w = 0.0, we = 0.0, avg = 0.0;
	cin >> s >> n;

	cout << "Tournament: " << s << endl;
	cout << "Number of players: "<< n << endl;
	cout << "New ratings:\n";
	for (register int i = 0; i < n; ++i) {
		
		char l[40];
		cin >> l >> ra >> w >> we >> k;
		avg += ra;
		cout << l << ' ' << (ra + (k * (w - we))) << endl;
	}

	cout << "Media Elo: "<< (int)((avg / n) + .5) << endl;

}
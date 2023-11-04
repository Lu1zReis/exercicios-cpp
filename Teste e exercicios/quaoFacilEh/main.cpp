#include <iostream>

using namespace std;

int main () {

	string frase, nums = "0123456789";
	int plv = 0, q = 0, r; 
	cin >> frase;
	for (int i = 0; i < frase.size(); i++) {
		if ((int)frase[i] >= 97 and (int)frase[i] < 123) {
			int c = 0;
			bool simb = false, num = false;
			while (i < frase.size() and frase[i] != ' ') {
				if (i+1 < frase.size() and frase[i]=='.' and frase[i+1]!=' ')
					simb = true;
				for (int j = 0; j < nums.size(); j++) {
					if (frase[j] == nums[j]) num = true;
				}
				c++;
			}
			if (simb == true or num == true) plv += 0;
			else {
				cout << c << endl;
				plv += c;
				q++;
			}
			i+=c;
		}
		cout << i << endl;
	}
	cout << plv << "/" << q << endl;
	int med = plv/q;
	if (med <= 3) r = 250;
	else if (med == 4 or med == 5) r = 500;
	else r = 1000;
        cout << r << endl;
	return 0;
}

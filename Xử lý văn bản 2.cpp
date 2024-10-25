#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
void chuanhoa(string& s) {
	stringstream ss(s);
	string t;

	string res = "";

	while (ss >> t) {
		for (int i = 0; i < t.length(); i++) {
			t[i] = tolower(t[i]);
		}
		res = res + t + " ";
	}

	res[0] = toupper(res[0]);
	res.pop_back();

	s = res;
}

int main() {
    faster;
	string s;

	vector<string> v;

	while (getline(cin, s)) {
		//if (s == "END") break;
		string tmp = "";
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '.' || s[i] == '!' || s[i] == '?') {
				chuanhoa(tmp);
				tmp = tmp + s[i];
				v.push_back(tmp);
				tmp = "";
			}
			else tmp += s[i];
		}

		if (tmp != "") {
			chuanhoa(tmp);
			v.push_back(tmp + ".");
		}
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	return 0;
}
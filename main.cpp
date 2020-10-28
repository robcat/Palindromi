#include <iostream>
using namespace std;

bool isPalindrome(string s) {
  int l = s.length();
  for(int i=0; i<l; i++){
    if(s[i] != s[l-i-1]){
        return false;
    }
  }
  return true;
}

string parole[] {
  "rosso",
	"ereggere",
	"arzigogolato",
	"人上人",
	"casa",
};

int main() {
  for(auto parola : parole) {
		cout << parola.length() << '\t' << isPalindrome(parola) << '\t' << parola << endl;
	}
}
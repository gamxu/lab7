#include<iostream>
#include<string>

using namespace std;

string revStr(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string low2up(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string up2low(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text;
    cout << "Input text: ";
	cin >> text;
	
	string revText = revStr(text);

    cout << "Reversed text: " << revText << "\n";

	string check1 = up2low(text);
	string check2 = up2low(revText);

	if(check1 == check2){
		cout << "Palindrome: Yes ";
	
	}else{
		cout << "Palindrome: No ";
	}
    
    return 0;
}

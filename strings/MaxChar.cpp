#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#define ASCII_SIZE 256
using namespace std;

char maxChar(char *S){
	
	int count[ASCII_SIZE] = {0};
	int len = strlen(S);
	int max  = 0;
	char result;

	for(int i=0; i<len; i++){
		count[S[i]]++;
		if(max < count[S[i]]){
			max = count[S[i]];
			result = S[i];
		}
	}

	return result;
}

int main() {
	char S[1000];
	cin>>S;
	cout<<maxChar(S);

	return 0;
}
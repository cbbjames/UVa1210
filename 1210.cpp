//#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int prime[10000] = {0};
bool is_prime(int m) {
	for (int i = 2; i <= sqrt(m); i++) 
		if (m%i == 0) return false;
	return true;
}
int main()
{
	int k = 0;
	for (int i = 2; i < 10005; i++) {
		if (is_prime(i)) prime[k++] = i;
	}
	/*
	int z = 0;
	while (prime[z] > 0&&z<10)
		cout << prime[z++]<<endl;
	*/
	int n;
	while (cin >> n&&n) {
		int cnt = 0;
		for (int i = 0; i <=n; i++) {
			int is_ans = 0;
			for (int j = i; j <= n; j++) {
				is_ans += prime[j];
				if (is_ans == n) {
					cnt++; break;
				}
			}
		}
		cout << cnt << endl;
	}
	//system("PAUSE");
	return 0;
}
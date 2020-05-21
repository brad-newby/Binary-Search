#include <iostream>
using namespace std;
int binary_search(int list[], int size, int key) {
	int left, right, mid;
	left = 0; right = size - 1;
	while (left <= right) {
		mid = (left + right / 2);
		if (list[mid] == key) { return 1; }
		else if (key < list[mid]) { left = mid + 1; }
		else { right = mid - 1; }
	}
	return -1;
}

int main() {
	int A[10];
	int i, s, k, ans;
	cout << "please input the size of your array \n";
	cin >> s;
	cout << "please input your key \n";
	cin >> k;
	cout << "please inputn your array in descending order \n";
	for (i = 0; i < s; i++) {
		cin >> A[i];
	}
	ans = binary_search(A, s, k);
	cout << ans << endl;


	system("pause");
	return 0;
}
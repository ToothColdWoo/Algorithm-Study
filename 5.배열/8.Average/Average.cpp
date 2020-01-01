#include<iostream>
using namespace std;
int main() {
	int caseNum;
	cin >> caseNum;
	int score[1000];
	if (caseNum > 1000 && caseNum < 1) {
		cout << "RESTART PROGRAM\n";
	}
	for (int i = 0; i < caseNum; i++) {
		int num;
		scanf("%d", &num);
		double avg=0;
		double sum=0;
		for (int j = 0; j < num; j++) {
			cin >> score[j];
			sum += score[j];
		}
		avg = sum / num;
		int count =0;
		for (int k = 0; k < num; k++) {
			if (avg < score[k]) {
				count++;
			}
		}
		printf("%.3f%%\n", (double)(count) * 100/num);
	}
	
	
}
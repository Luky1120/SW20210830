#include<stdio.h>

int main(void) {
	int calendar[2][13][32] = { 0 };
	int month;
	int day;
	for (int y =0; y <= 2; y++) {
		calendar[y][0][0] = 2020 + y;
		for (int m = 1; m <= 12; m++) {
			month == m + 1;
			calendar[y][m][0] = month;
			if (m == 2) {
				day = 28;
			}
			else if ( m == 4 || m == 6 || m == 9 || m = 11) {
				day = 30;
			}
			else {
				day = 31;
			}
			for (int d = 0; d <= day-1; d++) {
				calendar[y][m][d] = d + 1;
			}
		}
	}


}
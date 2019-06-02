
#include <stdio.h>

#define YEAR 16
#define MONTH 10
#define DAY 3
#define WORKING 730 
#define LIMIT 60
int returnMonthDays(int m,int y) {		//년도와 달을 넣으면 일수 반환
	y += 2000;
	switch (m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;

	case 4: case 6: case 9: case 11:
		return 30;
	case 2:
		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {
			return 29;
		}
		else {
			return 28;
		}
	
	}
}

int calcuComeback(int y,int m, int d, int work) {			//전역날짜 계산 work만큼 줄음
	int nowMonth = 1;
	int workingDays = WORKING - work;
	workingDays = workingDays-(returnMonthDays(m,y) - d + 1);
	for (int i = m+1; i <= 12; ++i) {
		workingDays -= returnMonthDays(i,y);
	}
	y++;
	while (workingDays >= returnMonthDays(nowMonth,y)) {
		workingDays -= returnMonthDays(nowMonth++,y);
		if (nowMonth > 12) {
			nowMonth = 1;
			y++;
		}
	}
	if(workingDays!=0)
		d = workingDays;
	else {
		nowMonth--;
		d = returnMonthDays(nowMonth, y);
	}

	return y * 10000 + (nowMonth) * 100 + d;
}
int calcuDays(int y, int m, int d) {								//단축일자 구하기
	int days = y > YEAR ? LIMIT : 0;
	if (y == YEAR) {
		switch (m)
		{
		case 10:
			break;
		case 11:
			days += 29 + d;
			break;
		case 12:
			days += 59 + d;
			break;
		}
		return calcuComeback(y,m,d, days / 14);
	}
	else {
		for (int i = y; i > YEAR + 1; --i) {
			if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) {
				days += 366;
			}
			else {
				days += 365;
			}
		}
		for (int i = 1; i <= m - 1; ++i) {
			days += returnMonthDays(i,y);
		}
		days += d;
		return calcuComeback(y, m, d, days / 14 > LIMIT ? LIMIT : days / 14);

	}
}

int main() {
	
	int input,inputYear, inputMonth, inputDay, days;

	scanf("%d", &input);
	inputYear = input / 10000;
	input %= 10000;
	inputMonth = input / 100;
	input %= 100;
	inputDay = input;

	if ((inputYear < YEAR) || (inputYear == YEAR && inputMonth < MONTH) || (inputYear == YEAR && inputMonth == MONTH && inputDay < DAY)) {
		printf("%d",calcuComeback(inputYear,inputMonth,inputDay,0));
	}
	else {
		printf("%d",calcuDays(inputYear, inputMonth, inputDay));
	}

}

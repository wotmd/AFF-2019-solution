#include <stdio.h>
/* 
 * 입력의 맨 첫 줄에 숫자들의 개수가 주어진다. 그 후 다음 줄에 숫자들이 주어진다.. 주어진 숫자 중 가장 큰 수부터 왼쪽 끝에 위치하고, 
 * 그 다음 큰 수가 오른쪽의 끝에 위치한다. 그리고 세 번째로 큰 수가 왼쪽 끝에 위치한 수의 오른쪽에 위치한다. 네 번째로 큰 수는 오른쪽 끝에
 * 위치한 수의 왼쪽에 위치한다. 이런식으로 왼쪽 오른쪽 번갈아가며 수를 위치하다보면 가장 작은 수가 가운데에 위치한다. 이런식으로 수를 정렬해보자.
 * 예를 들면 10, 34, 54, 41, 28 이라는 5개의 숫자가 있을때, 위의 방식과 같이 정렬되면 54, 34, 10, 28, 41 이렇게 정렬된다.
 * 이렇게 정렬된 수를 출력하여 제대로 정렬榮쩝?확인해보자.(20개 숫자 출력 시 보기 편하기 위해 줄바꿈을 진행한다.)
 * 똑똑한 여러분들이라면 이 문제를 쉽게 해결 할 수 있을 것이다. 
 *
 * (참고!) 노파심에 하는 말이지만 C언어에서는 배열 크기 지정시 변수값을 이용해 크기 지정이 불가능한 것을 명심하자.
 */

#define MAX_SIZE 100

void input_Array(int* array, int size);
void print_Array(int* array, int size);
void cross_Sort(int* array, int* sort_Array, int size);

int main() {
	int number_Array[MAX_SIZE] = { 0 };
	int cross_Sort_Array[MAX_SIZE] = { 0 };
	int size;
	int index;
	int current_Index;
	int swap_Temp;

	scanf("%d", &size);
	
	input_Array(number_Array, size);
	
	for (current_Index = 0; current_Index < size; ++current_Index) {
		for (index = current_Index + 1; index < size; ++index) {
			if (number_Array[current_Index] < number_Array[index]) {
				swap_Temp = number_Array[index];
				number_Array[index] = number_Array[current_Index];
				number_Array[current_Index] = swap_Temp;
			}
		}
	}
	
	cross_Sort(number_Array, cross_Sort_Array, size);
	print_Array(cross_Sort_Array, size);

	return 0;	
}

void input_Array(int* array, int size) {
	int count;
	for (count = 0; count < size; ++count)
		scanf("%d", &array[count]);
}

void print_Array(int* array, int size) {
   int count = 0;
   for (count = 0; count < size; ++count) {
         if ((count + 1) != size)
            printf("%d ", array[count]);
         else
            printf("%d", array[count]);
   }
}

void cross_Sort(int* array, int* sort_Array, int size) {
	int count = 0;
	int length_From_Edge = 0;
	while (count < size) {
		sort_Array[length_From_Edge] = array[count];
		++count;
		
		if (count == size)
			return;
		
		sort_Array[(size - 1) - length_From_Edge] = array[count];

		++count;
		++length_From_Edge;
	}
}

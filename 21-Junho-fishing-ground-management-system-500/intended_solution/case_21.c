#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Point {
	long long x;
	long long y;
} point;

typedef struct Node {
	point value;
	struct Node* next;
} node;

typedef struct Stack {
	node *top;
} stack;

long long ccw(point first, point second, point next);
double dist(point p1, point p2);
point* findBase(point* points, int n);
void swapPoint(point* p1, point* p2);
int compare(const point* p1, const point* p2);
void stack_init(stack *pstack);
int stackIsEmpty(stack *pstack);
void stackPush(stack *pstack, point data);
point stackPop(stack *pstack);
int CalConvexhull(stack* pstack, point* points, int n);
point stackBottom(stack *pstack);

point* base;

int main() {
	int i;
	long long n, px, py;
	point* points;
	stack Pointstack;

	stack_init(&Pointstack);
	scanf("%lld", &n);
	points = (point*)malloc(sizeof(point)*n);

	for (i = 0; i < n; i++){
		scanf("%lld", &points[i].x);
		scanf("%lld", &points[i].y);
	}

	base = findBase(points, n);
	swapPoint(base, &points[0]);
	base = points;
	qsort(points+1, n-1, sizeof(point), compare);
	printf("%d\n", CalConvexhull(&Pointstack, points, n));
	
	return 0;
}

long long ccw(point first, point second, point next) {
	long long tmp1 = (second.x - first.x) * (next.y - first.y);
	long long tmp2 = (second.y - first.y) * (next.x - first.x);
	long long ret = tmp1 - tmp2;;
	return ret;
}

double dist(point p1, point p2) {
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

point* findBase(point* points, int n) {
	int i;
	long long ret = 0;

	for (i = 0; i < n; i++) {
		if (points[ret].y > points[i].y)
			ret = i;
		else if (points[ret].y == points[i].y)
			if (points[ret].x > points[i].x)
				ret = i;
	}
	return &points[ret];
}

void swapPoint(point* p1, point* p2) {
	long long x, y;
	x = p1->x;
	y = p1->y;

	p1->x = p2->x;
	p1->y = p2->y;
	p2->x = x;
	p2->y = y;
}

int compare(const point* p1, const point* p2) {
	long long ccwvalue = ccw(*base, *p1, *p2);
	double dist1, dist2;

	if (ccwvalue == 0) {
		dist1 = dist(*base, *p1);
		dist2 = dist(*base, *p2);
		if (base->x < p1->x) {
			if (dist1 > dist2) return 1;
			else return -1;
		}
		else {
			if (dist1 < dist2) return 1;
			else return -1;
		}
	}
	else {
		if (ccwvalue > 0) return -1;
		else return 1;
	}
}

int CalConvexhull(stack* pstack, point* points, int n) {
	int i;
	point first, second, next;
	double ccwComp;

	stackPush(pstack, points[0]);
	stackPush(pstack, points[1]);
	for (i = 2; i < n; i++) {
		second = stackPop(pstack);
		first = stackPop(pstack);
		next = points[i];

		ccwComp = ccw(first, second, next);
		if (ccwComp > 0) {
			stackPush(pstack, first);
			stackPush(pstack, second);
			stackPush(pstack, next);
		}
		else {
			stackPush(pstack, first);
			stackPush(pstack, next);
			if (stackSize(pstack) == 2)
				continue;
			while (1) {
				next = stackPop(pstack);
				second = stackPop(pstack);
				first = stackPop(pstack);
				ccwComp = ccw(first, second, next);
				if (ccwComp > 0) {
					stackPush(pstack, first);
					stackPush(pstack, second);
					stackPush(pstack, next);
					break;
				}
				else {
					stackPush(pstack, first);
					stackPush(pstack, next);
				}
			}
		}
	}

	while (stackSize(pstack) > 3) {
		next = stackBottom(pstack);
		second = stackPop(pstack);
		first = stackPop(pstack);
		long ccwComp = ccw(first, second, next);
		if (ccwComp > 0) {
			stackPush(pstack, first);
			stackPush(pstack, second);
			break;
		}
		else {
			stackPush(pstack, first);
		}
	}

	return stackSize(pstack);
}

// 스택 구현
void stack_init(stack *pstack) {
	pstack->top = NULL;
}

int stackIsEmpty(stack *pstack) {
	return pstack->top == NULL;
}

void stackPush(stack *pstack, point data) {
	node *now = (node*)malloc(sizeof(node));
	now->value = data;
	now->next = pstack->top;
	pstack->top = now;
}

point stackPop(stack *pstack) {
	node *now;
	point ret;
	if (stackIsEmpty(pstack) == 1) {
		printf("memory error!");
		exit(-1);
	}
	now = pstack->top;
	ret = now->value;

	pstack->top = now->next;
	free(now);
	return ret;
}

point stackBottom(stack *pstack) {
	node* now = pstack->top;
	
	while (now->next != NULL)
		now = now->next;

	return now->value;
}

int stackSize(stack *pstack) {
	int ret = 1;
	node* now = pstack->top;

	if (now == NULL)
		return 0;

	while (now->next != NULL) {
		ret++;
		now = now->next;
	}

	return ret;
}

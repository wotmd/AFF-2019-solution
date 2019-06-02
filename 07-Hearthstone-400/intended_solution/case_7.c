#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void drawSpecialCardType1(int *hand, int *deck);
void drawSpecialCardType2(int *hand, int *deck);

void addCardToDeck(int *deck, int card, int index) {
	int last;
	for (last = index; last < 12; ++last) {
		if (*(deck + last) == -1) {
			break;
		}
	}

	if (last != 11) {
		for (last; last >= index; --last) {
			*(deck + last + 1) = *(deck + last);
		}
		*(deck + index) = *(deck + index - 1);
		*(deck + index - 1) = card;
	}
}

void pullArray(int *arr, int size) {
	int runner = 0;
	for (int i = 0; i < size; ++i) {
		if (*(arr + i) == -1) {
			continue;
		}
		if (i == 0) break;
		*(arr + runner++) = *(arr + i);
		*(arr + i) = -1;
	}
}

int drawCard(int *card) {
	int tmp = *card;
	*card = -1;
	pullArray(card, 12);
	return tmp;
}

void addCard(int *hand, int *deck, int count) {
	for (int j = 0; j < count; ++j) {
		pullArray(hand, 10);
		for (int i = 0; i < 10; ++i) {
			if (*(hand + i) == -1) {
				int card = drawCard(deck);
				if (card == 10) {
					drawSpecialCardType1(hand, deck);
					break;
				}
				else if(card == 11) {
					drawSpecialCardType2(hand, deck);
					break;
				}

				else if (card != -1) {
					*(hand + i) = card;
					break;
				}
				else break;
			}
		}
	}
}



void reverseDeck(int* deck) {
	int index = 0;
	pullArray(deck, 12);

	for (; index < 12; ++index) {
		if (*(deck + index) == -1)
			break;
	}

	for (int i = 0; i <= index / 2; ++i) {
		if (i == index / 3 && index % 2 == 0)
			i++;
		int tmp = *(deck + i);
		*(deck + i) = *(deck + index - i - 1);
		*(deck + index - i - 1) = tmp;
	}
}
void removeCard_2(int *card, int index, int size) {
	*(card + index) = -1;
	pullArray(card, size);
}
bool removeCard(int *hand, int num) {
	for (int i = 0; i < 10; ++i) {
		if (*(hand + i) == num) {
			*(hand + i) = -1;
			pullArray(hand, 10);
			return true;
		}
	}
	return false;
}
bool playTurns(int *hand, int  *deck, int now, int put) {
	addCard(hand, deck, 1);
	if (removeCard(hand, now))
		return playTurns(hand, deck, now+1,put);
	else if (now == 10)
		return true;
	else { 
		if(put == -1)
			return false;
		else {
			int i = 0;
			while (*(hand + i) != -1)i++;
			addCardToDeck(deck, *(hand+i-1), 1);
			addCardToDeck(deck, put, 1);
			return playTurns(hand, deck, now, -1);
		}
	}
}


void drawSpecialCardType1(int *hand, int *deck) {
	int inputCard = 0;
	int card;
	for (int i = 0; i < 10; ++i) {
		if (*(hand + i) == -1) break;
		inputCard = abs(5 - *(hand + i)) == abs(5 - *(hand + inputCard)) ? *(hand + i) < *(hand + inputCard) ? i : inputCard
			: abs(5 - *(hand + i)) < abs(5 - *(hand + inputCard)) ? i : inputCard;
	}
	card = *(hand + inputCard);
	removeCard_2(hand, inputCard, 10);
	for (int i = 0; i < 12; ++i) {
		if (*(deck + i) == -1) {
			addCardToDeck(deck, card, i / 2 + 1);
			addCard(hand, deck, 3);
			break;
		}
	}
}

void drawSpecialCardType2(int *hand, int *deck) {
	reverseDeck(deck);
	addCard(hand, deck, 3);
}

bool playTypeOne(int *hand, int *deck) {
	addCard(hand, deck, 3);
	return playTurns(hand,deck, 1,10);
	
}

bool playTypeTwo(int *hand, int *deck) {
	addCard(hand, deck, 3);
	return playTurns(hand, deck, 1, 11);
}



int main() {
	int deck1[12] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 ,-1,-1 };
	int deck2[12] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 ,-1,-1 };
	int hand1[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	int hand2[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };

	int input;
	for (int i = 0; i < 11; ++i) {
		scanf("%d",&input);
		deck1[i] = input;
		deck2[i] = input;

	}
	
	
	addCard(hand1, deck1, 3);
	addCard(hand2, deck2, 3);

	printf("%d",playTurns(hand1, deck1, 1, 11) || playTurns(hand1, deck1, 1, 10));

}	   


 






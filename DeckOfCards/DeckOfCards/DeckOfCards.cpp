// DeckOfCards.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "Card.h"

using namespace std;

int main()
{
	Card mycard(10, Suit::DIAMONDS);
	cout << mycard.toString() << endl;

	cin.get();
    return 0;
}


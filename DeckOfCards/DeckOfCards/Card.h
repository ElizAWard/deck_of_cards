#pragma once
#ifndef CARD_H
#define CARD_H

#include <string>
#include "Suit.h"


// Card class declaration

class Card
{
private:
	Suit mSuit;
	int mValue;
public:
	Card(int, Suit);
	void setSuit(Suit);
	void setValue(int);
	std::string getSuitName() const;
	std::string toString() const;

	Suit getSuit() const
	{
		return mSuit;
	}

	int getValue() const
	{
		return mValue;
	}

	

	
	
};
#endif // !CARD_H

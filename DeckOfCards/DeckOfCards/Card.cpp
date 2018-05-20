#include "Card.h"

using namespace std;

/*
 * Public constructor for Card
 */
Card::Card(int value, Suit suit)
{
	mValue = value;
	mSuit = suit;
}

/*
 * Sets the Suit of the Card
 */
void Card::setSuit(Suit suit)
{
	mSuit = suit;
}

/*
 * Sets the numerical value of the Card
 */
void Card::setValue(int value)
{
	mValue = value;
}

string Card::getSuitName() const
{
	std::string name = "";
	switch (mSuit)
	{
	case(HEARTS):
		name = "Hearts";
		break;
	case(SPADES):
		name = "Spades";
		break;
	case(DIAMONDS):
		name = "Diamonds";
		break;
	case(CLUBS):
		name = "Clubs";
		break;
	}

	return name;
}

string Card::toString() const
{
	return std::to_string(mValue) + " of " + getSuitName();
}
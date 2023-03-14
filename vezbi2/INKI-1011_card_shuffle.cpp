#include <iostream>
#include <vector>
#include <algorithm>

//Klasa za karta koja sodrzi broj i tip(list,detelina...)
class Card {
	public :
		std::string suit;
		std::string number;
		Card();
		Card(std::string s, std::string num);

};

Card::Card() {

}

Card::Card(const std::string s,const std::string num) : suit(s),number(num){
}


//Klasa koja go sodrzi spilot karti
class Deck : public Card{
	std::vector<Card> *deckOfCards;
	const std::string SUITS[4] = {"CLUBS","DIMOND","HEARTS","SPADES"};
	const std::string TYPE[13] = {"ACE","2","3","4","5","6","7","8","9","10","JOKER","QUEEN","KING"};
	public:
	Deck();
	void show();
	void shuffle();
	~Deck();
};

// Konstruktor za kreiranje na spil karti
Deck::Deck() {
	deckOfCards = new std::vector<Card>();
	deckOfCards->reserve(52);
	for(int i = 0 ; i < 4 ; ++i)
		for(int j = 0 ; j < 13 ; ++j)
			deckOfCards->emplace_back(Card(SUITS[i],TYPE[j]));
}

//Funkcija za prikazuvanje karta
void Deck::show() {
	std::string showCard("");
	auto it = deckOfCards->begin();
	while (it != deckOfCards->end()) {
		showCard.append((it->suit));
		showCard.append(" of ");
		showCard.append((it->number));
		showCard.append("\n");
		it = std::next(it);
	}
	std::cout << showCard <<std::endl;

}

//Funkcija za mesanje na kartite
void Deck::shuffle() {
	srand(time(NULL));
	std::random_shuffle(deckOfCards->begin(),deckOfCards->end());
}

//Destruktor
Deck::~Deck() {
	delete deckOfCards;
}


int main() {
	Deck d;
	std::cout << "Initial: " << std::endl;
	d.show();
	std::cout << "Shuffling....: " << std::endl;
	d.shuffle();
	std::cout << "After: " << std::endl;
	d.show();
}

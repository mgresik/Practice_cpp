#include <iostream>
#include <array>
#include <algorithm>
#include <ctime> // для time()
#include <cstdlib> // для rand() и srand()
#include "info.hpp"

void printCard(const Card &card)
{
   switch (card.type)
   {
   case two:          std::cout << "2"; break;
   case tree:         std::cout << "3"; break;
   case vour:         std::cout << "4"; break;
   case five:         std::cout << "5"; break;
   case six:          std::cout << "6"; break;
   case seven:        std::cout << "7"; break;
   case eight:        std::cout << "8"; break;
   case nine:         std::cout << "9"; break;
   case then:         std::cout << "10"; break;
   case valet:        std::cout << "V"; break;
   case ledy:         std::cout << "D"; break;
   case king:         std::cout << "K"; break;
   case tuz:          std::cout << "T"; break;
   
   } 

   switch (card.mast)
   {
   case trefs:        std::cout << "TR"; break;
   case bubns:        std::cout << "BN"; break;
   case chervi:       std::cout << "CH"; break;
   case piki:         std::cout << "PI"; break;
   }
};

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
 	// Равномерно распределяем генерацию случайного числа в диапазоне значений
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void printDeck(const std::array<Card, 52> &deck)
{
   for(const auto &card : deck)
   {
      printCard(card);
      std::cout << " ";
   }
   std::cout << "\n";
}

void swapCard(Card &a, Card &b)
{
   Card temp = a;
   a = b;
   b = temp;
}

void schuffleDeck(std::array<Card, 52> &deck)
{
   for (int index = 0; index < 52; index++)
   {
      int swapIndex = getRandomNumber(0, 51);
      swapCard(deck[index], deck[swapIndex]);
   }
   
}

int getCardValue(const Card &card)
{
   switch (card.type)
   {
   case two:          std::cout << "2"; break;
   case tree:         std::cout << "3"; break;
   case vour:         std::cout << "4"; break;
   case five:         std::cout << "5"; break;
   case six:          std::cout << "6"; break;
   case seven:        std::cout << "7"; break;
   case eight:        std::cout << "8"; break;
   case nine:         std::cout << "9"; break;
   case then:         std::cout << "10"; break;
   case valet:        std::cout << "10"; break;
   case ledy:         std::cout << "10"; break;
   case king:         std::cout << "10"; break;
   case tuz:          std::cout << "11"; break;
   }
}

int main()
{
   srand(static_cast<unsigned int>(time(0)));
   rand();
   std::array<Card, 52> deck;
   int card = 0;
   for (int mast = 0; mast < all_masti; mast++)
   for (int type = 0; type < all_types; type++)
   {
      deck[card].mast = static_cast<mastis>(mast);
      deck[card].type = static_cast<types>(type);
      card++;
   }
   
   printDeck(deck);

   schuffleDeck(deck);

   printDeck(deck);
   
   return 0;
}
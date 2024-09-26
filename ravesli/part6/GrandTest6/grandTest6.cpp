#include <iostream>
#include <array>
#include <algorithm>
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

void printDeck(const std::array<Card, 52> &deck)
{
   for(const auto &card : deck)
   {
      printCard(card);
      std::cout << " ";
   }
   std::cout << "\n";
}

int main()
{
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
   
   
   return 0;
}
using System;

namespace ArraysReview
{
  class Program
  {
    static void Main(string[] args)
    {

      /*Generates an array of random playing Card names in string form/ 1-10, J, Q, K*/

      //number of cards to generate
      int numberOfCards = 14;
      string[] cardNames;
      string[] randomCardArray;
      string[] cardSuits;

      //array of all possible CardSuits and all possible CardNames
      cardSuits = new string[] {"S", "H", "C", "D"};
      cardNames = new string[] {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
      //initializes the array w/ amount of cards we will generate (in this case, 14)
      randomCardArray = new string[numberOfCards];

    /*create a random number from 0-12* (cardnames length) 
      and 0-3* (cardSuits lengths)
      Generate random number/jqk & Concatenate w/ suitname for each slot in randomCardArray!
    */
    for (int i = 0; i < numberOfCards; i++){
      Random rand = new Random();
      int randCardArrayNum = rand.Next(0,cardNames.Length);
      int randSuitArrayNum = rand.Next(0, cardSuits.Length);
      randomCardArray[i] = cardNames[randCardArrayNum] + cardSuits[randSuitArrayNum];
    }
    
    //prints random cards :)
    foreach (card in randomCardArray){
        Console.WriteLine(card);
    }
    }
  }
}
import random

class Card:

    def __init__(self, suit, value):
        self.suit = suit
        self.value = value

    def __repr__(self):
        # String representation of the card
        rep = str(self.value) + " of " + self.suit
        return rep

class Deck:

    def __init__(self):
        # Attributes of a deck
        self.deck = []
        self.suits = ["Hearts", "Diamonds", "Clubs", "Spades"]
        self.face = ["J", "Q", "K"]

        # Add each card value of each card suit to the deck
        for i in self.suits:
            self.deck.append(Card(i, "A"))
            for j in range(2, 11):
                self.deck.append(Card(i, j))
            for k in self.face:
                self.deck.append(Card(i, k))

    def __repr__(self):
        # String representation of the deck (how many cards remain in the deck)
        rep = "Cards remaining in deck: " + str(len(self.deck))
        return rep

    def shuffle(self):
        # Shuffles the deck
        random.shuffle(self.deck)

    def deal(self):
        # Returns the top card of the deck
        card = self.deck.pop()
        return card

d1 = Deck()
d1.shuffle()
print(d1.deal())
print(d1.deal())
print(d1)
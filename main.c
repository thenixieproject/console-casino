#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* TODO: Blackjack
 * Dealer must hit on soft 17
 * Blackjack pays 3:2
 *
 * Poker payouts
 * Four of a Kind 5:1
 * Full House 4:1
 * Three of a Kind 3:1
 * Two Pair 2:1
 * Pair 1:1
 */
// Global Constants
const int FIVE_CARD_HAND_SIZE = 5;

// Global Variables
int money = 1000; // How many credits the player has
int playerBet; // How many credits the player has bet currently
int cardMin = 1; // Minimum number for determining the value of a card
int cardMax = 10; // Maximum number for determining the value of a card
int currentCard;

// Function Prototypes
int dealNewCard();
int getPlayerBet();

// Driver Functions
int main(void) {
    srand(time(NULL)); // RNG Seed
    // Local Variables
    int mainMenu = 0;

    // Game Loop
    do {
        // Main menu prompt
        printf("1) Blackjack \n 2) Five Card Poker \n 3) Exit \n Please make a selection: ");
        scanf("%d", &mainMenu);

        // Main Menu Switch
        switch (mainMenu)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                printf("Invalid input. Please try again.");
                break;
        }
    } while (mainMenu != 3 || money <= 0);

    return 0;
}

// Function Definitions
/**
 * Creates a new card with a value between 1 and 10
 * @return - The value of the card to be dealt.
 */
int dealNewCard() {
    return (rand() % (cardMax - cardMin + 1)) + cardMin;
}

/**
 * Prompts to collect a bet from the player
 * @return - The bet amount
 */
int getPlayerBet() {
    int currentBet;
    do {
        printf("Place your bets please (enter 0 to exit): ");
        scanf("%d", &currentBet);
    } while (currentBet < 0 || currentBet > money);

    return currentBet;
}
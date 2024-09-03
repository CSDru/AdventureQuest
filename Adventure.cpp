//
// Created by Dru on 9/2/2024.
//

#include "Adventure.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

bool Adventure::explore()
{
    std::srand(static_cast<unsigned int>(std::time(0)));

    int chance = std::rand() % 100 + 1;

    if(chance == 1)
    {
        player + Item("The One Piece");
        std::cout << "AYO NO WAY YOU FOUND THE ONE PIECE!!!! CONGRATS!!!" << std::endl;
        std::cout << "I hope you enjoyed the game, but truth be told that's all I got for ya! Have a good one!" << std::endl;
        return true;

    } else {
        std::string foundItem;
        std::cout << "You found a Pokemon!! What would you like to name the cute little fella?" << std::endl;
        std::cin.ignore();
        std::getline(std::cin, foundItem);

        player + Item(foundItem);
        return false;
    }
}

void Adventure::start()
{
    std::cout << "Welcome to Dave's Bizarre Adventures!" << std::endl;
    std::cout << "Today, YOU, thats right, YOU RIGTH THERE, get to be THE DAVE SMITH!!\nI COULD tell you what this is all about, BUTTTTT it's more fun if I don't." << std::endl;
    std::cout << "GLHF! Your Adventure Begins, well NOW!! GO, GO, GO!!!";

    std::string choice;
    bool foundOnePiece = false;

    while(true)
    {
        std::cout << "\nChoose an action:\n(1) Explore\n(2) Inventory\n(3) Drop Creature\n(4) Quit" << std::endl;
        std::cin >> choice;

        if (choice == "1" && !foundOnePiece)
            foundOnePiece = explore();
        else if (choice == "1")
            std::cout << "Sorry Dave, no more exploring for you! You already found the greatest treasure there is!" << std::endl;
        else if (choice == "2")
            player.showInventory();
        else if (choice == "3")
            player.dropItem();
        else if (choice == "4" && foundOnePiece)
        {
            std::cout << "Thanks for playing!" << std::endl;
            break;
        }
        else if (choice == "4")
        {
            std::string newChoice;

            std::cout << "99% of ALL DAVES quit JUST before they find THE ONE PIECE! Are you SUREEEE you want to stop now??" << std::endl;
            std::cout << "Type: 'Yes, I am a loser' or 'THE ONE PIECE IS MINE!!'" << std::endl;
            std::cin.ignore();
            std::getline(std::cin, newChoice);
            if (newChoice == "Yes, I am a loser") {
                std::cout << "lame. Later I guess." << std::endl;
                break;
            } else if (newChoice == "THE ONE PIECE IS MINE!!")
                std::cout << "THAT'S THE SPIRIT!!" << std::endl;
            else {
                std::cout
                        << "Can you read?? I said PICK ONE OF THOSE TWO OPTIONS. You know what, someone who can't read doesn't deserve the One Piece. You're done." << std::endl;
                break;
            }
        }
    }
}

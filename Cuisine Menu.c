#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void displayMenu();
void displayIngredients(int dish, int people);
void displayRecipe(int dish);
void clearScreen();
int getDishChoice();
int getPeopleCount();

int main() {
    int choice, people;
    char continueChoice;
    
    printf("==========================================\n");
    printf("   BANGLADESHI CUISINE MENU SYSTEM\n");
    printf("==========================================\n");
    printf("   Rajshahi University of Engineering\n");
    printf("        & Technology - RUET\n");
    printf("   Department of Mechatronics Engineering\n");
    printf("==========================================\n\n");
    
    do {
        displayMenu();
        choice = getDishChoice();
        
        if (choice == 0) {
            printf("\nThank you for using Cuisine Menu System!\n");
            printf("==========================================\n");
            break;
        }
        
        people = getPeopleCount();
        
        printf("\n==========================================\n");
        printf("           RECIPE DETAILS\n");
        printf("==========================================\n");
        
        displayIngredients(choice, people);
        displayRecipe(choice);
        
        printf("\n==========================================\n");
        printf("Do you want to prepare another dish? (y/n): ");
        scanf(" %c", &continueChoice);
        
        if (continueChoice == 'y' || continueChoice == 'Y') {
            clearScreen();
        }
        
    } while (continueChoice == 'y' || continueChoice == 'Y');
    
    return 0;
}

void displayMenu() {
    printf("\n==========================================\n");
    printf("        BANGLADESHI CUISINE MENU\n");
    printf("==========================================\n");
    printf("1. Rice (Bhat)\n");
    printf("2. Fish Curry (Maach Bhuna)\n");
    printf("3. Chicken Curry (Murgi Torkari)\n");
    printf("4. Lentil Curry (Dal)\n");
    printf("5. Vegetable Curry (Sabji)\n");
    printf("6. Biriani\n");
    printf("7. Hilsa Fish Curry (Ilish Maach)\n");
    printf("8. Beef Curry (Gorur Mangsho)\n");
    printf("0. Exit\n");
    printf("==========================================\n");
}

int getDishChoice() {
    int choice;
    printf("Enter your choice (0-8): ");
    scanf("%d", &choice);
    
    while (choice < 0 || choice > 8) {
        printf("Invalid choice! Please enter a number between 0-8: ");
        scanf("%d", &choice);
    }
    
    return choice;
}

int getPeopleCount() {
    int people;
    printf("Enter number of people to serve: ");
    scanf("%d", &people);
    
    while (people <= 0) {
        printf("Invalid input! Please enter a positive number: ");
        scanf("%d", &people);
    }
    
    return people;
}

void displayIngredients(int dish, int people) {
    printf("\nINGREDIENTS FOR %d PEOPLE:\n", people);
    printf("------------------------------------------\n");
    
    switch (dish) {
        case 1: // Rice
            printf("- Rice: %d cups\n", people);
            printf("- Water: %d cups\n", people * 2);
            printf("- Salt: %d tsp\n", people / 2 + 1);
            printf("- Oil: %d tbsp\n", people / 2 + 1);
            break;
            
        case 2: // Fish Curry
            printf("- Fish: %d pieces\n", people * 2);
            printf("- Onion: %d medium\n", people / 2 + 1);
            printf("- Garlic: %d cloves\n", people * 2);
            printf("- Ginger: %d inch piece\n", people);
            printf("- Turmeric powder: %d tsp\n", people / 2 + 1);
            printf("- Red chili powder: %d tsp\n", people / 2 + 1);
            printf("- Coriander powder: %d tsp\n", people);
            printf("- Oil: %d tbsp\n", people * 2);
            printf("- Salt: to taste\n");
            break;
            
        case 3: // Chicken Curry
            printf("- Chicken: %d kg\n", people / 2 + 1);
            printf("- Onion: %d large\n", people / 2 + 1);
            printf("- Garlic-Ginger paste: %d tbsp\n", people);
            printf("- Yogurt: %d cup\n", people / 2 + 1);
            printf("- Turmeric powder: %d tsp\n", people / 2 + 1);
            printf("- Red chili powder: %d tsp\n", people);
            printf("- Garam masala: %d tsp\n", people / 2 + 1);
            printf("- Oil: %d tbsp\n", people * 2);
            printf("- Salt: to taste\n");
            break;
            
        case 4: // Lentil Curry
            printf("- Lentils (Masoor/Moong): %d cup\n", people / 2 + 1);
            printf("- Onion: %d medium\n", people / 2 + 1);
            printf("- Garlic: %d cloves\n", people);
            printf("- Turmeric powder: %d tsp\n", people / 2 + 1);
            printf("- Cumin seeds: %d tsp\n", people / 2 + 1);
            printf("- Green chilies: %d pieces\n", people);
            printf("- Oil: %d tbsp\n", people);
            printf("- Salt: to taste\n");
            break;
            
        case 5: // Vegetable Curry
            printf("- Mixed vegetables: %d cups\n", people * 2);
            printf("- Onion: %d medium\n", people / 2 + 1);
            printf("- Garlic: %d cloves\n", people);
            printf("- Ginger: %d inch piece\n", people / 2 + 1);
            printf("- Turmeric powder: %d tsp\n", people / 2 + 1);
            printf("- Cumin powder: %d tsp\n", people / 2 + 1);
            printf("- Oil: %d tbsp\n", people);
            printf("- Salt: to taste\n");
            break;
            
        case 6: // Biriani
            printf("- Basmati rice: %d cups\n", people);
            printf("- Chicken/Mutton: %d kg\n", people / 2 + 1);
            printf("- Onion: %d large\n", people);
            printf("- Yogurt: %d cup\n", people / 2 + 1);
            printf("- Garlic-Ginger paste: %d tbsp\n", people);
            printf("- Biriani masala: %d tbsp\n", people / 2 + 1);
            printf("- Saffron: %d pinch\n", people / 2 + 1);
            printf("- Ghee: %d tbsp\n", people * 2);
            printf("- Salt: to taste\n");
            break;
            
        case 7: // Hilsa Fish Curry
            printf("- Hilsa fish: %d pieces\n", people);
            printf("- Mustard seeds: %d tsp\n", people / 2 + 1);
            printf("- Mustard oil: %d tbsp\n", people * 2);
            printf("- Onion: %d medium\n", people / 2 + 1);
            printf("- Green chilies: %d pieces\n", people * 2);
            printf("- Turmeric powder: %d tsp\n", people / 2 + 1);
            printf("- Nigella seeds: %d tsp\n", people / 2 + 1);
            printf("- Salt: to taste\n");
            break;
            
        case 8: // Beef Curry
            printf("- Beef: %d kg\n", people / 2 + 1);
            printf("- Onion: %d large\n", people);
            printf("- Garlic-Ginger paste: %d tbsp\n", people);
            printf("- Yogurt: %d cup\n", people / 2 + 1);
            printf("- Red chili powder: %d tsp\n", people);
            printf("- Coriander powder: %d tsp\n", people);
            printf("- Garam masala: %d tsp\n", people / 2 + 1);
            printf("- Oil: %d tbsp\n", people * 2);
            printf("- Salt: to taste\n");
            break;
    }
}

void displayRecipe(int dish) {
    printf("\nRECIPE INSTRUCTIONS:\n");
    printf("------------------------------------------\n");
    
    switch (dish) {
        case 1: // Rice
            printf("1. Wash rice thoroughly until water runs clear\n");
            printf("2. Boil water with salt and oil\n");
            printf("3. Add rice to boiling water\n");
            printf("4. Cook until rice is tender (15-20 minutes)\n");
            printf("5. Drain and serve hot\n");
            break;
            
        case 2: // Fish Curry
            printf("1. Clean and cut fish into pieces\n");
            printf("2. Marinate fish with turmeric and salt\n");
            printf("3. Heat oil and fry fish lightly, set aside\n");
            printf("4. In same oil, fry onions until golden\n");
            printf("5. Add garlic-ginger paste and spices\n");
            printf("6. Add water and bring to boil\n");
            printf("7. Add fried fish and simmer for 10 minutes\n");
            printf("8. Garnish with fresh coriander and serve\n");
            break;
            
        case 3: // Chicken Curry
            printf("1. Cut chicken into medium pieces\n");
            printf("2. Marinate with yogurt, turmeric, and salt\n");
            printf("3. Heat oil and fry onions until golden\n");
            printf("4. Add garlic-ginger paste and cook\n");
            printf("5. Add marinated chicken and cook\n");
            printf("6. Add spices and cook until tender\n");
            printf("7. Add water if needed and simmer\n");
            printf("8. Garnish with garam masala and serve\n");
            break;
            
        case 4: // Lentil Curry
            printf("1. Wash and soak lentils for 30 minutes\n");
            printf("2. Boil lentils with turmeric until soft\n");
            printf("3. Heat oil and add cumin seeds\n");
            printf("4. Add onions and fry until golden\n");
            printf("5. Add garlic and green chilies\n");
            printf("6. Add cooked lentils and mix well\n");
            printf("7. Simmer for 5-10 minutes\n");
            printf("8. Garnish with fresh coriander and serve\n");
            break;
            
        case 5: // Vegetable Curry
            printf("1. Cut vegetables into medium pieces\n");
            printf("2. Heat oil and add cumin seeds\n");
            printf("3. Add onions and fry until golden\n");
            printf("4. Add garlic-ginger paste\n");
            printf("5. Add vegetables and spices\n");
            printf("6. Cook covered until vegetables are tender\n");
            printf("7. Add water if needed\n");
            printf("8. Garnish and serve hot\n");
            break;
            
        case 6: // Biriani
            printf("1. Soak basmati rice for 30 minutes\n");
            printf("2. Marinate meat with yogurt and spices\n");
            printf("3. Cook meat until 70%% done\n");
            printf("4. Boil rice with whole spices until 70%% done\n");
            printf("5. Layer rice and meat alternately\n");
            printf("6. Sprinkle saffron soaked in warm milk\n");
            printf("7. Cover and cook on low heat (Dum)\n");
            printf("8. Serve hot with raita and shorba\n");
            break;
            
        case 7: // Hilsa Fish Curry
            printf("1. Clean hilsa fish and cut into pieces\n");
            printf("2. Marinate with turmeric and salt\n");
            printf("3. Heat mustard oil until smoking\n");
            printf("4. Fry fish lightly and set aside\n");
            printf("5. In same oil, add nigella seeds\n");
            printf("6. Add onions and green chilies\n");
            printf("7. Add mustard paste and cook\n");
            printf("8. Add fish and simmer gently\n");
            printf("9. Serve with steamed rice\n");
            break;
            
        case 8: // Beef Curry
            printf("1. Cut beef into medium cubes\n");
            printf("2. Marinate with yogurt, turmeric, and salt\n");
            printf("3. Heat oil and fry onions until dark golden\n");
            printf("4. Add garlic-ginger paste and cook\n");
            printf("5. Add marinated beef and cook on high heat\n");
            printf("6. Add spices and cook until meat is tender\n");
            printf("7. Add water if needed and simmer\n");
            printf("8. Cook until beef is completely tender\n");
            printf("9. Garnish with garam masala and serve\n");
            break;
    }
}

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
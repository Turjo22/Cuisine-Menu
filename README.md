# Cuisine-Menu
C-based recipe app with 8 traditional Bangladeshi dishes. Dynamic ingredient calculation based on serving size. Menu-driven interface for Fish Curry, Biriani, Chicken Curry &amp; more.

================================================================================
                    BANGLADESHI CUISINE MENU SYSTEM
================================================================================

OVERVIEW
--------
The Bangladeshi Cuisine Menu System is a command-line application that provides 
recipes and ingredient calculations for traditional Bangladeshi dishes. The 
program offers an interactive menu system with 8 authentic dishes and dynamically 
calculates ingredient quantities based on serving size.

SYSTEM REQUIREMENTS
-------------------
- C Compiler (GCC, Clang, or MSVC)
- Operating System: Windows, Linux, or macOS
- Memory: 1MB RAM minimum
- Storage: 50KB disk space

INSTALLATION
------------
Compilation:
    gcc -o cuisine_menu cuisine_menu.c

Execution:
    ./cuisine_menu

USAGE
-----
Basic Operation:
1. Launch the application: ./cuisine_menu
2. Select a dish from the main menu (1-8)
3. Specify serving size (number of people)
4. Review ingredients with calculated quantities
5. Follow cooking instructions provided
6. Continue or exit as needed

MENU OPTIONS
------------
Option | Dish Name                    | Description
-------|------------------------------|------------------------------------
1      | Rice (Bhat)                  | Traditional steamed rice
2      | Fish Curry (Maach Bhuna)     | Spicy fish curry with aromatic spices
3      | Chicken Curry (Murgi Torkari)| Rich chicken curry with traditional spices
4      | Lentil Curry (Dal)           | Nutritious lentil soup preparation
5      | Vegetable Curry (Sabji)      | Mixed vegetable curry
6      | Biriani                      | Fragrant rice dish with meat and spices
7      | Hilsa Fish Curry (Ilish)     | Traditional Bengali hilsa preparation
8      | Beef Curry (Gorur Mangsho)   | Tender beef curry with rich gravy
0      | Exit                         | Terminate the application

INPUT FORMAT
------------
Dish Selection:
- Enter integer value (0-8)
- Invalid inputs will prompt for re-entry

Serving Size:
- Enter positive integer (1 or greater)
- Ingredients automatically scale proportionally

Continue Prompt:
- Enter 'y' or 'Y' to prepare another dish
- Enter 'n' or 'N' to exit application

OUTPUT FORMAT
-------------
Ingredient List:
    INGREDIENTS FOR [N] PEOPLE:
    ------------------------------------------
    - [Ingredient]: [Quantity] [Unit]
    - [Ingredient]: [Quantity] [Unit]
    ...

Recipe Instructions:
    RECIPE INSTRUCTIONS:
    ------------------------------------------
    1. [Step 1 description]
    2. [Step 2 description]
    ...

FEATURES
--------
- Dynamic Scaling: Ingredient quantities automatically adjust based on serving size
- Input Validation: Robust error handling for invalid inputs
- User-Friendly Interface: Clear menu system with formatted output
- Authentic Recipes: Traditional Bangladeshi cooking methods and ingredients
- Continuous Operation: Prepare multiple dishes without restarting
- Cross-Platform: Compatible with Windows, Linux, and macOS

ERROR HANDLING
--------------
The application handles the following error conditions:
- Invalid menu selections (non-numeric or out-of-range)
- Invalid serving sizes (negative numbers or zero)
- Non-alphabetic responses to continue prompt

EXAMPLE SESSION
---------------
$ ./cuisine_menu

==========================================
   BANGLADESHI CUISINE MENU SYSTEM
==========================================

==========================================
        BANGLADESHI CUISINE MENU
==========================================
1. Rice (Bhat)
2. Fish Curry (Maach Bhuna)
3. Chicken Curry (Murgi Torkari)
4. Lentil Curry (Dal)
5. Vegetable Curry (Sabji)
6. Biriani
7. Hilsa Fish Curry (Ilish Maach)
8. Beef Curry (Gorur Mangsho)
0. Exit
==========================================
Enter your choice (0-8): 3
Enter number of people to serve: 2

==========================================
           RECIPE DETAILS
==========================================

INGREDIENTS FOR 2 PEOPLE:
------------------------------------------
- Chicken: 1 kg
- Onion: 1 large
- Garlic-Ginger paste: 2 tbsp
- Yogurt: 1 cup
- Turmeric powder: 1 tsp
- Red chili powder: 2 tsp
- Garam masala: 1 tsp
- Oil: 4 tbsp
- Salt: to taste

RECIPE INSTRUCTIONS:
------------------------------------------
1. Cut chicken into medium pieces
2. Marinate with yogurt, turmeric, and salt
3. Heat oil and fry onions until golden
4. Add garlic-ginger paste and cook
5. Add marinated chicken and cook
6. Add spices and cook until tender
7. Add water if needed and simmer
8. Garnish with garam masala and serve

==========================================
Do you want to prepare another dish? (y/n): n

Thank you for using Cuisine Menu System!
==========================================

TECHNICAL SPECIFICATIONS
------------------------
- Language: C (C99 standard)
- Memory Usage: < 1MB
- Execution Time: < 1 second per operation
- File Size: ~15KB (compiled binary)

KNOWN LIMITATIONS
-----------------
- Text-based interface only
- No persistent storage of user preferences
- Limited to 8 predefined dishes
- No ingredient substitution suggestions


================================================================================
                              END OF DOCUMENT
================================================================================

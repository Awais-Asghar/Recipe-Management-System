# Recipe Management System in C++ 

## Overview

Welcome to the Recipe Management System in C++. This project is a simple console application designed to help you manage recipes by adding ingredients and cooking instructions, and displaying the recipe details. This README will guide you through the code, explaining the core concepts and providing instructions on how to set up and run the program.

## Prerequisites

Before you begin, ensure you have the following:
- Basic understanding of C++ programming
- A C++ compiler installed on your system (e.g., g++)

## Core Concepts

This project demonstrates several key concepts in C++ programming:
1. **Classes and Objects**
2. **Encapsulation**
3. **Constructors**
4. **Arrays of Objects**
5. **User Input Handling**

## Code Explanation

The code consists of two primary classes, `Ingredient` and `Recipe`, each with specific attributes and methods to manage recipes.

### Class: `Ingredient`

The `Ingredient` class represents an ingredient with its name, quantity, and unit.

#### Members:
- `name`: Name of the ingredient (string)
- `quantity`: Quantity of the ingredient (double)
- `unit`: Unit of measurement (string)

#### Constructors:
- Default constructor initializing empty values.
- Parameterized constructor to initialize with specific values.

### Class: `Recipe`

The `Recipe` class manages a recipe by holding ingredients and cooking instructions.

#### Members:
- `recipeName`: Name of the recipe (string)
- `ingr`: Array to hold up to 10 ingredients (Ingredient)
- `cookingInstructions`: Array to hold up to 10 cooking instructions (string)
- `numIngredients`: Counter for the number of ingredients added (int)
- `numInstructions`: Counter for the number of instructions added (int)

#### Methods:
- `Recipe(string)`: Constructor to initialize the recipe with a name.
- `addIngredient(string, double, string)`: Adds an ingredient to the recipe.
- `addCookingInstruction(string)`: Adds a cooking instruction to the recipe.
- `displayRecipeDetails()`: Displays the details of the recipe including ingredients and instructions.

### Main Program

The main program provides a menu-driven interface for users to interact with the Recipe Management System.

#### Menu Options:
1. Create a new recipe
2. Add ingredients to the recipe
3. Add cooking instructions to the recipe
4. Display recipe details
5. Exit

## Compilation and Execution

To compile and run the program, follow these steps:

1. Save the code to a file named `RecipeManagementSystem.cpp`.
2. Open a terminal or command prompt.
3. Navigate to the directory containing the file.
4. Compile the code using the following command:
   ```sh
   g++ -o RecipeManagementSystem RecipeManagementSystem.cpp
   ```
5. Run the compiled program:
   ```sh
   ./RecipeManagementSystem
   ```

## Usage Instructions

Once the program is running, you will see a menu with the following options:

1. **Create a new recipe**: Allows you to create a new recipe by entering the recipe name. This option is only available once initially.
2. **Add ingredients to the recipe**: Allows you to add ingredients by specifying the ingredient name, quantity, and unit. You can add up to 10 ingredients.
3. **Add cooking instructions to the recipe**: Allows you to add cooking instructions one by one. You can add up to 10 instructions.
4. **Display recipe details**: Displays the current recipe's name, ingredients, and cooking instructions.
5. **Exit**: Exits the program.

## Example Usage

### Creating a Recipe

```
Enter your choice: 1
Enter the name of the recipe: Pancakes
Recipe created successfully!
```

### Adding Ingredients

```
Enter your choice: 2
Enter ingredient name: Flour
Enter quantity: 2
Enter unit: cups
Ingredient added to the recipe.
```

### Adding Cooking Instructions

```
Enter your choice: 3
Enter cooking instruction: Mix all ingredients together.
Cooking instruction added to the recipe.
```

### Displaying Recipe Details

```
Enter your choice: 4
Recipe Name: Pancakes
Ingredients:
- Flour: 2 cups
Instructions:
Mix all ingredients together.
```

## Conclusion

This Recipe Management System provides a basic framework for creating and managing recipes using C++. It demonstrates the use of classes, objects, constructors, and arrays of objects, while providing a simple user interface for interaction. Feel free to extend the functionality, improve the user interface, or add additional features as you see fit.

If you have any questions or need further assistance, feel free to reach out.

Happy coding!

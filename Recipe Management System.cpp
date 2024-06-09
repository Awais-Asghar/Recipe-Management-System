#include <iostream>
#include <string>
using namespace std;

class Ingredient 
{
public:
    string name;
    double quantity;
    string unit;
    
    Ingredient() {
	    name= "";
		quantity=0.0;
		unit="";
    }
    
		Ingredient(string _name, double _quantity, string _unit)
    {
        name = _name;
        quantity = _quantity;
        unit = _unit;
    }
};
class Recipe 
{
public:
    string recipeName;
    Ingredient ingr[10];  
    string cookingInstructions[10];  
    int numIngredients = 0;  
    int numInstructions = 0;
    
    Recipe(string _n): recipeName(_n){
	}

    void addIngredient(string name, double quantity, string unit) {
        if (numIngredients < 10) {
            ingr[numIngredients] = Ingredient(name, quantity, unit);
            numIngredients++;
            cout << "Ingredient added to the recipe." << endl;
        } else {
            cout << "Maximum number of ingredients reached for this recipe." << endl;
        }
    }

    void addCookingInstruction(string instruction) {
        if (numInstructions < 10) {
            cookingInstructions[numInstructions] = instruction;
            numInstructions++;
            cout << "Cooking instruction added to the recipe." << endl;
        } else {
            cout << "Maximum number of instructions reached for this recipe." << endl;
        }
    }
    void displayRecipeDetails()
	{
        cout << "Recipe Name: " << recipeName << endl;
        cout << "Ingredients:" << endl;
        for (int i = 0; i < numIngredients; i++) {
            cout << "- " << ingr[i].name << ": " << ingr[i].quantity << " " << ingr[i].unit << endl;
        }
        cout << "Instructions:" << endl;
        for (int i = 0; i < numInstructions; i++) {
            cout << cookingInstructions[i] << endl;
        }
    }
};
int main() 
{
    Recipe recipe("");
    bool createdFirstRecipe = false;
    while (true) {
        cout << "\nRecipe Management System" << endl;
        cout << "1. Create a new recipe" << endl;
        cout << "2. Add ingredients to the recipe" << endl;
        cout << "3. Add cooking instructions to the recipe" << endl;
        cout << "4. Display recipe details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;
        switch (choice) 
		{
            case 1: 
			{
                if (!createdFirstRecipe) {
                    cout << "Enter the name of the recipe: ";
                    string recipeName;
                    cin >> recipeName;
                    recipe = Recipe(recipeName);
                    createdFirstRecipe = true;
                    cout << "Recipe created successfully!" << endl;
                } else {
                    cout << "You can only create one recipe initially." << endl;
                }
                break;
            }
            case 2: 
			{
                if (createdFirstRecipe) 
				{
                    string ingredientName;
                    double quantity;
                    string unit;
                    cout << "Enter ingredient name: ";
                    cin >> ingredientName;
                    cout << "Enter quantity: ";
                    cin >> quantity;
                    cout << "Enter unit: ";
                    cin >> unit;
                    recipe.addIngredient(ingredientName, quantity, unit);
                } else {
                    cout << "Please create a recipe first." << endl;
                }
                break;
            }
            case 3: 
			{
                if (createdFirstRecipe) {
                    string instruction;
                    cout << "Enter cooking instruction: ";
                    cin >> instruction;
                    recipe.addCookingInstruction(instruction);
                } else {
                    cout << "Please create a recipe first." << endl;
                }
                break;
            }
            case 4: 
			{
                if (createdFirstRecipe) {
                    recipe.displayRecipeDetails();
                } else {
                    cout << "Please create a recipe first." << endl;
                }
                break;
            }
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
    return 0;
}

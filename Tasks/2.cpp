#include <iostream>
#include <string>
#include <vector>
#include <limits.h>
using namespace std;

class BrickCalculator
{
public:
    static double calculateBrickCost(double length, double height, double costPerBrick)
    {
        double area = length * height;
        double bricksNeeded = area / 1.0; // 1 brick per square foot
        return bricksNeeded * costPerBrick;
    }
};

class ConcreteCalculator
{
public:
    static double calculateConcreteCost(double length, double height, double costPerConcrete)
    {
        double area = length * height;
        double ConcreteNeeded = area / 1.0; // 1 kg Concrete per square foot
        return ConcreteNeeded * costPerConcrete;
    }
};

class SematCalculator
{
public:
    static double calculateSematCost(double length, double height, double costPerSemat)
    {
        double area = length * height;
        double SematNeeded = area / 0.5; // 0.5 sak Semat per square foot
        return SematNeeded * costPerSemat;
    }
};

class MetalCalculator
{
public:
    static double calculateMetalCost(double length, double height, double costPerMetal)
    {
        double area = length * height;
        double MetalNeeded = area / 1.0; // 1 kg Metal per square foot
        return MetalNeeded * costPerMetal;
    }
};

class GlassCalculator
{
public:
    static double calculateGlassCost(double length, double height, double costPerGlass)
    {
        double area = length * height;
        double GlassNeeded = area / 2.0; // 2 meter Glass per square foot
        return GlassNeeded * costPerGlass;
    }
};

class PipesCalculator
{
public:
    static double calculatePipesCost(double length, double height, double costPerPipe)
    {
        double area = length * height;
        double PipesNeeded = area / 3.0; // 3 meter Pipes per square foot
        return PipesNeeded * costPerPipe;
    }
};

class PaintCostCalculator
{
public:
    static double calculatePaintCost(double totalHouseArea, double costPerSquareFoot)
    {
        return totalHouseArea * costPerSquareFoot;
    }
};

class WhiteWashCostCalculator
{
public:
    static double calculateWhiteWashCost(double totalHouseArea, double costWhiteWashPerSquareFoot)
    {
        return totalHouseArea * costWhiteWashPerSquareFoot;
    }
};

class FloorPlanGenerator
{
public:
    static vector<string> generateFloorPlan(double length, double width)
    {
        vector<string> floorPlan;
        floorPlan.push_back("Room 1: 10'x10'");
        floorPlan.push_back("Room 2: 12'x12'");
        floorPlan.push_back("Lounge: 16'x16'");
        floorPlan.push_back("Washroom: 6'x8'");
        return floorPlan;
    }
};

class Validations
{
public:
    bool numberValidation(string idString)
    {
        for (int i = 0; i < idString.size(); ++i)
        {
            if (!isdigit(idString[i]))
            {
                return false;
            }
        }
        if (idString.empty())
        {
            return false;
        }
        for (int i = 0; i < idString.size(); ++i)
        {
            if (idString[i] == ' ')
            {
                return false;
            }
        }
        return true;
    }
};

class CostCalculator : public BrickCalculator
{
public:
    double totalCost;

    CostCalculator() : totalCost(0.0) {}

    void addBrickCost(double length, double height, double costPerBrick)
    {
        totalCost += calculateBrickCost(length, height, costPerBrick);
    }

    void addConcreteCost(double length, double height, double costPerConcrete)
    {
        totalCost += ConcreteCalculator::calculateConcreteCost(length, height, costPerConcrete);
    }

    void addSematCost(double length, double height, double costPerSemat)
    {
        totalCost += SematCalculator::calculateSematCost(length, height, costPerSemat);
    }

    void addMetalCost(double length, double height, double costPerMetal)
    {
        totalCost += MetalCalculator::calculateMetalCost(length, height, costPerMetal);
    }

    void addGlassCost(double length, double height, double costPerGlass)
    {
        totalCost += GlassCalculator::calculateGlassCost(length, height, costPerGlass);
    }

    void addPipesCost(double length, double height, double costPerPipe)
    {
        totalCost += PipesCalculator::calculatePipesCost(length, height, costPerPipe);
    }

    void addPaintCost(double totalHouseArea, double costPerSquareFoot)
    {
        totalCost += PaintCostCalculator::calculatePaintCost(totalHouseArea, costPerSquareFoot);
    }

    void addWhiteWashCost(double totalHouseArea, double costWhiteWashPerSquareFoot)
    {
        totalCost += WhiteWashCostCalculator::calculateWhiteWashCost(totalHouseArea, costWhiteWashPerSquareFoot);
    }

    double getTotalCost() const
    {
        return totalCost;
    }
};

void displayMenu()
{
    cout << "\n\t\t\t--------- Welcome to Your Personal Construction Estimator ---------\n";
    cout << "1. Calculate Brick Cost\n";
    cout << "2. Calculate Concrete Cost\n";
    cout << "3. Calculate Semat Cost\n";
    cout << "4. Calculate Metal Cost\n";
    cout << "5. Calculate Glass Cost\n";
    cout << "6. Calculate Pipes Cost\n";
    cout << "7. Calculate Paint Cost\n";
    cout << "8. Calculate WhiteWash Cost\n";
    cout << "9. Generate Floor Plan\n";
    cout << "0. Exit\n";
}

void calculateBrickCost(CostCalculator& calculator)
{
    double length, height, costPerBrick;
    Validations validate;

    cout << "\nEnter the Length of the Wall (in feet): ";
    string stringLength;
    getline(cin, stringLength);
    while (!validate.numberValidation(stringLength))
    {
        cout << "Invalid input. Enter the Length of the Wall (in feet): ";
        getline(cin, stringLength);
    }
    length = stod(stringLength);

    cout << "Enter the Height of the Wall (in feet): ";
    string stringHeight;
    getline(cin, stringHeight);
    while (!validate.numberValidation(stringHeight))
    {
        cout << "Invalid input. Enter the Height of the Wall (in feet): ";
        getline(cin, stringHeight);
    }
    height = stod(stringHeight);

    cout << "Enter the Cost Per Brick: ";
    string stringCostPerBrick;
    getline(cin, stringCostPerBrick);
    while (!validate.numberValidation(stringCostPerBrick))
    {
        cout << "Invalid input. Enter the Cost Per Brick: ";
        getline(cin, stringCostPerBrick);
    }
    costPerBrick = stod(stringCostPerBrick);

    calculator.addBrickCost(length, height, costPerBrick);
    cout << "\nThe total cost of bricks added to the calculator.\n";
}

void calculateConcreteCost(CostCalculator& calculator)
{
    double length, height, costPerConcrete;
    Validations validate;

    cout << "\nEnter the Length of the Wall (in feet): ";
    string stringLength;
    getline(cin, stringLength);
    while (!validate.numberValidation(stringLength))
    {
        cout << "Invalid input. Enter the Length of the Wall (in feet): ";
        getline(cin, stringLength);
    }
    length = stod(stringLength);

    cout << "Enter the Height of the Wall (in feet): ";
    string stringHeight;
    getline(cin, stringHeight);
    while (!validate.numberValidation(stringHeight))
    {
        cout << "Invalid input. Enter the Height of the Wall (in feet): ";
        getline(cin, stringHeight);
    }
    height = stod(stringHeight);

    cout << "Enter the Cost Per kg Concrete: ";
    string stringCostPerConcrete;
    getline(cin, stringCostPerConcrete);
    while (!validate.numberValidation(stringCostPerConcrete))
    {
        cout << "Invalid input. Enter the Cost Per kg Concrete: ";
        getline(cin, stringCostPerConcrete);
    }
    costPerConcrete = stod(stringCostPerConcrete);

    calculator.addConcreteCost(length, height, costPerConcrete);
    cout << "\nThe total cost of concrete added to the calculator.\n";
}

void calculateSematCost(CostCalculator& calculator)
{
    double length, height, costPerSemat;
    Validations validate;

    cout << "\nEnter the Length of the Wall (in feet): ";
    string stringLength;
    getline(cin, stringLength);
    while (!validate.numberValidation(stringLength))
    {
        cout << "Invalid input. Enter the Length of the Wall (in feet): ";
        getline(cin, stringLength);
    }
    length = stod(stringLength);

    cout << "Enter the Height of the Wall (in feet): ";
    string stringHeight;
    getline(cin, stringHeight);
    while (!validate.numberValidation(stringHeight))
    {
        cout << "Invalid input. Enter the Height of the Wall (in feet): ";
        getline(cin, stringHeight);
    }
    height = stod(stringHeight);

    cout << "Enter the Cost Per sak Semat: ";
    string stringCostPerSemat;
    getline(cin, stringCostPerSemat);
    while (!validate.numberValidation(stringCostPerSemat))
    {
        cout << "Invalid input. Enter the Cost Per sak Semat: ";
        getline(cin, stringCostPerSemat);
    }
    costPerSemat = stod(stringCostPerSemat);

    calculator.addSematCost(length, height, costPerSemat);
    cout << "\nThe total cost of semat added to the calculator.\n";
}

void calculateMetalCost(CostCalculator& calculator)
{
    double length, height, costPerMetal;
    Validations validate;

    cout << "\nEnter the Length of the Wall (in feet): ";
    string stringLength;
    getline(cin, stringLength);
    while (!validate.numberValidation(stringLength))
    {
        cout << "Invalid input. Enter the Length of the Wall (in feet): ";
        getline(cin, stringLength);
    }
    length = stod(stringLength);

    cout << "Enter the Height of the Wall (in feet): ";
    string stringHeight;
    getline(cin, stringHeight);
    while (!validate.numberValidation(stringHeight))
    {
        cout << "Invalid input. Enter the Height of the Wall (in feet): ";
        getline(cin, stringHeight);
    }
    height = stod(stringHeight);

    cout << "Enter the Cost Per kg Metal: ";
    string stringCostPerMetal;
    getline(cin, stringCostPerMetal);
    while (!validate.numberValidation(stringCostPerMetal))
    {
        cout << "Invalid input. Enter the Cost Per kg Metal: ";
        getline(cin, stringCostPerMetal);
    }
    costPerMetal = stod(stringCostPerMetal);

    calculator.addMetalCost(length, height, costPerMetal);
    cout << "\nThe total cost of metal added to the calculator.\n";
}

void calculateGlassCost(CostCalculator& calculator)
{
    double length, height, costPerGlass;
    Validations validate;

    cout << "\nEnter the Length of the Wall (in feet): ";
    string stringLength;
    getline(cin, stringLength);
    while (!validate.numberValidation(stringLength))
    {
        cout << "Invalid input. Enter the Length of the Wall (in feet): ";
        getline(cin, stringLength);
    }
    length = stod(stringLength);

    cout << "Enter the Height of the Wall (in feet): ";
    string stringHeight;
    getline(cin, stringHeight);
    while (!validate.numberValidation(stringHeight))
    {
        cout << "Invalid input. Enter the Height of the Wall (in feet): ";
        getline(cin, stringHeight);
    }
    height = stod(stringHeight);

    cout << "Enter the Cost Per Meter of Glass: ";
    string stringCostPerGlass;
    getline(cin, stringCostPerGlass);
    while (!validate.numberValidation(stringCostPerGlass))
    {
        cout << "Invalid input. Enter the Cost Per Meter of Glass: ";
        getline(cin, stringCostPerGlass);
    }
    costPerGlass = stod(stringCostPerGlass);

    calculator.addGlassCost(length, height, costPerGlass);
    cout << "\nThe total cost of glass added to the calculator.\n";
}

void calculatePipesCost(CostCalculator& calculator)
{
    double length, height, costPerPipe;
    Validations validate;

    cout << "\nEnter the Length of the Wall (in feet): ";
    string stringLength;
    getline(cin, stringLength);
    while (!validate.numberValidation(stringLength))
    {
        cout << "Invalid input. Enter the Length of the Wall (in feet): ";
        getline(cin, stringLength);
    }
    length = stod(stringLength);

    cout << "Enter the Height of the Wall (in feet): ";
    string stringHeight;
    getline(cin, stringHeight);
    while (!validate.numberValidation(stringHeight))
    {
        cout << "Invalid input. Enter the Height of the Wall (in feet): ";
        getline(cin, stringHeight);
    }
    height = stod(stringHeight);

    cout << "Enter the Cost Per Meter of Pipes: ";
    string stringCostPerPipe;
    getline(cin, stringCostPerPipe);
    while (!validate.numberValidation(stringCostPerPipe))
    {
        cout << "Invalid input. Enter the Cost Per Meter of Pipes: ";
        getline(cin, stringCostPerPipe);
    }
    costPerPipe = stod(stringCostPerPipe);

    calculator.addPipesCost(length, height, costPerPipe);
    cout << "\nThe total cost of pipes added to the calculator.\n";
}

void calculatePaintCost(CostCalculator& calculator)
{
    double totalHouseArea, costPerSquareFoot;
    Validations validate;

    cout << "\nEnter the Total House Area (in square feet): ";
    string stringTotalHouseArea;
    getline(cin, stringTotalHouseArea);
    while (!validate.numberValidation(stringTotalHouseArea))
    {
        cout << "Invalid input. Enter the Total House Area (in square feet): ";
        getline(cin, stringTotalHouseArea);
    }
    totalHouseArea = stod(stringTotalHouseArea);

    cout << "Enter the Cost Per Square Foot: ";
    string stringCostPerSquareFoot;
    getline(cin, stringCostPerSquareFoot);
    while (!validate.numberValidation(stringCostPerSquareFoot))
    {
        cout << "Invalid input. Enter the Cost Per Square Foot: ";
        getline(cin, stringCostPerSquareFoot);
    }
    costPerSquareFoot = stod(stringCostPerSquareFoot);

    calculator.addPaintCost(totalHouseArea, costPerSquareFoot);
    cout << "\nThe total cost of paint added to the calculator.\n";
}

void calculateWhiteWashCost(CostCalculator& calculator)
{
    double totalHouseArea, costWhiteWashPerSquareFoot;
    Validations validate;

    cout << "\nEnter the Total House Area (in square feet): ";
    string stringTotalHouseArea;
    getline(cin, stringTotalHouseArea);
    while (!validate.numberValidation(stringTotalHouseArea))
    {
        cout << "Invalid input. Enter the Total House Area (in square feet): ";
        getline(cin, stringTotalHouseArea);
    }
    totalHouseArea = stod(stringTotalHouseArea);

    cout << "Enter the Cost Per Square Foot: ";
    string stringCostWhiteWashPerSquareFoot;
    getline(cin, stringCostWhiteWashPerSquareFoot);
    while (!validate.numberValidation(stringCostWhiteWashPerSquareFoot))
    {
        cout << "Invalid input. Enter the Cost Per Square Foot: ";
        getline(cin, stringCostWhiteWashPerSquareFoot);
    }
    costWhiteWashPerSquareFoot = stod(stringCostWhiteWashPerSquareFoot);

    calculator.addWhiteWashCost(totalHouseArea, costWhiteWashPerSquareFoot);
    cout << "\nThe total cost of whitewash added to the calculator.\n";
}

void generateFloorPlan()
{
    double length, width;
    Validations validate;

    cout << "\nEnter the Length of the House (in feet): ";
    string stringLength;
    getline(cin, stringLength);
    while (!validate.numberValidation(stringLength))
    {
        cout << "Invalid input. Enter the Length of the House (in feet): ";
        getline(cin, stringLength);
    }
    length = stod(stringLength);

    cout << "Enter the Width of the House (in feet): ";
    string stringWidth;
    getline(cin, stringWidth);
    while (!validate.numberValidation(stringWidth))
    {
        cout << "Invalid input. Enter the Width of the House (in feet): ";
        getline(cin, stringWidth);
    }
    width = stod(stringWidth);

    vector<string> floorPlan = FloorPlanGenerator::generateFloorPlan(length, width);
    cout << "\nGenerated Floor Plan:\n";
    for (const string& room : floorPlan)
    {
        cout << room << "\n";
    }
}

int main()
{
    CostCalculator calculator;
    char choice;
    do
    {
        displayMenu();
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        switch (choice)
        {
        case '1':
            calculateBrickCost(calculator);
            break;
        case '2':
            calculateConcreteCost(calculator);
            break;
        case '3':
            calculateSematCost(calculator);
            break;
        case '4':
            calculateMetalCost(calculator);
            break;
        case '5':
            calculateGlassCost(calculator);
            break;
        case '6':
            calculatePipesCost(calculator);
            break;
        case '7':
            calculatePaintCost(calculator);
            break;
        case '8':
            calculateWhiteWashCost(calculator);
            break;
        case '9':
            generateFloorPlan();
            break;
        case '0':
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '0');

    cout << "\nThe total construction cost is: " << calculator.getTotalCost() << " units of currency\n";

    system("pause");

    return 0;
}
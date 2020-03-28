#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 bool
 char
 int
 float
 double
 void

 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    bool today = 1;
    bool price = 1; 
    bool greeting = 7;
    int Rachel = 3;
    int Score = 89;
    int limitation = 1000;  
    char mark = 99;
    char initial = 88;
    char level = 89;
    double result = 8.89384848;
    double declination = 4.345;
    double data = 898.3636;
    float snack = 3.70f;
    float calories = 500.30f;
    float gpa = 4.70f;
    unsigned int invitees = 5;
    unsigned int sandwiches = 5;
    unsigned int populationOfTheCity = 45939902;   
    ignoreUnused(today, price, greeting, Rachel, Score, limitation, mark, initial, level, result, declination, data, snack, calories, gpa, invitees, sandwiches,  populationOfTheCity);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int coke(int volume, bool material = 2)
{
    ignoreUnused(volume, material);
    return {};

}
/*
 2)
 */
float temperature(double south, double north, double west, double east)
{
    ignoreUnused(south, north, west, east=67.885);
    return{};
}
/*
 3)
 */
char name(char firstName, char lastName)
{
    ignoreUnused(firstName,lastName);
    return{};
}
/*
 4)
 */
bool assignment(int quarter = 2, int course = 603, bool keypoint = 1)
{
    ignoreUnused(quarter, course, keypoint);
    return{};
}
/*
 5)
 */
double price(double discount = 0.60, double originalPrice = 89.88)
{
    ignoreUnused(discount, originalPrice);
    return{};
}
/*
 6)
 */
double fuel(int fuelType = 93, double gallon = 8.98)
{
    ignoreUnused(fuelType, gallon);
    return{};
}
/*
 7)
 */
bool TVSeries(char nameOfTVSeries, int season, int episode = 3)
{
    ignoreUnused(nameOfTVSeries, season, episode);
    return{};
}
/*
 8)
 */
bool insurance(int lengthOfTime, char insuranceType = 'A' )
{
    ignoreUnused(lengthOfTime, insuranceType);
    return{};
}
/*
 9)
 */
bool family(int numberOfChildren, int incomeOfAYear = 230000)
{
    ignoreUnused(numberOfChildren,  incomeOfAYear);
    return{};
}
/*
 10)
 */
void DaysOfCountdown(int dateOfSetting, int dateOfToday = 235)
{
    ignoreUnused(dateOfSetting, dateOfToday);
}
int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto populationAnalysis = family(3, 2);
    //2)
    auto signIn = name('A', 'B');
    //3)
    auto forecast = temperature(5.66, 7.5, 45.45, 65.34);
    //4)
    auto beverage = coke(2, 8);
    //5)
    auto saleRecord = price(14.4, 0.75);
    //6)
    auto addFuel = fuel(2, 8.8);
    //7)
    auto rubrics = assignment(2, 5, 0);
    //8)
    auto search = TVSeries('C', 5, 8);
    //9)
    auto protection = insurance(500, 'B');
    //10)
    DaysOfCountdown(25, 74);
    ignoreUnused(carRented, populationAnalysis, signIn, forecast, beverage, saleRecord, addFuel, rubrics, search, protection);
    std::cout << "good to go!" << std::endl;
    return 0;
   
}

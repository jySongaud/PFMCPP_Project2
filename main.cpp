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

    bool today = Tuesday;
    ignoreUnused(today);
    bool price = unknown;
    ignoreUnused(price);  
    bool greeting = hello;
    ignoreUnused(greeting);

    int Rachel = 3;
    ignoreUnused(Rachel);
    int Score = 89;
    ignoreUnused(Score);
    int limitation = 1000;
    ignoreUnused(limitation);
    
    char mark = 'A';
    ignoreUnused(mark);
    char initial = 'd';
    ignoreUnused(initial);
    char level = '3';
    ignoreUnused(level);

    double result = 8.89384848;
    ignoreUnused(result);
    double declination = 4.345;
    ignoreUnused(declination);
    double data = 898.3636;
    ignoreUnused(data);

    float snack = 3.78;
    ignoreUnused(snack);
    float calories = 500.3;
    ignoreUnused(calories);
    float gpa = 4.77;
    ignoreUnused(gpa);
    
    int Rachel = 3;
    ignoreUnused(Rachel);
    int Score = 89;
    ignoreUnused(Score);
    int limitation = 1000;
    ignoreUnused(limitation);




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
 int coke(int volume, bool material = A)
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
bool Assignment(int quarter, int course, bool keypoint)
{
    ignoreUunsed(quarter, course, keypoint);
    return{};
}
/*
 5)
 */
double price(double discount, double originalPrice)
{
    ignoreUnused(discount, originalPrice);
    return{};
}
/*
 6)
 */
double fuel(int fuelType, double gallon)
{
    ignoreUnused(fuelType, gallon);
    return{};
}
/*
 7)
 */
bool TVSeries(char name,int season, int episode)
{
    ignoreUnused(season, episode);
    return{}
}
/*
 8)
 */
bool insurance(int lengthOfTime, char insuranceType )
{
    ignoreUnused(lengthOfTime, insuranceType);
    return{};
}
/*
 9)
 */
bool family(int numberOfChildren, char conditionOfMarriage, int incomeOfAYear )
{
    ignoreUnused(numberOfChildren, conditionOfMarriage, incomeOFAYear);
    return{};
}
/*
 10)
 */
void DaysOfCountdown(bool dateOfSetting, bool dateOfToday)
{
    ignoreUnused(dateOfSetting, dateOfToday)
}
int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    
    //2)
    
    //3)
    
    //4)
    
    //5)
    
    //6)
    
    //7)
    
    //8)
    
    //9)
    
    //10)
    
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

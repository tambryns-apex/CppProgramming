// Pratice 1 Chp 1, Chp 2
# include <iostream>
# include <string>
using namespace std;
int main() {
    // Part A
    string first_name, last_name;
    first_name = "Tambryn";
    last_name = "Searle";
    cout << "First Name: " << first_name << endl;
    cout << "Last Name: " << last_name << endl;
    cout << endl;

    // Set up variables
    double hours_studying_week = 2.5;
    int midterm_exams = 2 * 1;
    int final_exams = 2;
    int lectures_per_week = 2;
    int weeks = 16;
    double lecture_length = 1.25;
    int seconds_per_hour = 3600;

    // Calculations
    double total_lectures = lectures_per_week * weeks;
    double total_lecture_hours = total_lectures * lecture_length;
    double total_exam_hours = midterm_exams + final_exams;
    double total_study_hours = hours_studying_week * weeks;
    double total_hours = total_lecture_hours + total_exam_hours + total_study_hours;
    double total_seconds = total_hours * seconds_per_hour;

    // Print results
    cout << "I am supposed to spend " << total_seconds << " seconds studying C++ Programming" << endl;

    // Part B
    // Get user input
    float driving_distance, miles_per_gallon, price_per_gallon;
    cout << "Enter the driving distance: " << endl;
    cin >> driving_distance;
    cout << " Enter the fuel efficiency of the car in miles per gallon: " << endl;
    cin >> miles_per_gallon;
    cout << "Enter the price of gas per gallon: " << endl;
    cin >> price_per_gallon;

    // Calculate total cost
    float total_cost = (driving_distance / miles_per_gallon) * price_per_gallon;

    // Display result
    cout << "The cost of driving is $" << total_cost << endl;
    
}
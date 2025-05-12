#include <iostream>

using namespace std;

// Function prototypes
int getScore();
char findGrade(int score);
void print(int score, char grade);

int main() {
    // Main body
    int score;
    char grade;

    score = getScore();
    grade = findGrade(score);
    print(score, grade);
    return 0;
}

int getScore() {
    // Fetch and validate score from user input
    int score = -1;

    // Fetch score from user and validate response
    do {
        cout << "What is his score? ";
        cin >> score;
        cout << endl;
        
        // Error check
        if(score < 0 || score > 100) {
            cout << "The score passed in was an invalid score entered" << endl;
        };
    } while(score < 0 || score > 100);

    // Return score after validation
    return score;
};

char findGrade(int score) {
    // Implement the table to calculate the given score
    if(score <= 100 && score >= 90) {
        return 'A';
    } else if(score >= 80) {
        return 'B';
    } else if(score >= 70) {
        return 'C';
    } else if(score >= 60) {
        return 'D';
    } else {
        return 'F';
    };
};

void print(int score, char grade) {
    // Print out score and grade
    cout << "Score: " << score << ", Grade: " << grade << endl; 
};
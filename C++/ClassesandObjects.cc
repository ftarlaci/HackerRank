/*
Create a class named  with the following specifications:

An instance variable named scores to hold a student's  exam scores.
A void input() function that reads  integers and saves them to scores.
An int calculateTotalScore() function that returns the sum of the student's scores.

*/

class Student {
  public:
    void input() {
        for(int i = 0; i < 5; i++){
            cin >> scores[i];
        }
    }
    
    int calculateTotalScore() {
        for(int i=0; i<5; i++) {
            sum+=scores[i];
        }
        return sum;
    }
    
 private:
    int sum; 
    int scores[5];
};
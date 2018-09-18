/*
if - else if - else: In this structure, dependent 
statements are chained together and the  for each 
statement is only checked if all prior conditions 
in the chain evaluated to false. Once a  evaluates 
to true, the bracketed code associated with that 
statement is executed and the program then skips 
to the end of the chain of statements and continues
executing. If each  in the chain evaluates to false, 
then the body of bracketed code in the else block at 
the end is executed.
*/

/*
Given a positive integer denoting , do the following:
If , then print the lowercase English word corresponding 
to the number (e.g., one for , two for , etc.).
If , print Greater than 9.
*/


using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(1 <= n && n <= 9){
        if(n == 1){
            cout << "one" << endl;
        } else if(n == 2){
            cout << "two" << endl;
        } else if(n == 3){
            cout << "three" << endl;
        } else if(n == 4){
            cout << "four" << endl;
        } else if(n == 5){
            cout << "five" << endl;
        } else if(n == 6){
            cout << "six" << endl;
        } else if(n == 7){
            cout << "seven" << endl;
        } else if(n == 8) {
            cout << "eight" << endl;
        } else {
            cout << "nine" << endl;
        }
    } else {
        cout << "Greater than 9" << endl;
    }


    return 0;
}

/*
You are provided with a vector of N integers. Then, 
you are given 2 queries. For the first query, you are 
provided with  1 integer, which denotes a position in 
the vector. The value at this position in the vector 
needs to be erased. The next query consists of 2 integers 
denoting a range of the positions in the vector. The elements 
which fall under that range should be removed. The second 
query is performed on the updated vector which we get after 
performing the first query.
The following are some useful vector functions:

erase(int position):

Removes the element present at position.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
erase(int start,int end):

Removes the elements in the range from start to end inclusive of the 
start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third 
element to the fifth element.)
*/


int main() {
    vector<int> v {};
    int vsz;
    
    cin >> vsz;
    for (int i = 0; i < vsz; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    
    int a, b;
    cin >> a;
    v.erase(begin(v) + a - 1);
    cin >> a >> b;
    v.erase(begin(v) + a - 1, begin(v) + b - 1);
    
    cout << v.size() << endl;
    for_each(v.begin(), v.end(), [] (int i) { cout << i << " "; });
    cout << endl;
    
    return 0;
}



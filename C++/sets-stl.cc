
/*

 1 x  : Add an element  to the set.
 2 x : Delete an element  from the set. (If the number  
 3 x is not present in the set, then do nothing).
  : If the number  is present in the set, then print "Yes"(without quotes) 
  else print "No"(without quotes).


*/
int main() {
    int i;
    set<int> s;
    cin >> i;
    for (int j=0; j<i; ++j){
        int t, x;
        cin >> t >> x;
        switch (t){
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                cout << (s.find(x) == s.end() ? "No" : "Yes") << endl;
                break;
        }
    }
        return 0;
}
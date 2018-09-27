/*
Design a class named Box whose dimensions are integers and private to the class. 
The dimensions are labelled: length l, breadth b, and height h.

The default constructor of the class should initialize l, b, and h to 0.

The parameterized constructor Box(int length, int breadth, int height) should 
initialize Box's l, b and h to length, breadth and height.

The copy constructor Box(Box B ) should set l, b and h to B's l, b, and h, respectively.

Apart from the above, the class should have 4 functions:

int getLength() - Return box's length
int getBreadth() - Return box's breadth
int getHeight() - Return box's height
long long CalculateVolume() - Return the volume of the box

*/
class Box {
    
    private:
        int l;
        int b;
        int h;
    public:
        Box() {
            l, b, h = 0;
        }
        Box(int length, int breadth, int height){
            l = length;
            b = breadth;
            h = height;
        }

        Box (Box & B){
            l = B.l; 
            b = B.b;
            h = B.h;
        }
        int getLength() {
            return l;
        }
        int getBreadth() {
            return b;
        }
        int getHeight() {
            return h;
        }
     long long CalculateVolume(){
        return (long long)l*b*h;
    }
    
    friend bool operator < ( Box&A,Box& B){
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
            return true;
        }else{
            return false;
        }
    };
    
    friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};

class Shape { //Any class that has a virtual class is an abstract data class. 

    virtual getName() {return "Shape";}
    virtual double calculateArea()=0; //don't know how to calculateArea of a shape. If any class like Rectangle inherits from
    								  //Shape and method has =0, it must have a calculateArea() function or you will get a compile error.
    								  //When it says =0, it is a pure virtual function 

};

class Rectangle : public Shape { //Everything I want to do with a shape, I want to be able to do with a rectangle. 
    getName() {return "Rectangle";}
	virtual ~Rectangle();
	setLength(int x); //That means I can set side for length of square. But that is not what I want because it does not change width as well
					  //As a result, I will need to inherit privately. 

};

Class Square : public Rectangle 
{

}

int main(){

	Shape s1;
	s1.calculateArea(); //Does not work because you don't have implmementation for calculating area for a shape. 
	Shape* otherRectangle = new Rectangle(2,3);
	std::cout<<otherRectangle->getName()<<endl; //prints out Shape. otherRectangle is a Shape in compile time. In runtime howwever, 
												//otherRectangle becomes a Rectangle
												//If you want to print out Rectangle, change the Shapes getName() function to virtual. 

}
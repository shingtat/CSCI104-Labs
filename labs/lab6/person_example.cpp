class Person {
    public:
        Person(string name) : name_(name), age_(0), dreams_("Be good at 104") //made at same time instead of having age and dreams made first
        {
            //name_=name; //default constructor, calls constructor for age and name too.
        }
        getName();
        getAge();
    protected:
        dreams_;
    private:
        name_;
        age_;
};

class Student : public Person {
    public:
        Student(string name); //Cannot access person's age
        getStudentID();
    private:
        studentID_;
};

class Agent : private Person { //Want a n agent to implement like a person. Can't access anything from person though 
    public:
        Agent(string codename);
        attemptCommunication();
};


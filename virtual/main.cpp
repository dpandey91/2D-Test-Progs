
   #include <iostream>
   #include <vector>
   using std::cout;  using std::endl;
   class A {
   public:
     virtual ~A() { cout << "destruct A" << endl; }
     virtual void identify() { cout << "I’m an A" << endl; }
       const char getName() const { return 'A'; }
   private:
    };
   class B : public A
    {
   public:
     ~B() { cout << "destruct B" << endl; }
      virtual void identify() { cout << "I’m a B" << endl; }
       const char getName() const { return 'B'; }
    private:
     };
   int main() {
     A*  x = new B;
     
     cout << x->getName() << endl;
     x->identify();
     delete x;
}

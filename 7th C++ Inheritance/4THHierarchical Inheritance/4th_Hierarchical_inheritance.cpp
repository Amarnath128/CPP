/* 4) Hierarchical Inheritance - if More than one class is derived from single base class called hierarchical Inheritance.
                                                  [OR]
    - if more than one sub_class is inherited from a single base class. i.e. more then one derived calss is created from a single Base calss.
----------------------------------------------------------------------------------------------->    
 SYNTAX : 
    Class Base_classname{
        code...;
    };
      Class  Derived_class_1 : public Base_classname{
        code...  ;
    };
         Class  Derived_class_2 : public Base_classname{
        code...  ;
    };
>>..............................................................................................>    
 EXAMPLE : 
     Class A {
         code.. ;
     };
     Class B : public A {
         code.. ;
     };
     Class C : public A {
         code.. ;
     };
.................................................................................................>     
*/
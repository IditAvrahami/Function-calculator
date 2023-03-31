Description of the exercise:
In this exercise, we were asked to use a computer with ln and Sin functions, with the ability to add polynomials, perform operations on standard functions and calculate a value.
Planning the exercise:
In this exercise there is a function class which is the basis for all types of functions.
Manager inherits classes: Ln, Sin, polynomial, assembly, addition and multiplication functions.
In addition, there is a menu department that is responsible for managing the computer and a main file of constants.
A menu class contains a vector of shared pointers of classes that inherit from a function class, and this vector is the list of functions currently installed in the calculator.
Files we created:
function class of functions - a class from which all specific functions are inherited.
Add class - represents a connection of 2 functions. Contains pointers to the 2 functions.
Multiplication class - represents multiplication of 2 functions. Contains pointers to the 2 functions.
Composite The assembly class - represents assembly of 2 functions. Contains pointers to the 2 functions.
Ln class of basic function Ln as well as all log functions.
Sin Class of basic function sin.
Polynomial class - represents a polynomial. Contains the coefficients of the polynomial and the degree of the polynomials.
Menu department - responsible for managing the calculator.
Main data structures –
In the menu class there is a vector of function partner pointers, each function is represented by a partner pointer so that if it is deleted it will be inside a function assembly/multiplication/combination if it was used there.

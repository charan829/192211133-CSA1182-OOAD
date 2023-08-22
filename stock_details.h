
#ifndef PRODUCTION_DETAILS_H
#define PRODUCTION_DETAILS_H

#include <string>

/**
  * class production_details
  * 
  */

class production_details
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  production_details ();

  /**
   * Empty Destructor
   */
  virtual ~production_details ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void add ()
  {
  }


  /**
   */
  void delete ()
  {
  }


  /**
   */
  void update ()
  {
  }


  /**
   */
  void exit ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  int Pcode;
  string Pname;
  int openingstock;
  int price;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Pcode
   * @param new_var the new value of Pcode
   */
  void setPcode (int new_var)   {
      Pcode = new_var;
  }

  /**
   * Get the value of Pcode
   * @return the value of Pcode
   */
  int getPcode ()   {
    return Pcode;
  }

  /**
   * Set the value of Pname
   * @param new_var the new value of Pname
   */
  void setPname (string new_var)   {
      Pname = new_var;
  }

  /**
   * Get the value of Pname
   * @return the value of Pname
   */
  string getPname ()   {
    return Pname;
  }

  /**
   * Set the value of openingstock
   * @param new_var the new value of openingstock
   */
  void setOpeningstock (int new_var)   {
      openingstock = new_var;
  }

  /**
   * Get the value of openingstock
   * @return the value of openingstock
   */
  int getOpeningstock ()   {
    return openingstock;
  }

  /**
   * Set the value of price
   * @param new_var the new value of price
   */
  void setPrice (int new_var)   {
      price = new_var;
  }

  /**
   * Get the value of price
   * @return the value of price
   */
  int getPrice ()   {
    return price;
  }
private:


  void initAttributes () ;

};

#endif // PRODUCTION_DETAILS_H


#ifndef STOCK_DETAILS_H
#define STOCK_DETAILS_H

#include <string>

/**
  * class stock_details
  * 
  */

class stock_details
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  stock_details ();

  /**
   * Empty Destructor
   */
  virtual ~stock_details ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  date date;
  date date2;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (date new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  date getDate ()   {
    return date;
  }

  /**
   * Set the value of date2
   * @param new_var the new value of date2
   */
  void setDate2 (date new_var)   {
      date2 = new_var;
  }

  /**
   * Get the value of date2
   * @return the value of date2
   */
  date getDate2 ()   {
    return date2;
  }
private:


  void initAttributes () ;

};

#endif // STOCK_DETAILS_H

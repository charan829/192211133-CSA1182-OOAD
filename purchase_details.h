
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


#ifndef PURCHASE_DETAILS_H
#define PURCHASE_DETAILS_H

#include <string>

/**
  * class purchase_details
  * 
  */

class purchase_details
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  purchase_details ();

  /**
   * Empty Destructor
   */
  virtual ~purchase_details ();

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
  void purchase_save_ ()
  {
  }


  /**
   */
  void purchase_delete ()
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

  date Pdate;
  int pcode;
  string Sname;
  int pqty;
  int price;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Pdate
   * @param new_var the new value of Pdate
   */
  void setPdate (date new_var)   {
      Pdate = new_var;
  }

  /**
   * Get the value of Pdate
   * @return the value of Pdate
   */
  date getPdate ()   {
    return Pdate;
  }

  /**
   * Set the value of pcode
   * @param new_var the new value of pcode
   */
  void setPcode (int new_var)   {
      pcode = new_var;
  }

  /**
   * Get the value of pcode
   * @return the value of pcode
   */
  int getPcode ()   {
    return pcode;
  }

  /**
   * Set the value of Sname
   * @param new_var the new value of Sname
   */
  void setSname (string new_var)   {
      Sname = new_var;
  }

  /**
   * Get the value of Sname
   * @return the value of Sname
   */
  string getSname ()   {
    return Sname;
  }

  /**
   * Set the value of pqty
   * @param new_var the new value of pqty
   */
  void setPqty (int new_var)   {
      pqty = new_var;
  }

  /**
   * Get the value of pqty
   * @return the value of pqty
   */
  int getPqty ()   {
    return pqty;
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

#endif // PURCHASE_DETAILS_H

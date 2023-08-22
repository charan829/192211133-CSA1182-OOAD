
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


#ifndef SALES_DETAILS_H
#define SALES_DETAILS_H

#include <string>

/**
  * class sales_details
  * 
  */

class sales_details
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  sales_details ();

  /**
   * Empty Destructor
   */
  virtual ~sales_details ();

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
  void add_sales ()
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

  data Sdate;
  string Cname;
  int pcode;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Sdate
   * @param new_var the new value of Sdate
   */
  void setSdate (data new_var)   {
      Sdate = new_var;
  }

  /**
   * Get the value of Sdate
   * @return the value of Sdate
   */
  data getSdate ()   {
    return Sdate;
  }

  /**
   * Set the value of Cname
   * @param new_var the new value of Cname
   */
  void setCname (string new_var)   {
      Cname = new_var;
  }

  /**
   * Get the value of Cname
   * @return the value of Cname
   */
  string getCname ()   {
    return Cname;
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
private:


  void initAttributes () ;

};

#endif // SALES_DETAILS_H

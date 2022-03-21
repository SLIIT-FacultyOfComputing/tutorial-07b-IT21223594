#include "Item.h"
#include <iostream>
using namespace std;

Item::Item() // 4. Implement Default Constructor Implementation
{
  itemCode = 0;
  unitPrice = 0;
  discount = 0;
}

Item::Item(int CitemCode, float CunitPrice) // 5. Implement Overloaded Constructor Implementation
{
  itemCode = CitemCode;
  unitPrice = CunitPrice;
}

Item::~Item()
{

  cout << "Destructor Called!" << endl;
}

// 6. Implement Destructor (display "Destructor Called")

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item Code: " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}

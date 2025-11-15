#include <iostream>
 
class Details
{
public:
    std::string id;
    std::string name;
    std::string description;
    std::string manufacturer;
    std::string copyright;
 
    bool operator==(Details const &other) const
    {
        return id == other.id &&
               name == other.name &&
               description == other.description &&
               manufacturer == other.manufacturer &&
               copyright == other.copyright;
    }
};
 
class Product
{
    Details details;
    int price;
    bool availability;
 
    bool verifyDetails(Details const &_details)
    {
        return details == _details;
    }
 
public:
    Product(Details const &_details, int _price, bool _availability)
        : details(_details), price(_price), availability(_availability) {}
 
    virtual ~Product() = default;  
 
    const Details &getDetails() const
    {
        return details;
    }
 
    int getPrice() const { return price; }
    bool getAvailability() const { return availability; }
 
    void setDetails(Details const &_details, int _price, bool _availability)
    {
        if (verifyDetails(_details) && price == _price && availability == _availability)
            return;
 
        details = _details;
        price = _price;
        availability = _availability;
    }
 
    virtual void displayDetails()
    {
        const Details& d = getDetails();
 
        std::cout << "PRODUCT DETAILS:\n";
        std::cout << d.id << "\n"
                  << d.name << "\n"
                  << d.description << "\n"
                  << d.manufacturer << "\n"
                  << d.copyright << "\n";
    }
 
    virtual int calculatePrice()
    {
        return price;
    }
};
 
class Book : public Product
{
public:
    Book(Details const &_details, int _price, bool _availability)
        : Product(_details, _price, _availability) {}
 
    void displayDetails() override
    {
        std::cout << "[BOOK]\n";
        Product::displayDetails();
    }
};
 
class Electronics : public Product
{
public:
    Electronics(Details const &_details, int _price, bool _availability)
        : Product(_details, _price, _availability) {}
 
    void displayDetails() override
    {
        std::cout << "[ELECTRONICS]\n";
        Product::displayDetails();
    }
};
 
class Clothing : public Product
{
public:
    Clothing(Details const &_details, int _price, bool _availability)
        : Product(_details, _price, _availability) {}
 
    void displayDetails() override
    {
        std::cout << "[CLOTHING]\n";
        Product::displayDetails();
    }
};
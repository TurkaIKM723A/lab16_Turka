#include <iostream>
#include <string>

using namespace std;

class Product {

private:

    string name;
    string manufacturer;
    float price;
    int shelfLife; 
    int quantity;

public:

    Product() {

        name = "";
        manufacturer = "";
        price = 0.0;
        shelfLife = 0;
        quantity = 0;
    }

    void setName(string newName) {

        name = newName;
    }

    void setManufacturer(string newManufacturer) {

        manufacturer = newManufacturer;
    }

    void setPrice(float newPrice) {

        price = newPrice;
    }

    void setShelfLife(int newShelfLife) {

        shelfLife = newShelfLife;
    }

    void setQuantity(int newQuantity) {

        quantity = newQuantity;
    }

    string getName() {

        return name;
    }

    string getManufacturer() {

        return manufacturer;
    }

    float getPrice() {

        return price;
    }

    int getShelfLife() {

        return shelfLife;
    }

    int getQuantity() {

        return quantity;
    }

    void show() {

        cout << "Name: " << name << '\n';
        cout << "Manufacturer: " << manufacturer << '\n';
        cout << "Price: " << price << '\n';
        cout << "Shelf Life: " << shelfLife << " days" << '\n';
        cout << "Quantity: " << quantity << '\n';
    }

    void listProductsByName(string searchName) {

        if (name == searchName) {

            show();
        }
    }

    void listProductsByNameAndPrice(string searchName, float maxPrice) {

        if (name == searchName && price <= maxPrice) {

            show();
        }
    }

    void listProductsByShelfLife(int minShelfLife) {

        if (shelfLife > minShelfLife) {

            show();
        }
    }
};

int main() {

    const int arraySize = 3; 

    Product products[arraySize];

    products[0].setName("Apple");
    products[0].setManufacturer("Apple Inc.");
    products[0].setPrice(2.5);
    products[0].setShelfLife(7);
    products[0].setQuantity(50);

    products[1].setName("IBM");
    products[1].setManufacturer("International Business Machines Corp.");
    products[1].setPrice(1.0);
    products[1].setShelfLife(5);
    products[1].setQuantity(30);

    products[2].setName("Amazon");
    products[2].setManufacturer("Amazon.com Inc.");
    products[2].setPrice(3.0);
    products[2].setShelfLife(10);
    products[2].setQuantity(40);

    cout << "\nProducts with name 'Apple':" << '\n';

    for (int i = 0; i < arraySize; ++i) {

        products[i].listProductsByName("Apple");
    }

    cout << "\nProducts with name 'Apple' and price less than or equal to 2.5:" << '\n';

    for (int i = 0; i < arraySize; ++i) {

        products[i].listProductsByNameAndPrice("Apple", 2.5);
    }

    cout << "\nProducts with shelf life more than 5 days:" << '\n';

    for (int i = 0; i < arraySize; ++i) {

        products[i].listProductsByShelfLife(5);
    }

    return 0;
}


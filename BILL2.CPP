#include<iostream.h>
#include<conio.h>
#include<string.h>
class Item
{
static int Items;
public:
    char name[100];
    double price;
    int quantity;

    void inputItem()
    {
	cout << "Enter item name: ";
	cin >> name;
	cout << "Enter item price: ";
	cin >> price;
	cout << "Enter item quantity: ";
	cin >> quantity;
    }

    double calc()
    {
	return price * quantity;
    }

    void display()
    {
	cout << "Item: " << name << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Total: " << calc() << endl;

    }
};
int Item :: Items;
void main()
{
    int numItems,i;
    Item obj;
    clrscr();
    cout << "Enter the number of items: ";
    cin >> numItems;

    Item * items = new Item[numItems];

    for (i = 0; i < numItems; i++)
    {
	cout << "Enter details for item #" << i + 1 << endl;
	items[i].inputItem();
    }
    cout << "*-------------------------------*" << endl;
    cout << "Billing Details:" << endl;
    for (i = 0; i < numItems; i++)
    {
	cout << "Item No." << i + 1 << endl;
	items[i].display();
    }
    cout << "*-------------------------------*";

    getch();
}

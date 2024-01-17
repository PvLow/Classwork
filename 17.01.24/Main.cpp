#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	string color;
	string model;
	float price;
public:
	Car() {
		cout << "car created "<<endl;
	}
	Car(string color, string model) {
		this->color = color;
		this->model = model;
	}
	Car(string color, string model, float price):
    Car(color, model){
		this->price = price;
	}

	void setColor(string color) {
		this->color = color;	
	}
	void setModel(string model) {
		this->model = model;
	}
	void setPrice(float price) {
		this->price = price;
	}

	string getColor() {
		return color;
	}
	string getModel() {
		return model;
	}
	float getPrice() {
		return price;
	}

	string toString() {
		return  " color: " + color + " model " + model + " price " + to_string(price);
	}	
};

class Student {
private:
	string name;
	float mark;
public: 
	Student(string name, float mark) {
		this->name = name;
		this->mark = mark;
	}

	void setName(string name) {
		this->name = name;
	}
	void setNumber(float mark) {
		this->mark = mark;
	}
	string getName() {
		return name;
	}

	int getMark() {
		return mark;
	}
};

void changeColor(Car& car) {
	car.setColor("gold");
}

Car getMinPriceCar(Car car1, Car car2) {
	if (car1.getPrice() < car2.getPrice())
		return car1;
	else
		return car2;
}

Car createCopy(Car car) {
	return car;
}

Car* getallCarWithColor(Car* cars, int size, string color) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (cars[i].getColor() == color) count++;
	}
	Car* buf = new Car[count];
	for (int i = 0, k = 0; i < size; i++) {
		if (cars[i].getColor() == color) {
			buf[k++] = cars[i];
		}
	}
}

int main() {

	//Car** cars = new Car*[4]{new Car(), new Car(), new Car(), new Car()};
	/*Car* cars = new Car[4]{Car("black", "lada", 200),
							 Car("black2", "lada2", 300),
							 Car("black3", "lada3", 4000),
							 Car("black4", "lada4", 500) };

	float maxPrice = cars[0].getPrice();
	int id = 0;
	for (int i = 1; i < 4; i++) {
		if (maxPrice < cars[i].getPrice()) {
			maxPrice = cars[i].getPrice();
			id = i;
		}
	}

	Car car1("black","lada",10000);
	//car1.setColor("red");
	//car1.setModel("merc");
	//car1.setPrice(10000);
	cout << car1.toString();
	cout << endl;	
	Car car2("silver","audi",3000);
	cout << getMinPriceCar(car1, car2).toString();
	changeColor(car1);
	cout << car1.toString();
	cout << endl;
	Car car3 = createCopy(car2);
	*/


	// сгенерировать массив студентов и вывести их на экран
	
	string names[] = {"Pol", "Alex", }
}
#include <iostream>
#include <memory>
#include <string>

// Base class
class Vehicle {
public:
	virtual void drive() const = 0;
	virtual ~Vehicle() = default;
};

// Concrete class: Car
class Car : public Vehicle {
public:
	void drive() const override {
		std::cout << "Driving a car!" << std::endl;
	}
};

// Concrete class: Bus
class Bus : public Vehicle {
public:
	void drive() const override {
		std::cout << "Driving a bus!" << std::endl;
	}
};

// Concrete class: Truck
class Truck : public Vehicle {
public:
	void drive() const override {
		std::cout << "Driving a truck!" << std::endl;
	}
};

// Factory class
class VehicleFactory {
public:
	static std::unique_ptr<Vehicle> createVehicle(const std::string& type) {
		if (type == "car") {
			return std::make_unique<Car>();
		} else if (type == "bus") {
			return std::make_unique<Bus>();
		} else if (type == "truck") {
			return std::make_unique<Truck>();
		} else {
			throw std::invalid_argument("Unknown vehicle type");
		}
	}
};
#include <iostream>
using namespace std;

class Pc {

public:

	string pc_model;
	double ram;
	double gddr;
	bool ssdd;

	Pc(string pcram, double ram, double gdd, bool ssddd) {

		pc_model = pcram;
		ram = ram;
		gddr = gdd;
		ssdd = ssdd;

	}

	virtual ~Pc() = 0 {
	}

};

class Lenovo : public Pc {

public:
	Lenovo(string pc_model, double rame, double gdd, bool ssdd) : Pc(pc_model, rame, gdd, ssdd) {
	}
};

class Hp : public Pc {

public:
	Hp(string pc_model, double rame, double gdd, bool ssdd) : Pc(pc_model, rame, gdd, ssdd) {
	}
};

class Samsung : public Pc {

public:
	Samsung(string pc_model, double rame, double gdd, bool ssdd) : Pc(pc_model, rame, gdd, ssdd) {
	}
};

class Person {

public:

	void pce(Pc& obj) {
		cout << "I Have " << obj.pc_model << " " << obj.ram << "!" << endl;
	}

};

int main() {

	Person Behruz;
	Lenovo maestro("Lenovo", 16, 8, true);
	Hp tuf("Hp", 32, 16, true);
	Samsung sm_122("Samsung", 8, 4, true);
	Behruz.pce(tuf);
	Behruz.pce(maestro);
	Behruz.pce(sm_122);

}
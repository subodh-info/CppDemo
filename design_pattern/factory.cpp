#include <iostream>

using namespace std;

class Plans {
    protected:
    double rate;

    public:
    virtual void getRate();

    void calculateBill(int units) {
        cout << endl << units * rate;
    }

};

class DomesticPlan : public Plans {
    public: 
    void getRate() {
        rate = 3.50;
    }
};

class CommercialPlan : public Plans {
    public:
    void getRage() {
        rate = 7.50;
    }
};

class InstitutionalPlan : public Plans {
    public:
    void getRate() {
        rate = 5.50;
    }
};

class GetPlansFactory {
    Plans *plans;

    public:
    Plans* getPlans(int plantype) {
        if ( plantype == 1){
            plans = new DomesticPlan;
        }
        else if ( plantype == 2) {
            plans = new CommercialPlan;
        }
        else if ( plantype == 3 ) {
            plans = new InstitutionalPlan;
        }
        else {
            plans = NULL;
        }

        return plans;
    }

    ~GetPlansFactory() {
        if ( plans) {
            delete[] plans;
            plans = NULL;
        }
    }
};

int main() {
    int plantype;
    int units;
    GetPlansFactory pfactory;
    cout << endl << "Enter your plans types : \n 1. => domestic plans \n2. => commericial plans \n3. => institutionalplans";
    cout << endl << "Enter you choice => ";
    cin >> plantype;
    cout << endl << "Enter comsume units => ";
    cin >> units;
    Plans *plans = pfactory.getPlans(plantype);
    cout << endl << "result : " ;
    plans->calculateBill(units);
    return EXIT_SUCCESS;
}

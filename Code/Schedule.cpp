#include "Schedule.h"



#include "DashBoard.h" // Include the full definition of DashBoard here

using namespace ElectricityConsumptionPlannerSystem;


void Schedule::NavigateToDashBoard() {
    this->Hide(); // Hide FeedBack form
    if (dashboard != nullptr) {
        dashboard->Show(); // Call the Show() method on the DashBoard instance
    }
}

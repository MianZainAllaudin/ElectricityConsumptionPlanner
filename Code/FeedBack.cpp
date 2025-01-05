
#include "FeedBack.h"
#include "DashBoard.h" // Include the full definition of DashBoard here
using namespace ElectricityConsumptionPlannerSystem;

#include "DashBoard.h" // Include the full definition of DashBoard here

using namespace ElectricityConsumptionPlannerSystem;


void FeedBack::NavigateToDashBoard() {
    this->Hide(); // Hide FeedBack form
    if (dashboard != nullptr) {
        dashboard->Show(); // Call the Show() method on the DashBoard instance
    }
}
#include "InputData.h"

#include "DashBoard.h" // Include the full definition of DashBoard here

#include "Login.h"
using namespace ElectricityConsumptionPlannerSystem;
void InputData::navigatetoLoginPage() {
    this->Hide(); // Hide FeedBack form
    if (pages != nullptr) {
        pages->Show();
        // Call the Show() method on the DashBoard instance
    }
}

void InputData::NavigateToDashBoard() {
    this->Hide(); // Hide FeedBack form
    if (dashboard != nullptr) {
        dashboard->Show(); // Call the Show() method on the DashBoard instance
    }
}
#include "History.h"
#include "Login.h"
#include "DashBoard.h" // Include the full definition of DashBoard here

using namespace ElectricityConsumptionPlannerSystem;

void History::NavigateToDashBoard() {
    this->Hide(); // Hide FeedBack form
    if (dashboard != nullptr) {
        dashboard->Show(); // Call the Show() method on the DashBoard instance
    }
}
void History::navigatetoLoginPage() {
    this->Hide(); // Hide FeedBack form
    if (pages != nullptr) {
        pages->Show();
        // Call the Show() method on the DashBoard instance
    }
}
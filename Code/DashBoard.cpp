#include "DashBoard.h"
#include "Login.h"
using namespace ElectricityConsumptionPlannerSystem;
void DashBoard::navigatetoLoginPage() {
    this->Hide(); // Hide FeedBack form
    if (pages != nullptr) {
        pages->Show();
        // Call the Show() method on the DashBoard instance
    }
}
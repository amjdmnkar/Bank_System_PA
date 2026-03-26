#include <iostream>
#include <string>
#include <iomanip>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsClientListScreen.h"
#include "clsAddNewClientScreen.h"
#include "clsDeleteClientScreen.h"
#include "clsUpdateClientScreen.h"
#include "clsFindClientScreen.h"
#include "clsTransactionsScreen.h"
#include "clsManageUsersScreen.h"
#include"clsLoginScreen.h"
#include"Global.h"

int main()

{
    while (true) {
        if (!clsLoginScreen::ShowLoginScreen())
            break;
    }
    
    system("pause>0");
    return 0;
}
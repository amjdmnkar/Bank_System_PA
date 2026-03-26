#pragma once
#include <iostream>
#include"clsDate.h"
#include"clsUser.h"
#include"clsScreen.h"
#include"Global.h"

using namespace std;

class clsScreen
{
protected:
    static void _DrawScreenHeader(string Title, string SubTitle = "")
    {
        cout << "\t\t\t\t\t______________________________________";
        cout << "\n\n\t\t\t\t\t  " << Title;
        if (SubTitle != "")
        {
            cout << "\n\t\t\t\t\t  " << SubTitle;
        }
        cout << "\n\t\t\t\t\t______________________________________\n\n";
        cout << "\n\t\t\t\t\tUser: " << CurrentUser.UserName << "\n";
        cout << "\n\t\t\t\t\tDate: " << clsDate::DateToString(clsDate()) << "\n\n\n";

    }

    static bool CheckAccessRights(clsUser::enPermissions Permission) 
    {
               if(!CurrentUser.CheckAccessPermission(Permission))
               {
                   cout << "\t\t\t\t\t______________________________________________\n\n";
                   cout << "\n\t\t\t\t\t Access Deniid! Contact your admin";
                   cout << "\t\t\t\t\t______________________________________________\n\n";
                   return false;
               }
               return true;
    }

    

};


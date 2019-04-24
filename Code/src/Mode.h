/*
  Mode.h
  Created by Andrea G. Italy, 23-04-2019.
  Released into the public domain.
*/
#ifndef Mode_h
#define Mode_h

#include "Arduino.h"

class Mode
{
public:
	Mode();

    String getActiveMode();
    void scrollRight();
    void scrollLeft();

    int getIndex();

    //for update OLED display
    bool getUpdateOLED();
    void setUpdateOLED(bool u);

    String getActualSubMenu();
    void scrollSubMenu();
    int getIndexSubMenu();

    bool getSettingActivity();
    void setSettingActivity(bool s);


private:
    String activeMode = "";
    String modes[5] = {"TIME", "DATE", "DEGREES", "HUMIDITY", "ALLARM"};
    int index; //index:  0       1         2           3         4
    int maxIndexValue = 4;

    String subMenu[5][4] = {    {"SET-NOTHING","SET:HOURS", "SET-MINUTES", "SET:SEC"},
                                {"SET-NOTHING","SET:HOURS", "SET-MINUTES", "SET:SEC"},
                                {"","","",""},
                                {"","","",""},
                                {"","","",""},

                            };
    int indexSubMenu = 0;

    String subMenuDate[5] = {"NOTHING","DAY", "MONTH", "YEAR", "END SETTING"};
    int indexSubMenuDate = 0;// 0         1         2        3          4



    bool updateOLED = false;  //indicates if the oled screen needs to be updated
    bool settingActivity = false; //you are setting somthing if is true
    

};

#endif
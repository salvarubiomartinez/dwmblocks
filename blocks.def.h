//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/                                                                     /*Update Interval*/	/*Update Signal*/
    {"🖥 ",     "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",                      5,                  1},
    {"🖮 ",      "getxkblayout | grep Layout | awk '{ print $3 }'",                              0,                  2},
    {"📅 ",     "date +'%d-%b-%y %H:%M'",                                                       30,                 3},
    {"",        "next-prayer",                                                                  60,                 4},
    {"",        "idate | grep Output | awk '{ print $4 $5 $10 }'",                              360,                5},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

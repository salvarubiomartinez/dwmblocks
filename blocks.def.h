//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/                                                                     /*Update Interval*/	    /*Update Signal*/
    {"",        "ethernet.sh",                                                                  100,                    8},
    {"📍 ",     "curl ifconfig.me 2>/dev/null",                                                 300,                    7},
    {"",        "sb-volume",                                                                    10,                     9},
    {"",        "sb-pacpackages",                                                               0,                      10},
    {" ",      "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",                      5,                      1},
    {"🖮 ",      "getxkblayout | grep Layout | awk '{ print $3 }'",                              0,                      2},
    {"📅 ",     "date +'%d-%b-%y %H:%M'",                                                       30,                     3},
    {"",        "next-prayer",                                                                  60,                     4},
    {"🕋 ",     "idate --simple",                                                               3600,                   5},
    {"moon ",   "sb-moonphase",                                                                 3600,                   6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ❮ ";
static unsigned int delimLen = 5;

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/      /*Command*/     /*Update Interval*/  /*Update Signal*/
    {"",          "s-music",        0,                   11      },
    {"",          "s-uppackages",   0,                   8       },
    {"",          "s-news",         0,                   6       },
    {"",          "s-weather",      18000,               5       },
    {"",          "s-memory",       8,                   14      },
    {"",          "s-cpu",          10,                  13      },
    {"",          "s-audiovol",     0,                   10      },
    {"",          "s-network",      5,                   4       },
    {"",          "s-battery",      10,                  7       },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

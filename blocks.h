//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
#ifdef LAPTOP
    {"🔋 ", "cat /sys/class/power_supply/BAT0/capacity", 30, 0 },
    {"🔊 ", "pulsemixer --get-mute --get-volume | awk 'NR==1 && /1/ { print \"x\"; exit } NR==2 { print $1 }'", 30, 1},
#endif
    {"", "date '+%a, %b %d %H:%M'",					                       5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    ";
static unsigned int delimLen = 5;

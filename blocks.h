//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Volume: ", 	"alsa.sh",		1,			0},
	{"Weather: ",	"currentweather.sh",	1,			0},
	{"",		"spotifytrack.sh",	1,			0},
	{"/dev/sda3 usage: ", "df -h | grep \"/dev/sda3\" | awk '{print $3\"/\"$2\", \"$5}'",	1,		0},
	{"Mem: ", 	"memoryusage.sh",	1,			0},
	{"CPU: ", "echo $[100-$(vmstat 1 2|tail -1|awk '{print $15}')]%",	1,		0},
	{"", 		"date '+%b %d (%a) %I:%M%p'",		60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

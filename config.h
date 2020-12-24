//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"📣: ", 	"alsa.sh",		250,			0},
	{"☁️: ",		"currentweather.sh",	3600000,		0},
	{"🏠: ", 	"diskusagehome.sh",	2500,			0},
	{"🖥: ",	"diskusageroot.sh",	2500,			0},
	{"🔋: ",	"batterylevel.sh",	1000,			0},
	{"🧠: ", 	"memoryusage.sh",	1000,			0},
	{"⚡: ", 	"cpuusage.sh",		1000,			0},
	{"📅: ",	"datetime.sh",		60000,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
static unsigned int delimLen = 5;

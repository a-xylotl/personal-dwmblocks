//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"pulse.sh",		250,			0},
//	{"☁: ",		"currentweather.sh",	60000,			0},
	{"🏠: ", 	"diskusagehome.sh",	1000,			0},
	{"💾: ",	"diskusageroot.sh",	1000,			0},
//	{"",		"batterylevel.sh",	7500,			0},
	{"➕: ", 	"memoryusage.sh",	1500,			0},
	{"⚡: ", 	"cpuusage.sh",		1500,			0},
	{"📅: ",	"datetime.sh",		60000,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

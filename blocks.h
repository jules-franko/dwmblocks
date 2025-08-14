//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "st_calcurse",					500,            0},
	//{"", "st_pacpackages",					150,            8},
	//{"", "lukeweather",					18000,          0},
	//{"", "st_torrent",					20,             0},
	{"", "getvolume",					0,              10},
	{"", "showmpdsong",					0,              11},
	{"", "rssstatus",					150,            15},
	{"", "newmail",						150,            12},
	//{"", "st_lukeinternet",					5,              0},
	//{"", "networktrafficst",				15,             0},
	//{"", "cpubars",						1,		0},
	//{"", "cputemp",						100,		0},
	{"", "st_memory",					1,		0},
	//{"", "diskspacestatus",					200,		0},
	//{"", "batterystatus",					50,		0},
	//{"", "phone_battery.sh",				200,		0},
	{"", "date '+%a %b %d, %Y'",				500,		0},
	{"", "date '+%I:%M%p '",					20,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "]  [";
static unsigned int delimLen = 5;

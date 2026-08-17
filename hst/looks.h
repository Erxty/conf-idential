static char *font = "Sony fixed:pixelsize=12:antialias=false";
static int borderpx = 15;

static const char *colorname[] = {

/* order:
	black
	red
	green
	yellow
	blue
	magenta
	cyan
	white
*/

	/* 8 normals */
	"#000000",
	"#c34043",
	"#76946a",
	"#c0a36e",
	"#7e9cd8",
	"#957fb8",
	"#6a9589",
	"#efefef",

	/* 8 bright */
	"#727169",
	"#e82424",
	"#98bb6c",
	"#e6c384",
	"#7fb4ca",
	"#938aa9",
	"#7aa89f",
	"#dcd7ba",


	/* extra colours need to be added after this */
	[255] = 0,

	/* background and foreground */

	"#0d0d0d",
	"#c8c093",
};

/* default colours to use
	background
	foreground
	cursor
	reverse cursor
*/

unsigned int defaultbg = 256;
unsigned int defaultfg = 257;
unsigned int defaultcs = 256;
unsigned int defaultrcs = 257;

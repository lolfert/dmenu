/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[]          = { "IBM 3270:size=13", "micon:size=13" };

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_bg[]          = "#050505";
static const char col_bg_f[]        = "#121212";
static const char col_br_f[]        = "#34344B";
static const char col_fg[]          = "#bbbbbb";
static const char col_fg_f[]        = "#eeeeee";

static const char col_cyan[]        = "#37BDB9";
static const char col_magenta[]     = "#894BA4";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_fg, col_bg },
	[SchemeSel] = { col_fg, col_bg_f },
	[SchemeOut] = { col_fg, col_bg_f }
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 54;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */

static const char *fonts[]              = { "monospace:size=14:antialias=true" };

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_davys_grey[]      = "#50514F";
static const char col_cambridge_blue[]  = "#B5CBB7";
static const char col_crimson[]         = "#D7263D";
static const char col_glaucous[]        = "#7A89C2";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_cambridge_blue, col_davys_grey },
	[SchemeSel] = { col_davys_grey,  col_cambridge_blue },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

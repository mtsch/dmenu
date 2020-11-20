/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -n  option; if 1, dmenu returns instantly */
static int instant = 0;
/* -b  option; if 0, dmenu appears at bottom */
static int topbar = 1;
/* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int fuzzy = 1;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "UbuntuMono Nerd Font:pixelsize=17:antialias=true:autohint=true"
};
/* -p  option; prompt to the left of input field */
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
	/*             fg           bg       */
	[SchemeNorm] = {"#839496", "#002b36"},
	[SchemeSel] =  {"#002b36", "#cb4b16"},
	[SchemeOut] =  {"#000000", "#00ffff"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

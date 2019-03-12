
// convert from UTF-8 and UTF-16 (WCHAR_T) and vice-versa
// works as junk_iconv() and has same argument strucutre
int win_charset_conv (const void *in, int inlen, void *out, int outlen, const char *cs_in, const char *cs_out);

// path_short converts path to DOS path (8.3 naming, ASCII)
int path_short(const char * path_in, char * path_out, int len);

// path_long expands given path
int path_long(const char * path_in, char * path_out, int len);
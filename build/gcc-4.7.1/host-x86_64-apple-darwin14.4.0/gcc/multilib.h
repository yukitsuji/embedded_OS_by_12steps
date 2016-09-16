static const char *const multilib_raw[] = {
". !mh !ms !msx !mn !mint32;",
"h8300h mh !ms !msx !mn !mint32;",
"h8300s !mh ms !msx !mn !mint32;",
"h8sx !mh !ms msx !mn !mint32;",
"h8300h/normal mh !ms !msx mn !mint32;",
"h8300h/int32 mh !ms !msx !mn mint32;",
"h8300h/normal/int32 mh !ms !msx mn mint32;",
"h8300s/normal !mh ms !msx mn !mint32;",
"h8300s/int32 !mh ms !msx !mn mint32;",
"h8300s/normal/int32 !mh ms !msx mn mint32;",
"h8sx/normal !mh !ms msx mn !mint32;",
"h8sx/int32 !mh !ms msx !mn mint32;",
"h8sx/normal/int32 !mh !ms msx mn mint32;",
NULL
};

static const char *const multilib_matches_raw[] = {
"mh mh;",
"ms ms;",
"msx msx;",
"mn mn;",
"mint32 mint32;",
NULL
};

static const char *multilib_extra = "";

static const char *const multilib_exclusions_raw[] = {
NULL
};

static const char *multilib_options = "mh/ms/msx mn mint32";

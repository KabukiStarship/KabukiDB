#include "../kabuki.toolkit/_seams.inl"

#define KABUKI_DB_FOO SEAM_N
#define KABUKI_DB_BAR SEAM_N + 1
#undef SEAM_N
#define SEAM_N KABUKI_DB_BAR

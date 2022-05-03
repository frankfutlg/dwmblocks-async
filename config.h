#define CMDLENGTH 45
#define DELIMITER " | "

const Block blocks[] = {
	BLOCK("sb-cpu",     1,    1),
	BLOCK("sb-ram",     1,    2),
	BLOCK("sb-vol",     0,    3),
	BLOCK("sb-date",    0,    4),
	BLOCK("sb-time",    0,    5)
};

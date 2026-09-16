if ~ definite CONSTANTS_INC
	CONSTANTS_INC = 1

	include './enum.inc'

	NEWLINE = 10
	ERR_SUCCESS = 0
	BRAND_LINUX = 3

	enum FNO_HANDLE
		item STDIN_FNO
		item STDOUT_FNO
		item STDERR_FNO
	FNO_HANDLE

end if ; CONSTANTS_INC

if ~ definite CONSTANTS_INC
	CONSTANTS_INC = 1

	include 'include/constants/enum.inc'

	NEWLINE = 10
	ERR_SUCCESS = 0
	BRAND_LINUX = 3

	enum FNO_HANDLE
		item STDIN_FNO,  0
		item STDOUT_FNO, 1
		item STDERR_FNO, 2
	FNO_HANDLE

end if ; CONSTANTS_INC

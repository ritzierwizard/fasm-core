if ~ defined CONSTANTS_INC | defined defined_CONSTANTS_INC
	CONSTANTS_INC: defined_CONSTANTS_INC = 1

	; CONSTANTS
	endl = 10
	SYS_write = 1
	SYS_exit = 60
	STDIN = 0
	STDOUT = 1
	ERR_SUCCESS = 0
	BRAND_LINUX = 3
end if ; CONSTANTS_INC

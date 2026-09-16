if ~ definite BASIC_INC
	BASIC_INC = 1

	include './constants/constants.inc'
	include './registers.inc'
	include './syscalls.inc'
	include './strings.inc'

	macro write str*
		syscall3 SYS_write, STDOUT, str.buf, str.len
	end macro

	macro exit code*
		syscall1 SYS_exit, code
	end macro
end if ; BASIC_INC

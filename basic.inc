if ~ defined BASIC_INC | defined defined_BASIC_INC
	BASIC_INC: defined_BASIC_INC = 1

	include './constants.inc'
	include './registers.inc'
	include './syscalls.inc'

	macro write str*, len*
		syscall3 SYS_write, STDOUT, str, len
	end macro

	macro exit code*
		syscall1 SYS_exit, code
	end macro
end if

if ~ definite BASIC_INC
	BASIC_INC = 1

	include 'include/constants/constants.inc'
	include 'include/registers.inc'
	include 'include/syscalls.inc'
	include 'include/strings.inc'

	macro write str*
		syscall3 SYS_write, STDOUT_FNO, str.buf, str.len
	end macro

	macro exit code*
		syscall1 SYS_exit, code
	end macro
end if ; BASIC_INC

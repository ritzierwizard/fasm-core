; include 'include/ifdef.inc' in the main assembly file before anything else
ifndef BASIC_INC
include './constants.inc'
include './registers.inc'
include './syscalls.inc'

macro write str*, len*
	syscall3 SYS_write, STDOUT, str, len
end macro

macro exit code*
	syscall1 SYS_exit, code
end macro
endif ; BASIC_INC

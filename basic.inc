include 'constants.inc'
include 'registers.inc'
include 'syscalls.inc'
include 'strings.inc'

macro writeln str*, len*
	syscall3 REG_RETURN_64, SYS_write, STDOUT, str, len
end macro

macro exit code*
	syscall1 REG_RETURN_64, SYS_exit, code
end macro

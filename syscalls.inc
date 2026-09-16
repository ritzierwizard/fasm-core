if ~ defined SYSCALLS_INC | defined defined_SYSCALLS_INC
	SYSCALLS_INC: defined_SYSCALLS_INC = 1

	macro syscall1 code*, arg1*
	mov REG_RETURN_64, code
	mov REG_PARAM_1_64, arg1
	syscall
	end macro

	macro syscall2 code*, arg1*, arg2*
		mov REG_RETURN_64, code
		mov REG_PARAM_1_64, arg1
		mov REG_PARAM_2_64, arg2
		syscall
	end macro

	macro syscall3 code*, arg1*, arg2*, arg3*
		mov REG_RETURN_64, code
		mov REG_PARAM_1_64, arg1
		mov REG_PARAM_2_64, arg2
		mov REG_PARAM_3_64, arg3
		syscall
	end macro
end if ; SYSCALLS_INC

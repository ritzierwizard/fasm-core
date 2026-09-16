if not defined SYSCALLS_INC
	SYSCALLS_INC = 1

	macro syscall1 reg*, code*, arg1*
		if reg eq REG_RETURN_32
			mov REG_RETURN_32, code
			mov REG_PARAM_1_32, arg1
			syscall
		else if reg eq REG_RETURN_64
			mov REG_RETURN_64, code
			mov REG_PARAM_1_64, arg1
			syscall
		end if
	end macro

	macro syscall2 reg*, code*, arg1*, arg2*
		if reg eq REG_RETURN_32
			mov REG_RETURN_32, code
			mov REG_PARAM_1_32, arg1
			mov REG_PARAM_2_32, arg2
			syscall
		else if reg eq REG_RETURN_64
			mov REG_RETURN_64, code
			mov REG_PARAM_1_64, arg1
			mov REG_PARAM_2_64, arg2
			syscall
		end if
	end macro

	macro syscall3 reg*, code*, arg1*, arg2*, arg3*
		if reg eq REG_RETURN_32
			mov REG_RETURN_32, code
			mov REG_PARAM_1_32, arg1
			mov REG_PARAM_2_32, arg2
			mov REG_PARAM_3_32, arg3
			syscall
		else if reg eq REG_RETURN_64
			mov REG_RETURN_64, code
			mov REG_PARAM_1_64, arg1
			mov REG_PARAM_2_64, arg2
			mov REG_PARAM_3_64, arg3
			syscall
		end if
	end macro
end if ; SYSCALLS_INC

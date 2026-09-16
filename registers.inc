if not defined REGISTERS_INC
	REGISTERS_INC = 1

	; syscall numbers: /usr/src/linux/include/asm-x86_64/unistd.h
	; parameters order:
	; r9	; 6th param
	; r8	; 5th param
	; r10	; 4th param
	; rdx	; 3rd param
	; rsi	; 2nd param
	; rdi	; 1st param
	; eax	; syscall_number
	; syscall

	; LINUX X86_64 REGISTERS
	; all other parameters are pushed onto the stack
	REG_RETURN_64  equ rax
	REG_PARAM_1_64 equ rdi
	REG_PARAM_2_64 equ rsi
	REG_PARAM_3_64 equ rdx
	REG_PARAM_4_64 equ r10
	REG_PARAM_5_64 equ r8
	REG_PARAM_6_64 equ r9

	REG_RETURN_32  equ eax
	REG_PARAM_1_32 equ edi
	REG_PARAM_2_32 equ esi
	REG_PARAM_3_32 equ edx
	REG_PARAM_4_32 equ r10d
	REG_PARAM_5_32 equ r8d
	REG_PARAM_6_32 equ r9d

	REG_SCRATCH_64 equ r11
	REG_SCRATCH_32 equ r11d
end if ; REGISTERS_INC

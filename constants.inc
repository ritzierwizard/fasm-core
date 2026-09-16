if ~ defined CONSTANTS_INC | defined defined_CONSTANTS_INC
	CONSTANTS_INC: defined_CONSTANTS_INC = 1

	; CONSTANTS
	SYS_read           = 0 ; man 2 read
	SYS_write          = 1 ; man 2 write
	SYS_open           = 2 ; man 2 open
	SYS_close          = 3 ; man 2 close
	SYS_stat           = 4 ; man 2 stat
	SYS_fstat          = 5 ; man 2 fstat
	SYS_lstat          = 6 ; man 2 lstat
	SYS_poll           = 7 ; man 2 poll
	SYS_lseek          = 8 ; man 2 lseek
	SYS_mmap           = 9 ; man 2 mmap
	SYS_mprotect       = 10 ; man 2 mprotect
	SYS_munmap         = 11 ; man 2 munmap
	SYS_brk            = 12 ; man 2 brk
	SYS_rt_sigaction   = 13 ; man 2 rt_sigaction
	SYS_rt_sigprocmask = 14 ; man 2 rt_sigprocmask
	SYS_rt_sigreturn   = 15 ; man 2 rt_sigreturn
	SYS_ioctl          = 16 ; man 2 ioctl
	SYS_pread64        = 17 ; man 2 pread64
	SYS_pwrite64       = 18 ; man 2 pwrite64
	SYS_readv          = 19 ; man 2 readv
	SYS_writev         = 20 ; man 2 writev
	SYS_access         = 21 ; man 2 access
	SYS_pipe           = 22 ; man 2 pipe
	SYS_select         = 23 ; man 2 select
	SYS_sched_yield    = 24 ; man 2 sched_yield
	SYS_mremap         = 25 ; man 2 mremap
	SYS_msync          = 26 ; man 2 msync
	SYS_mincore        = 27 ; man 2 mincore
	SYS_madvise        = 28 ; man 2 madvise
	SYS_shmget         = 29 ; man 2 shmget
	SYS_shmat          = 30 ; man 2 shmat
	SYS_shmctl         = 31 ; man 2 shmctl
	SYS_dup            = 32 ; man 2 dup
	SYS_dup2           = 33 ; man 2 dup2
	; TODO: finish linux syscall enumeration
	SYS_exit = 60
	endl = 10
	STDIN = 0
	STDOUT = 1
	ERR_SUCCESS = 0
	BRAND_LINUX = 3
end if ; CONSTANTS_INC

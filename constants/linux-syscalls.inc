if ~ definite LINUX_SYSCALLS_INC
	LINUX_SYSCALLS_INC = 1

	include './enum.inc'

	enum LINUX_SYSCALLS
		item SYS_read  ; man 2 read
		item SYS_write  ; man 2 write
		item SYS_open  ; man 2 open
		item SYS_close  ; man 2 close
		item SYS_stat  ; man 2 stat
		item SYS_fstat  ; man 2 fstat
		item SYS_lstat  ; man 2 lstat
		item SYS_poll  ; man 2 poll
		item SYS_lseek  ; man 2 lseek
		item SYS_mmap  ; man 2 mmap
		item SYS_mprotect ; man 2 mprotect
		item SYS_munmap ; man 2 munmap
		item SYS_brk ; man 2 brk
		item SYS_rt_sigaction ; man 2 rt_sigaction
		item SYS_rt_sigprocmask ; man 2 rt_sigprocmask
		item SYS_rt_sigreturn ; man 2 rt_sigreturn
		item SYS_ioctl ; man 2 ioctl
		item SYS_pread64 ; man 2 pread64
		item SYS_pwrite64 ; man 2 pwrite64
		item SYS_readv ; man 2 readv
		item SYS_writev ; man 2 writev
		item SYS_access ; man 2 access
		item SYS_pipe ; man 2 pipe
		item SYS_select ; man 2 select
		item SYS_sched_yield ; man 2 sched_yield
		item SYS_mremap ; man 2 mremap
		item SYS_msync ; man 2 msync
		item SYS_mincore ; man 2 mincore
		item SYS_madvise ; man 2 madvise
		item SYS_shmget ; man 2 shmget
		item SYS_shmat ; man 2 shmat
		item SYS_shmctl ; man 2 shmctl
		item SYS_dup ; man 2 dup
		item SYS_dup2 ; man 2 dup2
		item SYS_pause ; man 2 pause
		item SYS_nanosleep ; man 2 nanosleep
		item SYS_getitimer ; man 2 getitimer
		item SYS_alarm ; man 2 getalarm
		item SYS_setitimer ; man 2 setitimer
		item SYS_getpid ; man 2 getpid
		item SYS_sendfile ; man 2 sendfile
		item SYS_socket ; man 2 socket
		item SYS_connect ; man 2 connect
		item SYS_accept ; man 2 accept
		item SYS_sendto ; man 2 sendto
		item SYS_recvfrom ; man 2 recvfrom
		item SYS_sendmsg ; man 2 sendmsg
		item SYS_recvmsg ; man 2 recvmsg
		item SYS_shutdown ; man 2 shutdown
		item SYS_bind ; man 2 bind
		item SYS_listen ; man 2 listen
		item SYS_getsockname ; man 2 getsockname
		item SYS_getpeername ; man 2 getpeername
		item SYS_socketpair ; man 2 socketpair
		item SYS_setsockopt ; man 2 getsockopt
		item SYS_getsockopt ; man 2 setsockopt
		item SYS_clone ; man 2 clone
		item SYS_fork ; man 2 fork
		item SYS_vfork ; man 2 vfork
		item SYS_execve ; man 2 execve
		item SYS_exit ; man 2 exit
		item SYS_wait4
		item SYS_kill
		item SYS_uname
		item SYS_semget
		item SYS_semop
		item SYS_semctl
		item SYS_shmdt
		item SYS_msgget
		item SYS_msgsnd
		item SYS_msgrcv
		item SYS_msgctl
		item SYS_fcntl
		item SYS_flock
		item SYS_fsync
		item SYS_fdatasync
		item SYS_truncate
		item SYS_ftruncate
		item SYS_getdents
		item SYS_getcwd
		item SYS_chdir
		item SYS_fchdir
		item SYS_rename
		item SYS_mkdir
		item SYS_rmdir
		item SYS_creat
		item SYS_link
		item SYS_unlink
		item SYS_symlink
		item SYS_readlink
		item SYS_chmod
		item SYS_fchmod
		item SYS_chown
		item SYS_fchown
		item SYS_lchown
		item SYS_umask
		item SYS_gettimeofday
		item SYS_getrlimit
		item SYS_getrusage
		item SYS_sysinfo
		item SYS_times
	LINUX_SYSCALLS
	
end if ; LINUX_SYSCALLS_INC

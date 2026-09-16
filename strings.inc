ifndef STRINGS_INC
struc string_t str_data&
	.data db str_data
	.len  = $ - .data
end struc

struc zstring_t str_data&
	.data db str_data,0
	.len = $ - .data
end struc

struc dstring_t str_data&
	.data db str_data
	.len  dq $ - .data
end struc
endif ; STRINGS_INC

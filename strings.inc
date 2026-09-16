if not defined STRINGS_INC
	STRINGS_INC = 1

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
end if ; STRINGS_INC

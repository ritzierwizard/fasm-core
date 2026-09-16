if ~ definite STRINGS_INC
	include './type.inc'
	STRINGS_INC = 1

	struc string_t str_data&
		.buf db str_data
		.len = $ - .buf
	end struc

	struc zstring_t str_data&
		.buf db str_data,0
		.len = $ - .buf
	end struc

	struc dstring_t str_data&
		.buf db str_data
		.len dq $ - .buf
	end struc

	macro DEF_string name*, struc_t*, str_data&
		name struc_t str_data
		name@type = TYPE_string_t
	end macro
end if ; STRINGS_INC

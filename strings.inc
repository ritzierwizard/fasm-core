struc string_t str_data&
	.data  db str_data
	.len  = $ - .data
end struc

struc zstring_t str_data&
	.data  db str_data,0
	.len = $ - .data
end struc

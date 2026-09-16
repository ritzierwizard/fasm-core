if ~ definite ENUM_INC
	ENUM_INC = 1

	macro enum enclosing
		counter = 0
		macro item name
			name := counter
			counter = counter + 1
		end macro
		macro enclosing
			purge item, enclosing
		end macro
	end macro
end if ; ENUM_INC

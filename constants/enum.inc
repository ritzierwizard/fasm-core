if ~ definite ENUM_INC
	ENUM_INC = 1

	macro enum enclosing
		counter = 0
		macro item name, value:counter
			name := value
			counter = value + 1
		end macro
		macro enclosing
			purge item, enclosing, counter
		end macro
	end macro
end if ; ENUM_INC

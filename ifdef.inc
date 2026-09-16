; --- define the helper (once, near the top) ---
define IFDEF_INC 1
if_true  equ if 1
if_false equ if 0
macro endif
	end if
end macro

calminstruction ifdef? sym*
	match   sym.name, sym, .
	jno     error
	match   sym.equ,  sym, .
	jyes    true
	check   defined sym
	jyes    true
true:
	assemble if_true
	exit
error:
	err     'not a name'
false:
	assemble if_false
end calminstruction

calminstruction ifndef? sym*
	match   sym.name, sym, .
	jno     error
	match   sym.equ,  sym, .
	jyes    true
	check   defined sym
	jno     false
false:
	assemble if_true
	exit
error:
	err     'not a name'
true:
	assemble if_false
end calminstruction

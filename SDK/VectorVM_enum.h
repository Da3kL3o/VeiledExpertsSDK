// Enum VectorVM.EVectorVMOp
enum class FEVectorVMOp : uint8 {
	done
	add
	sub
	mul
	div
	mad
	lerp
	rcp
	rsq
	sqrt
	neg
	abs
	exp
	exp2
	log
	log2
	sin
	cos
	tan
	asin
	acos
	atan
	atan2
	ceil
	floor
	fmod
	frac
	trunc
	clamp
	min
	max
	pow
	round
	sign
	step
	random
	noise
	cmplt
	cmple
	cmpgt
	cmpge
	cmpeq
	cmpneq
	select
	addi
	subi
	muli
	divi
	clampi
	mini
	maxi
	absi
	negi
	signi
	randomi
	cmplti
	cmplei
	cmpgti
	cmpgei
	cmpeqi
	cmpneqi
	bit_and
	bit_or
	bit_xor
	bit_not
	bit_lshift
	bit_rshift
	logic_and
	logic_or
	logic_xor
	logic_not
	f2i
	i2f
	f2b
	b2f
	i2b
	b2i
	inputdata_32bit
	inputdata_noadvance_32bit
	outputdata_32bit
	acquireindex
	external_func_call
	exec_index
	noise2D
	noise3D
	enter_stat_scope
	exit_stat_scope
	update_id
	acquire_id
	NumOpcodes
};

// Enum VectorVM.EVectorVMOperandLocation
enum class FEVectorVMOperandLocation : uint8 {
	Register
	Constant
	Num
	EVectorVMOperandLocation_MAX
};

// Enum VectorVM.EVectorVMBaseTypes
enum class FEVectorVMBaseTypes : uint8 {
	Float
	Int
	Bool
	Num
	EVectorVMBaseTypes_MAX
};


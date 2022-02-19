// raspberyy pi stuff
//  rpi 4 1.5Ghz every 1/1.5 billionth of a second, executre 2gb -8gb

// 4gb = 2**32
// why 64bit? AARCH 64 has
// 1. Diviasion --> call a function
// 2. hardware acceleration for encryption
// 3. other speciality instructions

// ssh...
// https://
//  principle of loacality: we tend to read the same memory a lot

// CMOS - technology used to implement current circuits
// NAND NOR
//  CISC complex intruction set computer/
// RISC reduced instruction set computer
// register is the fastest memory that a computer has
//  memory is arrange in a rectangle (rows, cols)
// latebcy is nmuch higher if we go to a new place
//  computer: cpu central processing unit
//  cache fast memory to make it faster to re-read data
//  L1: 32k
//  L2: 2M
//  L3 16M hit rate % of time cache is hit; problems with cache, you cant cache
//  everything
// AARCH64 all integer registers are 64 bits
// pc: program counter, this is where your coed is
// sp stacl pointer (where your data is for fucntions)
// lr link register, faster function calls

.global main  // export this system
    main : mov x0,
# 0 // x0 =0
    mov x1,
# 7              // x1=7 all thgese instruction sets are 32 bits
    mov x2.#255  // limited to 8 bits (but with a shift)
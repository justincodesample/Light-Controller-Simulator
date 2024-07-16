==104== Memcheck, a memory error detector
==104== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==104== Using Valgrind-3.19.0 and LibVEX; rerun with -h for copyright info
==104== Command: ./main
==104==
The living room light color is White.
The bedroom light brightness is 0.
LivingRoom's color has been set to Yellow.
The living room light color is Yellow.
Bedroom's brightness has been set to 80.
The bedroom light brightness is 80.
RemoveLight Test
LivingRoom has been removed from the controller.
Bathroom has been removed from the controller.
Bedroom has been removed from the controller.
Incorect Input Test
Pass
Remove Non Existing Object Test
Pass
==104==
==104== HEAP SUMMARY:
==104==     in use at exit: 0 bytes in 0 blocks
==104==   total heap usage: 8 allocs, 8 frees, 74,000 bytes allocated
==104==
==104== All heap blocks were freed -- no leaks are possible
==104==
==104== For lists of detected and suppressed errors, rerun with: -s
==104== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
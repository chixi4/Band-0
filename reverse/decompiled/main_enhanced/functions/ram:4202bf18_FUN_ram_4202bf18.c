
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x4202bf36 */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_ram_4202bf18(undefined4 param_1,byte *param_2)

{
  if ((*param_2 < 0x2c) && (*(int *)(&DAT_ram_3c0f5300 + (uint)*param_2 * 4) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}


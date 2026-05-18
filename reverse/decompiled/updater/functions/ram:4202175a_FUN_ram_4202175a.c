
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202175a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(char *)(param_1 + 0x4c) != '\0') {
    uStack_24 = 0;
    iStack_2c = param_1;
    uStack_28 = param_3;
    FUN_ram_42079738(_DAT_ram_3c0758dc,8,&iStack_2c,0xc,0);
  }
                    /* WARNING: Could not recover jumptable at 0x420217a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x2c))(*(undefined4 *)(param_1 + 0x24),param_2,param_3,param_4);
  return;
}


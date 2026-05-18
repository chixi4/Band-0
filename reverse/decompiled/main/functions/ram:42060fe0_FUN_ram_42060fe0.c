
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42060fe0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_ram_3fcc538c == '\0') {
    thunk_FUN_ram_42092336(50000);
    thunk_FUN_ram_4209233c(10000000);
    thunk_FUN_ram_4209234a(15000);
    iVar1 = FUN_ram_420b5092(0x42075132);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_420b4a0e(0x420a2a40);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_ram_420b4c94();
    FUN_ram_42085098(0);
    FUN_ram_40393112();
    iVar1 = FUN_ram_4208430c(param_1);
    if ((iVar1 != 0) ||
       (((FUN_ram_4204f602(), _DAT_ram_3fcc5388 == 0 &&
         (iVar1 = FUN_ram_42048b76(1,0,"tion.",&DAT_ram_3fcc5388), iVar1 != 0)) ||
        (iVar1 = FUN_ram_42098862(), iVar1 != 0)))) {
      FUN_ram_42060f00();
      return iVar1;
    }
    DAT_ram_3fcc538c = '\x01';
  }
  return 0;
}


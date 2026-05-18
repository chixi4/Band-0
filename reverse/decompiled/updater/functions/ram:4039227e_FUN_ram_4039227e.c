
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039227e(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = 0x103;
    if (_DAT_ram_3fcb6720 != 0) {
      lVar2 = FUN_ram_40391212(0x103);
      FUN_ram_40391f4a();
      uVar1 = 0x103;
      if ((int)*param_1 == 0 && *(int *)((int)param_1 + 4) == 0) {
        *param_1 = lVar2 + CONCAT44(param_3,param_2);
        *(undefined4 *)(param_1 + 1) = 0;
        *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 0xc) & 0xff000000;
        FUN_ram_40391fc6(param_1,0);
        uVar1 = 0;
      }
      FUN_ram_40391f3a();
    }
    return uVar1;
  }
  return 0x102;
}


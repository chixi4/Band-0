
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203d09c(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4203c15c();
  if (iVar1 == 0) {
    uVar2 = 0x3001;
  }
  else if (param_1 < 3) {
    if (param_2 != 0) {
      if (param_1 == 0) {
        uVar2 = FUN_ram_4203bff0(param_2);
        return uVar2;
      }
      if (*(code **)(_DAT_ram_3fcdfb24 + 0x28c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4203d0de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(_DAT_ram_3fcdfb24 + 0x28c))(param_2);
        return uVar2;
      }
    }
    uVar2 = 0x102;
  }
  else {
    uVar2 = 0x3004;
  }
  return uVar2;
}


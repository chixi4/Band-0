
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42041d66(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar3 = *param_1;
  if (iVar3 == 0) {
    return;
  }
  iVar1 = FUN_ram_42040e12();
  if (iVar1 == 0) {
    return;
  }
  if ((((param_5 == 0) || (param_5 == 0x4c)) || ((param_5 - 0x7eU & 0xffff) < 2)) &&
     ((DAT_ram_3fcb512c & 0xfd) == 4)) {
    iVar1 = (**(code **)(_DAT_ram_3fcb50e8 + 0x4c))
                      (param_2,param_3,param_4,param_5,4,*(code **)(_DAT_ram_3fcb50e8 + 0x4c));
    if (iVar1 == 0x4d) {
      iVar1 = 0x4d;
    }
    else {
      if (iVar1 == 0x301b) {
        return;
      }
      if (iVar1 != 0) goto LAB_ram_42041ec8;
      DAT_ram_3fcb5137 = (undefined1)param_4;
      iVar1 = 0;
    }
    if (param_4 != 1) {
      if (param_4 != 2) {
        return;
      }
      FUN_ram_42040fac(&DAT_ram_3fcb4f74,3,0);
      DAT_ram_3fcb5137 = 0;
      return;
    }
    if ((param_5 == 0x4c) || (uVar2 = 2, iVar1 == 0x4d)) {
      uVar2 = iVar1 << 0x10 | 1;
    }
    FUN_ram_4203331e(param_1,0xb0,uVar2);
    if (iVar1 == 0) {
      FUN_ram_42048fbe(2);
      iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
      if (iVar1 != 0) {
        (*(code *)&SUB_ram_40011ee4)();
      }
      if (param_5 == 0x4c) {
        return;
      }
      iVar3 = iVar3 + 4;
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar3);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar3);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar3,0x4202e0d2,0);
                    /* WARNING: Could not recover jumptable at 0x42041eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar3,2000,0);
      return;
    }
  }
LAB_ram_42041ec8:
  if (*(int *)(iVar3 + 0x98) != 2) {
    return;
  }
  FUN_ram_42040fac(&DAT_ram_3fcb4f74,0,0x600);
  return;
}


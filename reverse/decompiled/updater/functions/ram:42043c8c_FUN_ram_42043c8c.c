
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42043c8c(uint param_1)

{
  int iVar1;
  
  if (param_1 != 2) {
    if (param_1 < 3) {
      if (param_1 == 0) {
        FUN_ram_42033fd8(1,1,3,0x3c07e73c);
        FUN_ram_420439f6();
        if (*(code **)(_DAT_ram_3fcdfb24 + 0x27c) == (code *)0x0) {
          return 0;
        }
        (**(code **)(_DAT_ram_3fcdfb24 + 0x27c))();
        return 0;
      }
    }
    else if (param_1 != 3) {
      return 0x102;
    }
    iVar1 = FUN_ram_42043b60();
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1 == 1) {
      if (*(code **)(_DAT_ram_3fcdfb24 + 0x27c) != (code *)0x0) {
        (**(code **)(_DAT_ram_3fcdfb24 + 0x27c))();
      }
      goto LAB_ram_42043cc0;
    }
  }
  if (*(code **)(_DAT_ram_3fcdfb24 + 0x278) == (code *)0x0) {
    return 0x102;
  }
  iVar1 = (**(code **)(_DAT_ram_3fcdfb24 + 0x278))();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1 == 2) {
    FUN_ram_420439f6();
    FUN_ram_42033fd8(1,1,3,0x3c07e774,DAT_ram_3fcb5138,DAT_ram_3fcb5139,DAT_ram_3fcb513a,
                     DAT_ram_3fcb513b,DAT_ram_3fcb513c,DAT_ram_3fcb513d);
    return 0;
  }
  if (param_1 == 3) {
    FUN_ram_42033fd8(1,1,3,0x3c07e7a4,DAT_ram_3fcb513e,DAT_ram_3fcb513f,DAT_ram_3fcb5140,
                     DAT_ram_3fcb5141,DAT_ram_3fcb5142,DAT_ram_3fcb5143,DAT_ram_3fcb5138,
                     DAT_ram_3fcb5139,DAT_ram_3fcb513a,DAT_ram_3fcb513b,DAT_ram_3fcb513c,
                     DAT_ram_3fcb513d);
    return 0;
  }
  if (param_1 != 1) {
    return 0;
  }
LAB_ram_42043cc0:
  FUN_ram_42033fd8(1,1,3,0x3c07e748,DAT_ram_3fcb513e,DAT_ram_3fcb513f,DAT_ram_3fcb5140,
                   DAT_ram_3fcb5141,DAT_ram_3fcb5142,DAT_ram_3fcb5143);
  return 0;
}


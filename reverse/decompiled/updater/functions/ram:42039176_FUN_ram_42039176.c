
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42039176(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 < 0xc) {
    uVar2 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)((param_1 + 0x4c) * 4 + 0x3fcb4f78);
      uVar2 = 1;
      if (param_2 != iVar1) {
        if (iVar1 != 0) {
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
        }
        *(int *)((param_1 + 0x4c) * 4 + 0x3fcb4f78) = param_2;
        uVar2 = 1;
      }
    }
    return uVar2;
  }
  return 0;
}


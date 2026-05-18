
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42078026(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_ram_3fcb5174 == '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *_DAT_ram_3fcb36d4 = param_1;
    _DAT_ram_3fcb36d4 = (int *)(param_1 + 0x20);
    iVar1 = (*(code *)&SUB_ram_40011c5c)(5,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0x3012;
    }
  }
  else {
    (*(code *)&SUB_ram_40011fe8)();
    uVar2 = 0x3002;
  }
  return uVar2;
}


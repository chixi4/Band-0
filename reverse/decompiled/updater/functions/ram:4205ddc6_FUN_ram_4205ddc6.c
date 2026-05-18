
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205ddc6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  _DAT_ram_3fcb5f04 = 0;
  _DAT_ram_3fcb5f00 = 0x80a;
  iVar1 = FUN_ram_42039874(0x80a,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0x4204dd5a;
    uVar2 = 0;
  }
  else {
    FUN_ram_4205dda8();
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


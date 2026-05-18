
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42032ae8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_ram_42031998();
  iVar1 = _DAT_ram_3fcb6bb8;
  if (iVar2 == 0) {
    *(undefined4 *)(_DAT_ram_3fcb6bb8 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 6;
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203369c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((_DAT_ram_3fcb6bc4 == 0) &&
     (_DAT_ram_3fcb6bc4 = FUN_ram_403a5e02(1,0x88), _DAT_ram_3fcb6bc4 == 0)) {
    return;
  }
  iVar1 = _DAT_ram_3fcb6bc4;
  if (*(int *)(_DAT_ram_3fcb6bc4 + 0x40) == 0) {
    uVar2 = FUN_ram_403a5e02(1,0x130);
    *(undefined4 *)(iVar1 + 0x40) = uVar2;
    if (*(int *)(_DAT_ram_3fcb6bc4 + 0x40) == 0) {
      FUN_ram_403a5e1e(_DAT_ram_3fcb6bc4);
      _DAT_ram_3fcb6bc4 = 0;
      return;
    }
  }
  (**(code **)(_DAT_ram_3fcb6a44 + 0x4c))(_DAT_ram_3fcb6bc4 + 4,0);
  (**(code **)(_DAT_ram_3fcb6a44 + 0x3c))(_DAT_ram_3fcb6bc4);
  (*(code *)&SUB_ram_400119a0)
            (*(undefined4 *)(_DAT_ram_3fcb6bc4 + 0x40),_DAT_ram_3fcb6bc4 + 0x24,
             _DAT_ram_3fcb6bc4 + 8,1,0x130,"y view; hit the key point.");
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_4203cfb0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4203c15c();
  if (iVar1 == 0) {
    uVar3 = 0x3001;
  }
  else if (DAT_ram_3fcb5119 < 2) {
    uVar3 = 0x3002;
  }
  else {
    puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
    if (puVar2 != (undefined1 *)0x0) {
      *(undefined4 *)(puVar2 + 4) = 0x4202af2c;
      *puVar2 = 4;
      uVar3 = FUN_ram_4203b75a();
      return uVar3;
    }
    uVar3 = 0x101;
  }
  return uVar3;
}


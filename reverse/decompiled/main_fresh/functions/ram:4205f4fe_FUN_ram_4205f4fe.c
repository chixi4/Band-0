
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4205f4fe(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [28];
  
  iVar1 = FUN_ram_4205ca0a(4);
  if (iVar1 == 0) {
    FUN_ram_4204b6e8(auStack_20);
    uVar2 = FUN_ram_4039b0d6();
    FUN_ram_4205c3a4(uVar2,auStack_20);
    iVar1 = FUN_ram_4205c6a0(auStack_24,0);
    if (iVar1 != 0) {
      return -1;
    }
    FUN_ram_42051f8a(0x4204eb0a,auStack_24);
    FUN_ram_4205c742(auStack_24,0);
    thunk_FUN_ram_4205c682(auStack_24);
  }
  if ((_DAT_ram_3fcc5374 == 0) && (iVar1 = FUN_ram_4205c6a0(&DAT_ram_3fcc5374,0), iVar1 != 0)) {
    return -1;
  }
  if (_DAT_ram_3fcc5370 == 0) {
    iVar1 = FUN_ram_4205c6a0(&DAT_ram_3fcc5370,1);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42021614(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [28];
  
  iVar1 = FUN_ram_42059a60(4);
  if (iVar1 == 0) {
    FUN_ram_4201b720(auStack_20);
    uVar2 = FUN_ram_40398d1c();
    FUN_ram_4205949c(uVar2,auStack_20);
    iVar1 = FUN_ram_42059768(auStack_24,0);
    if (iVar1 != 0) {
      return -1;
    }
    FUN_ram_420506e8(0x42010e7e,auStack_24);
    FUN_ram_420597d0(auStack_24,0);
    thunk_FUN_ram_4205974a(auStack_24);
  }
  if ((_DAT_ram_3fcb6750 == 0) && (iVar1 = FUN_ram_42059768(&DAT_ram_3fcb6750,0), iVar1 != 0)) {
    return -1;
  }
  if (_DAT_ram_3fcb674c == 0) {
    iVar1 = FUN_ram_42059768(&DAT_ram_3fcb674c,1);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


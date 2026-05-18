
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42034868(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_68 [96];
  
  iVar1 = FUN_ram_42034594(3,0,0,0);
  if (iVar1 != -1) {
    iVar3 = *(int *)(_DAT_ram_3fcb6bc8 + 0x27c);
    if (iVar1 < iVar3) {
      FUN_ram_4039c11e(auStack_68,_DAT_ram_3fcb6bc8 + (iVar3 + 0x20) * 0x10 + 0xc,0x10);
      uVar2 = FUN_ram_420347f8(3,auStack_68);
      return uVar2;
    }
    if (iVar1 <= iVar3) {
      return 0;
    }
    iVar1 = FUN_ram_42034594(3,0,_DAT_ram_3fcb6bc8 + 0x21c);
    if (iVar1 != -1) {
      uVar2 = FUN_ram_42034788(3,iVar1);
      return uVar2;
    }
  }
  return 0x1c;
}


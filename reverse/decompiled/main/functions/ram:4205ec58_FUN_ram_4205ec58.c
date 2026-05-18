
undefined4 FUN_ram_4205ec58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_28;
  undefined1 auStack_24 [16];
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = 0x102;
  if ((iVar1 != 0) && (uVar2 = 0x5004, *(int *)(iVar1 + 0x40) != 1)) {
    iVar3 = *(int *)(iVar1 + 0x10);
    if ((iVar3 == 0) || ((*(byte *)(iVar3 + 0x39) & 1) == 0)) {
      *(undefined4 *)(iVar1 + 0x40) = 0;
      uVar2 = 0;
    }
    else {
      iVar4 = *(int *)(iVar1 + 8);
      FUN_ram_4039c11e(&uStack_28,iVar4,4);
      FUN_ram_4039c11e(auStack_24,iVar4 + 4);
      FUN_ram_42097fd8(*(undefined4 *)(iVar1 + 0x24),0x4204eb80,iVar1);
      FUN_ram_4209787e(*(undefined4 *)(iVar1 + 0x24),1,auStack_24,4);
      iVar3 = FUN_ram_42097fe6(*(undefined4 *)(iVar1 + 0x24),iVar3,uStack_28);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x500d;
      }
      *(uint *)(iVar1 + 0x40) = (uint)(iVar3 == 0);
    }
  }
  return uVar2;
}



undefined4 FUN_ram_4039525a(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iStack_14;
  
  iVar3 = *(int *)(param_1 + 0x48);
  uVar5 = 0;
  if (*(uint *)(iVar3 + 0x38) < *(uint *)(iVar3 + 0x3c)) {
    cVar1 = *(char *)(iVar3 + 0x45);
    iStack_14 = param_1;
    uVar5 = FUN_ram_403951b8(iVar3,&iStack_14,0);
    uVar2 = (uint)cVar1;
    if (uVar2 == 0xffffffff) {
      if ((*(int *)(iVar3 + 0x24) != 0) && (iVar3 = FUN_ram_40396680(iVar3 + 0x24), iVar3 != 0)) {
        uVar5 = 1;
      }
    }
    else {
      uVar4 = FUN_ram_40396256();
      if (uVar2 < uVar4) {
        *(char *)(iVar3 + 0x45) = (char)((uVar2 + 1) * 0x1000000 >> 0x18);
      }
    }
  }
  return uVar5;
}


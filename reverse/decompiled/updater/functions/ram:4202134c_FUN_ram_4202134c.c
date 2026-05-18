
undefined4 FUN_ram_4202134c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_40399d1a(1,0x54);
    *(int *)(iVar1 + 0x10) = iVar2;
    if (iVar2 == 0) goto LAB_ram_42021394;
  }
  if ((*(uint *)(iVar1 + 0x50) & 0x20) == 0) {
    iVar4 = *(int *)(iVar1 + 8);
    iVar2 = FUN_ram_420518c8(iVar2,iVar4,iVar4 + 4,iVar4 + 8,iVar1,*(undefined4 *)(iVar1 + 0x14),
                             0x420405e4);
    if (iVar2 == 0) {
      FUN_ram_42020eda(iVar1);
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x10);
      if ((*(int *)(iVar1 + 0x34) != 0) && (iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x40) = 0x42010dfc;
      }
      *(int *)(iVar2 + 0x1c) = iVar1;
    }
  }
LAB_ram_42021394:
  if ((*(uint *)(iVar1 + 0x50) & 8) != 0) {
    FUN_ram_4205598a(60000,0x42010f26,*(undefined4 *)(iVar1 + 0x10));
  }
  if ((*(uint *)(iVar1 + 0x50) & 4) != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x10);
    FUN_ram_420519f2();
    FUN_ram_42051b04(uVar3);
  }
  if ((*(uint *)(iVar1 + 0x50) & 2) == 0) {
    if (((*(uint *)(iVar1 + 0x50) & 1) == 0) || (*(int *)(iVar1 + 0x38) == 2)) {
      FUN_ram_4202109a(iVar1,1);
    }
    return 0;
  }
  return 0x106;
}


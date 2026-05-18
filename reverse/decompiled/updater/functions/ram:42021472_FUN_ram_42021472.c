
undefined4 FUN_ram_42021472(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = 0x103;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    FUN_ram_42051808(uVar2,iVar3,iVar3 + 4,iVar3 + 8);
    FUN_ram_420519f2(uVar2);
    FUN_ram_42051b04(uVar2);
    if (((*(uint *)(iVar1 + 0x50) & 1) == 0) || (*(int *)(iVar1 + 0x38) == 2)) {
      FUN_ram_4202109a(iVar1,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}


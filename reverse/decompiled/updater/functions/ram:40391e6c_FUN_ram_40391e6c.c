
bool FUN_ram_40391e6c(int param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  uVar1 = ~(*(uint *)(param_1 + 8) & 0xffc00);
  uVar3 = FUN_ram_40399fcc(iVar4,uVar1,5);
  uVar3 = uVar3 & uVar1;
  bVar2 = uVar3 == 0;
  if ((param_1 == *(int *)(iVar4 + 4)) &&
     (bVar2 = false, (uVar3 & *(uint *)(param_1 + 8) & 0x3ff) == 0)) {
    *(undefined1 *)(iVar4 + 8) = 0;
    bVar2 = true;
  }
  return bVar2;
}


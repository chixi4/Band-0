
void FUN_ram_42013f96(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 * 4 + 0x3fcb6670);
  uVar4 = *(uint *)(iVar3 + 0x2c);
  while (uVar4 != *(uint *)(iVar3 + 0x28)) {
    piVar2 = (int *)(*(int *)(iVar3 + 0x34) + uVar4 * 4);
    iVar1 = *piVar2 - param_2;
    *piVar2 = iVar1;
    uVar4 = uVar4 + 1 & -(uint)((int)(uVar4 + 1) < *(int *)(iVar3 + 0x30));
    if (iVar1 < 0) {
      *(uint *)(iVar3 + 0x2c) = uVar4;
    }
  }
  return;
}


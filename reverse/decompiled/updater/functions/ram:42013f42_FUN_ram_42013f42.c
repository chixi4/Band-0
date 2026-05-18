
void FUN_ram_42013f42(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 2) {
    FUN_ram_40394d60();
    iVar1 = *(int *)(gp + param_1 * 0x30 + -0x658);
    uVar2 = *(uint *)(*(int *)(param_1 * 4 + 0x3fcb6670) + 0x24) & 0x101;
    *(uint *)(iVar1 + 0x10) = uVar2;
    *(uint *)(iVar1 + 0xc) = uVar2 | *(uint *)(iVar1 + 0xc);
    FUN_ram_40394d8e();
    return;
  }
  return;
}


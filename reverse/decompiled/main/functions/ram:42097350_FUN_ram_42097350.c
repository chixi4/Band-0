
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42097350(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *extraout_a5;
  undefined1 auStack_11 [5];
  
  auStack_11[0] = 0;
  iVar1 = FUN_ram_4039c2c0(gp + -0x738 + param_1,auStack_11,1,5);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_ram_40394a58();
  puVar3 = &DAT_ram_600c0000;
  if (param_1 != 0) {
    if (param_1 == 1) {
      _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x40;
      uVar2 = _DAT_ram_600c0018 & 0xffffffbf;
      _DAT_ram_600c0018 = _DAT_ram_600c0018 | 0x40;
      goto LAB_ram_420973ae;
    }
    FUN_ram_4039bf1e();
    puVar3 = extraout_a5;
  }
  *(uint *)(puVar3 + 0x10) = *(uint *)(puVar3 + 0x10) | 2;
  *(uint *)(puVar3 + 0x18) = *(uint *)(puVar3 + 0x18) | 2;
  uVar2 = *(uint *)(puVar3 + 0x18) & 0xfffffffd;
LAB_ram_420973ae:
  *(uint *)(puVar3 + 0x18) = uVar2;
  FUN_ram_40394a68();
  return iVar1;
}


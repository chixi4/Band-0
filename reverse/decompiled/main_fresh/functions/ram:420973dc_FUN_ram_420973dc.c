
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420973dc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *extraout_a5;
  undefined1 uStack_11;
  
  uStack_11 = 1;
  iVar1 = FUN_ram_4039c2c0(gp + -0x738 + param_1,&uStack_11,0,5);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_ram_40394a58();
  puVar3 = &DAT_ram_600c0000;
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar2 = _DAT_ram_600c0010 & 0xffffffbf;
      goto LAB_ram_4209742c;
    }
    FUN_ram_4039bf1e();
    puVar3 = extraout_a5;
  }
  uVar2 = *(uint *)(puVar3 + 0x10) & 0xfffffffd;
LAB_ram_4209742c:
  *(uint *)(puVar3 + 0x10) = uVar2;
  FUN_ram_40394a68();
  return iVar1;
}


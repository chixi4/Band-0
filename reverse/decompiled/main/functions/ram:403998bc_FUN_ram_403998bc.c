
void FUN_ram_403998bc(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 auStack_24 [2];
  
  if (((param_2 | param_3) & 3) == 0) {
    FUN_ram_4039c11e(param_2,param_1 + 0x98);
    return;
  }
  uVar4 = param_3 + 3;
  for (uVar1 = 0; uVar4 >> 2 != uVar1; uVar1 = uVar1 + 1) {
    uVar3 = param_3;
    if (4 < param_3) {
      uVar3 = 4;
    }
    auStack_24[0] = *(undefined4 *)((uVar1 + 0x24) * 4 + param_1 + 8);
    iVar2 = FUN_ram_4039c11e(param_2,auStack_24,uVar3);
    param_2 = iVar2 + uVar3;
    param_3 = param_3 - uVar3;
  }
  return;
}


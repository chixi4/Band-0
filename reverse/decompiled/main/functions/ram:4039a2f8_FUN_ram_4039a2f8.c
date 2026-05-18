
void FUN_ram_4039a2f8(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint auStack_34 [4];
  
  puVar1 = (uint *)param_1[1];
  puVar1[7] = puVar1[7] & 0x3ffffff | 0x5c000000;
  puVar1[6] = puVar1[6] | 0x40000000;
  puVar1[1] = param_3 & 0xffffff | param_4 << 0x18;
  uVar4 = param_4 + 3;
  puVar1[6] = puVar1[6] & 0xdfffffff;
  for (iVar2 = 0; iVar2 < (int)(uVar4 >> 2); iVar2 = iVar2 + 1) {
    auStack_34[0] = 0;
    uVar3 = param_4;
    if (4 < param_4) {
      uVar3 = 4;
    }
    FUN_ram_4039c11e(auStack_34,param_2,uVar3);
    puVar1[iVar2 + 0x16] = auStack_34[0];
    param_4 = param_4 - uVar3;
    param_2 = param_2 + uVar3;
  }
  *puVar1 = *puVar1 | 0x2000000;
                    /* WARNING: Could not recover jumptable at 0x4039a37a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}


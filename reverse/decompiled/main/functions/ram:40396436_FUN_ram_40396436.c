
void FUN_ram_40396436(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int extraout_a5;
  uint *puVar4;
  
  puVar4 = (uint *)*param_1;
  uVar1 = 1 << (0x18U - param_2 & 0x1f);
  *puVar4 = ~uVar1 & *puVar4;
  uVar2 = (*(code *)param_1[2])(param_3,0);
  iVar3 = 0x4000000;
  if (0x3ffffff < uVar2) {
    uVar2 = FUN_ram_4039bf1e();
    iVar3 = extraout_a5;
  }
  puVar4[param_2 + 0xd] = iVar3 - 1U & uVar2 | puVar4[param_2 + 0xd] & 0xfc000000;
  puVar4 = (uint *)*param_1;
  puVar4[param_2 + 0x14] = 1;
  *puVar4 = uVar1 | *puVar4;
  return;
}


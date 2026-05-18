
void FUN_ram_4039490e(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)*param_1;
  uVar1 = 1 << (0x18U - param_2 & 0x1f);
  *puVar3 = ~uVar1 & *puVar3;
  uVar2 = (*(code *)param_1[2])(param_3,0);
  puVar3[param_2 + 0xd] = puVar3[param_2 + 0xd] & 0xfc000000 | uVar2 & 0x3ffffff;
  puVar3 = (uint *)*param_1;
  puVar3[param_2 + 0x14] = 1;
  *puVar3 = uVar1 | *puVar3;
  return;
}


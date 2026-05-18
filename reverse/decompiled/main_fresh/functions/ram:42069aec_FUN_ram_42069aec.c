
void FUN_ram_42069aec(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_3 >> 5;
  uVar5 = param_3 & 0x1f;
  if (param_2 < uVar3) {
LAB_ram_42069b00:
    (*(code *)&SUB_ram_40010488)(param_1,0,param_2 << 2);
    return;
  }
  if (uVar3 == param_2) {
    if (uVar5 != 0) goto LAB_ram_42069b00;
    if (param_3 < 0x20) {
      return;
    }
  }
  else if (param_3 < 0x20) goto LAB_ram_42069b14;
  puVar1 = param_1;
  for (uVar2 = 0; uVar4 = param_2 - uVar3, uVar2 < uVar4; uVar2 = uVar2 + 1) {
    *puVar1 = puVar1[uVar3];
    puVar1 = puVar1 + 1;
  }
  for (; uVar4 < param_2; uVar4 = uVar4 + 1) {
    param_1[uVar4] = 0;
  }
LAB_ram_42069b14:
  if (uVar5 == 0) {
    return;
  }
  puVar1 = param_1 + param_2;
  uVar3 = 0;
  while (param_1 != puVar1) {
    uVar2 = puVar1[-1];
    puVar1 = puVar1 + -1;
    *puVar1 = uVar2 >> uVar5 | uVar3;
    uVar3 = uVar2 << (0x20 - uVar5 & 0x1f);
  }
  return;
}



uint FUN_ram_42026168(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_ram_420260b2(*param_2,param_1);
  uVar1 = 0;
  for (uVar2 = 1; uVar2 < param_3; uVar2 = uVar2 + 1) {
    uVar4 = FUN_ram_420260a0(param_2[uVar2]);
    uVar1 = uVar1 | uVar4;
  }
  return uVar1 | ~uVar3;
}


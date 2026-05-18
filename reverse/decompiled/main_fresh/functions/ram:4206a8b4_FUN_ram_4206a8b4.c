
undefined4 FUN_ram_4206a8b4(int param_1,int param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = 0xffff9f00;
  if ((param_1 != 0) && (param_3 != (int *)0x0)) {
    uVar1 = (uint)*(byte *)(param_1 + (param_2 - 1U));
    *param_3 = param_2 - uVar1;
    uVar2 = FUN_ram_4206a610(param_2,uVar1);
    uVar3 = FUN_ram_4206a642(uVar1,0);
    uVar2 = ~uVar3 | uVar2;
    for (uVar3 = 0; uVar3 < param_2 - 1U; uVar3 = uVar3 + 1) {
      uVar4 = FUN_ram_4206a610(uVar3,param_2 - uVar1);
      uVar5 = FUN_ram_4206a5fe(*(undefined1 *)(param_1 + uVar3));
      uVar2 = uVar2 | ~uVar4 & uVar5;
    }
    *param_4 = uVar2;
    uVar6 = 0;
  }
  return uVar6;
}


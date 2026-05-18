
undefined4 FUN_ram_420270e0(int param_1,uint param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    uVar2 = 0xffff9f00;
  }
  else {
    uVar2 = 0xffff9f00;
    if (param_3 != (uint *)0x0) {
      uVar4 = 0;
      uVar1 = 0;
      while (*param_3 = uVar4, param_2 != 0) {
        uVar3 = FUN_ram_42026fc8(*(undefined1 *)(param_1 + (param_2 - 1)),0);
        uVar4 = ~(~uVar1 & uVar3) & uVar4 | param_2 & ~uVar1 & uVar3;
        uVar1 = uVar3 | uVar1;
        param_2 = param_2 - 1;
      }
      *param_4 = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}


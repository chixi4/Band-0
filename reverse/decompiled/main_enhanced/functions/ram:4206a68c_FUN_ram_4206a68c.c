
undefined4 FUN_ram_4206a68c(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 != 0) {
    uVar2 = 0xffff9f00;
    if (param_3 != (uint *)0x0) {
      uVar1 = 0xffffffff;
      uVar5 = 0xffffffff;
      *param_3 = 0;
      while (param_2 = param_2 - 1, -1 < (int)param_2) {
        uVar3 = FUN_ram_4206a5fe(*(undefined1 *)(param_1 + param_2));
        uVar6 = uVar5 & uVar3;
        *param_3 = ~uVar6 & *param_3 | uVar6 & param_2;
        uVar4 = FUN_ram_4206a642(*(undefined1 *)(param_1 + param_2),0x80);
        uVar1 = uVar1 & ~uVar6 | uVar4 & uVar6;
        uVar5 = uVar5 & ~uVar3;
      }
      *param_4 = uVar1;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffff9f00;
}


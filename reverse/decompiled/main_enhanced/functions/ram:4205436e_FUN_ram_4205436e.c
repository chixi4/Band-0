
undefined4 FUN_ram_4205436e(uint *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffa;
  }
  if (param_3 == (uint *)0x0) {
    uVar2 = 0xfffffffa;
  }
  else {
    if ((char)param_1[2] == '\0') {
      if (((*param_3 & 0xf0) == 0xe0) &&
         (iVar1 = FUN_ram_42053426(*(undefined1 *)((int)param_1 + 0x12)), iVar1 != 0))
      goto LAB_ram_420543b4;
      iVar1 = FUN_ram_4205b904(param_1,param_3);
    }
    else {
      iVar1 = FUN_ram_42053426();
    }
    if (iVar1 != 0) {
LAB_ram_420543b4:
      if ((*param_1 == 0) || (puVar3 = param_1, (*param_1 & 0xf0) == 0xe0)) {
        puVar3 = (uint *)(iVar1 + 4);
      }
      uVar2 = FUN_ram_4205425a(param_1,param_2,param_3,iVar1,puVar3);
      return uVar2;
    }
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}


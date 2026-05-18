
undefined4 FUN_ram_42062f3c(int param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uStack_18;
  uint uStack_14;
  
  if (param_1 != 0) {
    uVar1 = 0x102;
    if ((((param_3 != (uint *)0x0) && (*param_3 < 4)) && ((param_3[1] == 0xc || (param_3[1] == 0))))
       && (uVar1 = 0x102, param_2 < 5)) {
      FUN_ram_4204839a(*(undefined4 *)
                        (&DAT_ram_3c0faccc + (*(int *)(param_1 + 0x3c) * 5 + param_2) * 4));
      uStack_18 = *param_3;
      uStack_14 = param_3[1];
      if (uStack_14 == 0) {
        uStack_14 = 0xc;
      }
      FUN_ram_40396966();
      FUN_ram_42096f0a(param_1,&uStack_18,param_2);
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_ram_42096f18(param_1,param_2);
      }
      FUN_ram_40396994();
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0x102;
}


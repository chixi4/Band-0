
void FUN_ram_4202502c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iStack_1c;
  int *piStack_18;
  ushort uStack_14;
  undefined2 uStack_12;
  
  iStack_1c = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
  uStack_14 = (ushort)((int)param_3 >> 0x1f) | 1;
  uStack_12 = 1;
  piStack_18 = &iStack_1c;
  FUN_ram_42025020(param_1,param_2,&piStack_18);
  return;
}


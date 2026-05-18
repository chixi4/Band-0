
void FUN_ram_420685b4(undefined4 param_1,uint param_2)

{
  int iStack_1c;
  int *piStack_18;
  ushort uStack_14;
  undefined2 uStack_12;
  
  iStack_1c = ((int)param_2 >> 0x1f ^ param_2) - ((int)param_2 >> 0x1f);
  uStack_14 = (ushort)((int)param_2 >> 0x1f) | 1;
  uStack_12 = 1;
  piStack_18 = &iStack_1c;
  FUN_ram_42068514(param_1,&piStack_18);
  return;
}



undefined4 FUN_ram_42059e52(int param_1,int param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int aiStack_38 [2];
  int iStack_30;
  int iStack_2c;
  undefined1 uStack_28;
  
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    aiStack_38[0] = param_1;
    iStack_30 = param_2;
    iStack_2c = param_3;
    uStack_28 = param_4;
    uVar1 = FUN_ram_42059d54(0x4204b012,aiStack_38);
    return uVar1;
  }
  return 0xfffffff0;
}


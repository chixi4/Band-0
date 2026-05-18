
void FUN_ram_4039afce(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((param_1 & 7) == 0) {
    return;
  }
  uStack_14 = param_4;
  uStack_10 = param_5;
  uStack_c = param_6;
  uStack_8 = param_7;
  uStack_4 = param_8;
  iVar1 = FUN_ram_4204b4ea();
  if (iVar1 != 0) {
    (**(code **)(gp + -0x73c))(param_3,&uStack_14);
  }
  return;
}


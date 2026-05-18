
void FUN_ram_42057dd0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                     undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_a1;
  undefined4 extraout_a2;
  int extraout_a4;
  undefined4 extraout_a5;
  undefined4 extraout_a6;
  
  if (param_1 != 0) {
    if (param_4 != 0) goto LAB_ram_42057dec;
    do {
      FUN_ram_4039bf1e();
      param_2 = extraout_a1;
      param_3 = extraout_a2;
      param_5 = extraout_a4;
      param_6 = extraout_a5;
      param_7 = extraout_a6;
LAB_ram_42057dec:
    } while (param_5 == 0);
    uVar1 = FUN_ram_420523b8(param_2);
    iVar2 = FUN_ram_42057434(param_3,0,uVar1,param_6,param_7,0x14,0x8016);
    if (iVar2 != 0) {
      FUN_ram_4205735c(0,iVar2,param_4,param_5,param_1);
      return;
    }
  }
  return;
}


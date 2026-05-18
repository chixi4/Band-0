
void FUN_ram_42057dd0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                     undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar1 = FUN_ram_420523b8(param_2);
    iVar2 = FUN_ram_42057434(param_3,0,uVar1,param_6,param_7,0x14,0x8016);
    if (iVar2 == 0) {
      return;
    }
    FUN_ram_4205735c(0,iVar2,param_4,param_5,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}


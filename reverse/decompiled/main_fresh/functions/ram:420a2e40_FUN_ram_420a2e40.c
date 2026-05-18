
undefined4 FUN_ram_420a2e40(int param_1,int *param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (((param_2[2] != 0) && (*param_2 != 0)) && (param_2[1] != 0)) {
    FUN_ram_420aa2aa();
    FUN_ram_420a85a4(param_2[1]);
    iVar1 = FUN_ram_420aabda(*param_2,param_2[2],param_2[3]);
    if (iVar1 < 0) {
      FUN_ram_420a2c28(*(undefined4 *)(param_1 + 0x790),2,-iVar1);
      return 0x8015;
    }
    if (param_2[4] != 0) {
      iVar1 = FUN_ram_420a9096(param_2[1],param_2[4],param_2[5],param_2[6],param_2[7],
                               FUN_ram_42061778,param_1 + 0x27c);
      if (iVar1 < 0) {
        FUN_ram_420a2c28(*(undefined4 *)(param_1 + 0x790),2,-iVar1);
        return 0x8019;
      }
      iVar1 = FUN_ram_420a5674(param_1 + 0x3bc,*param_2,param_2[1]);
      if (-1 < iVar1) {
        return 0;
      }
      FUN_ram_420a2c28(*(undefined4 *)(param_1 + 0x790),2,-iVar1);
      return 0x8016;
    }
  }
  return 0x102;
}


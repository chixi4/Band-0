
int FUN_ram_420a31dc(undefined4 param_1,undefined4 param_2,int param_3,int param_4,
                    undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 == 0) || (param_4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  *(undefined4 *)(param_4 + 0x428) = *(undefined4 *)(param_4 + 0x768);
  iVar3 = param_4 + 0x27c;
  FUN_ram_420a564c(param_4);
  FUN_ram_420715a2(iVar3);
  iVar2 = param_4 + 0x3bc;
  FUN_ram_420a5a44(iVar2);
  FUN_ram_420735b4(param_4 + 0xd8);
  iVar1 = FUN_ram_4207160c(iVar3,0x420635f6,param_4 + 0xd8,0,0);
  if (iVar1 == 0) {
    FUN_ram_420a5660(iVar2,FUN_ram_42061778,iVar3);
    *(undefined4 *)(param_4 + 0x794) = *(undefined4 *)(param_3 + 0x60);
    if (*(int *)(param_4 + 0x78c) == 0) {
      iVar1 = FUN_ram_420a3054(param_1,param_2,param_3,param_4);
      if (iVar1 != 0) goto LAB_ram_420a3262;
      iVar1 = *(int *)(param_3 + 0x5c);
      if (iVar1 != 2) {
        if (iVar1 == 1) {
          *(undefined4 *)(param_4 + 0x3c0) = 0x303;
          *(undefined4 *)(param_4 + 0x3bc) = 0x303;
        }
        else if (iVar1 != 0) {
          iVar1 = 0x102;
          goto LAB_ram_420a3262;
        }
      }
    }
    else if (*(int *)(param_4 + 0x78c) == 1) {
      if (param_5 == (undefined4 *)0x0) {
        return 0x102;
      }
      iVar1 = (*(code *)*param_5)(param_3,param_4);
      if (iVar1 != 0) goto LAB_ram_420a3262;
    }
    iVar1 = FUN_ram_420a6fd0(param_4,iVar2);
    if (iVar1 == 0) {
      FUN_ram_420a5666(param_4,param_4 + 0x428,0x42097284,0x4209721a,0);
      return 0;
    }
    FUN_ram_420a2c28(*(undefined4 *)(param_4 + 0x790),2,-iVar1);
    iVar1 = 0x8017;
  }
  else {
    FUN_ram_420a2c28(*(undefined4 *)(param_4 + 0x790),2,-iVar1);
    iVar1 = 0x8011;
  }
LAB_ram_420a3262:
  FUN_ram_420a2fbc(param_4);
  return iVar1;
}


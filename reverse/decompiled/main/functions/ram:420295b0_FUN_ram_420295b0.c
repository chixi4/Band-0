
int FUN_ram_420295b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined1 *param_5)

{
  int iVar1;
  undefined4 auStack_34 [4];
  undefined1 auStack_21 [13];
  
  auStack_21[0] = 0;
  auStack_34[0] = param_4;
  if ((param_1 == 0xffff) || (iVar1 = FUN_ram_4202942c(param_1,1,param_2,auStack_21), iVar1 == 0)) {
    iVar1 = (**(code **)(param_2 + 0xc))
                      (param_1,*(undefined2 *)(param_2 + 10),1,param_3,auStack_34,
                       *(undefined4 *)(param_2 + 0x10),*(code **)(param_2 + 0xc));
    if (iVar1 == 0) {
      return 0;
    }
    auStack_21[0] = (undefined1)iVar1;
    iVar1 = 9;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = auStack_21[0];
  }
  return iVar1;
}


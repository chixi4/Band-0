
int FUN_ram_420297d2(int param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_11;
  
  uStack_11 = 0;
  if (param_1 != 0xffff) {
    iVar2 = FUN_ram_4202942c(param_1,0,param_2,&uStack_11,param_3);
    if (iVar2 != 0) goto LAB_ram_4202981e;
  }
  iVar1 = (**(code **)(param_2 + 0xc))
                    (param_1,*(undefined2 *)(param_2 + 10),2,0,param_3,
                     *(undefined4 *)(param_2 + 0x10),*(code **)(param_2 + 0xc));
  iVar2 = 0;
  if (iVar1 != 0) {
    uStack_11 = (undefined1)iVar1;
    iVar2 = 9;
  }
LAB_ram_4202981e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uStack_11;
  }
  return iVar2;
}


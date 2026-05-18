
int FUN_ram_4209d0c2(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x1bc);
  if (param_2 != 0) {
    iVar1 = FUN_ram_4209d008(uVar2,0,param_2);
    *(int *)(param_1 + 0x1c0) = iVar1;
    if (iVar1 != 0) goto LAB_ram_4209d0e4;
  }
  if (param_3 != 0) {
    iVar1 = FUN_ram_4209d008(uVar2,param_3,0,param_4);
    *(int *)(param_1 + 0x1c0) = iVar1;
    if ((iVar1 == 0) && (param_5 != 0)) {
      uVar2 = FUN_ram_4209d066(uVar2,param_4,param_3);
      *(undefined4 *)(param_1 + 0x1c0) = uVar2;
    }
  }
LAB_ram_4209d0e4:
  return -(uint)(*(int *)(param_1 + 0x1c0) == 0);
}


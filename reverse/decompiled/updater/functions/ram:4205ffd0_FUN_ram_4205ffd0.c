
int FUN_ram_4205ffd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_420 [512];
  undefined1 auStack_220 [516];
  
  iVar1 = FUN_ram_420663cc(param_4,auStack_420,0x200,
                           *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68));
  if ((iVar1 < 0) ||
     (iVar1 = FUN_ram_420663cc(param_6,auStack_220,0x200,
                               *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68)), iVar1 < 0)) {
    iVar1 = -1;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x68);
    iVar1 = FUN_ram_4205ff02(param_1,param_2,param_3,auStack_420,uVar2,param_5,auStack_220,uVar2,
                             param_7);
    iVar1 = iVar1 >> 0x1f;
  }
  return iVar1;
}


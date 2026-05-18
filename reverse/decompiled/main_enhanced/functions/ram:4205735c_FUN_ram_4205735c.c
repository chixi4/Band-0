
undefined4
FUN_ram_4205735c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar5 = *(int *)(param_2 + 4);
  uVar1 = thunk_FUN_ram_4205e7ee(param_2,6,*(undefined2 *)(param_2 + 8),param_3,param_4);
  *(char *)(iVar5 + 0x10) = (char)uVar1;
  *(char *)(iVar5 + 0x11) = (char)((ushort)uVar1 >> 8);
  if (param_1 == 0) {
    uVar4 = 0;
    uVar3 = 0x40;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0xb);
    uVar4 = *(undefined1 *)(param_1 + 10);
  }
  uVar2 = FUN_ram_4205be20(param_2,param_3,param_4,uVar3,uVar4,6,param_5);
  FUN_ram_42053ac4(param_2);
  return uVar2;
}


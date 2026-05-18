
int FUN_ram_4201f01c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_21 [5];
  
  iVar1 = 0x102;
  if ((param_5 != (undefined4 *)0x0) && (iVar1 = 0x1101, *(int *)(param_1 + 0x18) != 0)) {
    iVar2 = FUN_ram_4201efea();
    iVar1 = 0x110f;
    if (iVar2 != 0) {
      if ((param_4 == 1) && (iVar1 = (**(code **)(**(int **)(iVar2 + 8) + 0x28))(), iVar1 != 0)) {
        return 0x10d;
      }
      iVar1 = FUN_ram_4201ea48(iVar2,param_3,param_4 == 1,auStack_21);
      if (iVar1 == 0) {
        puVar3 = (undefined4 *)thunk_FUN_ram_4039047a(0x14);
        if (puVar3 == (undefined4 *)0x0) {
          iVar1 = 0x101;
        }
        else {
          *puVar3 = 0x3c075860;
          *(undefined1 *)((int)puVar3 + 0x12) = 1;
          iVar4 = *(int *)(param_1 + 8);
          puVar3[3] = iVar2;
          *(undefined1 *)(puVar3 + 4) = auStack_21[0];
          *(bool *)((int)puVar3 + 0x11) = param_4 == 0;
          if (iVar4 != 0) {
            *(undefined4 **)(iVar4 + 8) = puVar3;
          }
          puVar3[1] = iVar4;
          iVar2 = *(int *)(param_1 + 4);
          puVar3[2] = 0;
          *(undefined4 **)(param_1 + 8) = puVar3;
          if (iVar2 == 0) {
            *(undefined4 **)(param_1 + 4) = puVar3;
          }
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          *param_5 = puVar3;
        }
      }
    }
  }
  return iVar1;
}


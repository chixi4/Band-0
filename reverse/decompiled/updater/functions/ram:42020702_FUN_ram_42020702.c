
int FUN_ram_42020702(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int local_50;
  undefined4 uStack_4c;
  byte bStack_48;
  undefined1 auStack_47 [19];
  int iStack_34;
  
  iVar1 = 0x102;
  if (param_2 != (int *)0x0) {
    *(int **)(param_1 + 0x50) = param_2;
    *(int *)(param_1 + 8) = param_3 << 0xc;
    *(undefined4 *)(param_1 + 0x40) = 0;
    piVar2 = &local_50;
    while (auStack_47 + 0xb != (undefined1 *)((int)piVar2 + 1)) {
      *(undefined1 *)((int)piVar2 + 9) = 0xff;
      piVar2 = (int *)((int)piVar2 + 1);
    }
    iVar1 = (**(code **)(*param_2 + 0xc))
                      (param_2,param_3 << 0xc,&local_50,0x20,auStack_47 + 0xb,
                       *(code **)(*param_2 + 0xc));
    if (iVar1 == 0) {
      if (local_50 == -1) {
        *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
        piVar2 = (int *)FUN_ram_42073538(0x200,0x3c07a8b4);
        if (piVar2 == (int *)0x0) {
          return 0x101;
        }
        iVar6 = 0;
        do {
          iVar3 = (**(code **)(**(int **)(param_1 + 0x50) + 0xc))
                            (*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + iVar6,piVar2,0x200);
          piVar4 = piVar2;
          if (iVar3 != 0) {
            *(undefined4 *)(param_1 + 0xc) = 0;
            thunk_FUN_ram_40390608(piVar2);
            return iVar3;
          }
          do {
            if (*piVar4 != -1) {
LAB_ram_420207c6:
              if (piVar2 + 0x80 != piVar4) {
                *(undefined4 *)(param_1 + 0xc) = 0xfffffff0;
                goto LAB_ram_420207ce;
              }
              break;
            }
            if (piVar4[1] != -1) {
              piVar4 = piVar4 + 1;
              goto LAB_ram_420207c6;
            }
            if (piVar4[2] != -1) {
              piVar4 = piVar4 + 2;
              goto LAB_ram_420207c6;
            }
            if (piVar4[3] != -1) {
              piVar4 = piVar4 + 3;
              goto LAB_ram_420207c6;
            }
            piVar4 = piVar4 + 4;
          } while (piVar2 + 0x80 != piVar4);
          iVar6 = iVar6 + 0x200;
        } while (iVar6 != 0x1000);
LAB_ram_420207ce:
        thunk_FUN_ram_40390608(piVar2);
      }
      else {
        iVar6 = FUN_ram_4201f77c(&local_50);
        if (iStack_34 == iVar6) {
          *(int *)(param_1 + 0xc) = local_50;
          *(undefined4 *)(param_1 + 0x10) = uStack_4c;
          if (bStack_48 < 0xfe) {
            return 0x1110;
          }
          *(byte *)(param_1 + 0x14) = bStack_48;
        }
        else {
          local_50 = -0x10;
        }
      }
      uVar5 = *(uint *)(param_1 + 0xc);
      if (uVar5 != 0xffffffff) {
        if (((uVar5 & 0xfffffffb) == 0xfffffff8) || (uVar5 == 0xfffffffe)) {
          iVar1 = FUN_ram_420203f2(param_1);
        }
        else {
          *(undefined4 *)(param_1 + 0xc) = 0xfffffff0;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return iVar1;
}


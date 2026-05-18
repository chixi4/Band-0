
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205868c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int aiStack_24 [4];
  
  if (7 < *(ushort *)(param_1 + 10)) {
    pcVar2 = *(char **)(param_1 + 4);
    iVar3 = FUN_ram_4205b3ae(pcVar2);
    if ((iVar3 == 0) && (iVar3 = FUN_ram_420585e2(param_2,param_3), iVar3 != 0)) {
      if (*pcVar2 == '\x11') {
        iVar1 = *(int *)(pcVar2 + 4);
        if (*param_3 == _DAT_ram_3fcb681c) {
          if (iVar1 == 0) {
            if (pcVar2[1] == '\0') {
              pcVar2[1] = '\n';
            }
            if (*(int **)(param_2 + 0x28) != (int *)0x0) {
              for (piVar4 = (int *)**(int **)(param_2 + 0x28); piVar4 != (int *)0x0;
                  piVar4 = (int *)*piVar4) {
                FUN_ram_42058444(piVar4,pcVar2[1]);
              }
            }
            goto LAB_ram_420586a6;
          }
          aiStack_24[0] = iVar1;
          iVar3 = FUN_ram_420585e2(param_2,aiStack_24);
          iVar1 = iVar3;
        }
        if (iVar1 != 0) {
          FUN_ram_42058444(iVar3,pcVar2[1]);
        }
      }
      else if ((*pcVar2 == '\x16') && (*(char *)(iVar3 + 9) == '\x01')) {
        *(undefined4 *)(iVar3 + 8) = 0x200;
      }
    }
  }
LAB_ram_420586a6:
  FUN_ram_42051d02(param_1);
  return;
}


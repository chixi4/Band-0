
int FUN_ram_4202f814(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iStack_3c;
  char local_38 [28];
  
  iVar3 = FUN_ram_4202b87e();
  iVar1 = 0x1e;
  if (iVar3 != 0) {
    iVar1 = FUN_ram_42026e40(local_38,&iStack_3c,3);
    if (iVar1 == 0) {
      if (iStack_3c != 0) {
        pcVar2 = local_38;
        for (iVar1 = 0; iVar1 < iStack_3c; iVar1 = iVar1 + 1) {
          if (*param_1 != *pcVar2) {
LAB_ram_4202f878:
            iVar1 = FUN_ram_4202f6f6(local_38 + iVar1 * 7);
            return iVar1;
          }
          iVar3 = FUN_ram_4039c0e0(param_1 + 1,pcVar2 + 1,6);
          pcVar2 = pcVar2 + 7;
          if (iVar3 != 0) goto LAB_ram_4202f878;
        }
      }
      iVar1 = 5;
    }
  }
  return iVar1;
}


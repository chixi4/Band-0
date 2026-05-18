
char * FUN_ram_420b112a(undefined4 param_1,char *param_2,int *param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  FUN_ram_420b110a();
  piVar1 = *(int **)(gp + -0x720);
  pcVar4 = param_2;
  if (piVar1 != (int *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
      if (*pcVar4 == '=') goto LAB_ram_420b114e;
    }
    for (; *piVar1 != 0; piVar1 = piVar1 + 1) {
      iVar3 = FUN_ram_4039c5aa(*piVar1,param_2,(int)pcVar4 - (int)param_2);
      if ((iVar3 == 0) &&
         (pcVar2 = (char *)(*piVar1 + ((int)pcVar4 - (int)param_2)), *pcVar2 == '=')) {
        *param_3 = (int)piVar1 - *(int *)(gp + -0x720) >> 2;
        FUN_ram_420b111a(param_1);
        return pcVar2 + 1;
      }
    }
  }
LAB_ram_420b114e:
  FUN_ram_420b111a(param_1);
  return (char *)0x0;
}


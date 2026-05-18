
int FUN_ram_4205d3a4(int param_1,int param_2)

{
  int iVar1;
  char cStack_21;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  char *pcStack_14;
  
  if (param_1 == 0) {
    return -0x10;
  }
  if (param_2 != 0) {
    pcStack_14 = &cStack_21;
    iStack_20 = param_1;
    iStack_1c = param_2;
    piStack_18 = (int *)FUN_ram_4205c9ea(0xfffffff0);
    iVar1 = -1;
    if (((piStack_18 != (int *)0x0) && (*piStack_18 != 0)) &&
       (iVar1 = FUN_ram_42051efa(0x4204e67e,&iStack_20), iVar1 == 0)) {
      iVar1 = (int)cStack_21;
    }
    return iVar1;
  }
  return -0x10;
}


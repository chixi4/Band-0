
int * FUN_ram_42065ad4(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uStack_38;
  int iStack_34;
  undefined1 auStack_30 [24];
  int *piStack_18;
  
  if (param_1 != 0) {
    piVar1 = (int *)0x0;
    if (*(int *)(param_1 + 0x74) != 0) {
      piVar1 = (int *)0x0;
      if ((*(short *)(param_1 + 0x1c) != 0) &&
         ((piVar1 = *(int **)(param_1 + 0x3a4), piVar1 == (int *)0x0 || (*piVar1 != param_2)))) {
        (*(code *)&SUB_ram_40010488)(auStack_30,0,0x20);
        uStack_38 = 4;
        iStack_34 = param_2;
        FUN_ram_42065a2a(param_1,0x42055c90,&uStack_38);
        piVar1 = piStack_18;
      }
    }
    return piVar1;
  }
  return (int *)0x0;
}


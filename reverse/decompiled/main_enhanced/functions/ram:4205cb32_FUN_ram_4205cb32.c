
void FUN_ram_4205cb32(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iStack_2c;
  undefined1 auStack_28 [16];
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if ((((iVar1 != 0) && (*(short *)(param_2 + 6) == 0x200)) && (*(char *)(iVar1 + 5) == '\b')) &&
     ((*(int *)(iVar1 + 0x4c) == 2 && (pcVar3 = *(code **)(iVar1 + 0x58), pcVar3 != (code *)0x0))))
  {
    FUN_ram_4039c11e(auStack_28,param_1 + 0x32,6);
    FUN_ram_4039c11e(&iStack_2c,param_2 + 0xe);
    if ((iStack_2c == *(int *)(iVar1 + 0x2c)) &&
       (iVar2 = FUN_ram_4039c0e0(auStack_28,param_2 + 8,6), iVar2 != 0)) {
      (*pcVar3)(param_1,2);
                    /* WARNING: Could not recover jumptable at 0x4205cbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0x58))(param_1,1);
      return;
    }
  }
  return;
}



undefined4 FUN_ram_420360cc(int param_1,undefined4 param_2,char *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  iVar3 = 0x40;
  do {
    pcVar1 = (code *)FUN_ram_42035070();
    if (pcVar1 == (code *)0x0) {
      return 0;
    }
    iVar2 = (*pcVar1)(auStack_a0,0x40);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_ram_420353fc(auStack_c0,auStack_a0,param_3 + 0x24,
                     (int)(char)((*(short *)(param_3 + 2) + 0x1f) / 0x20));
    iVar2 = FUN_ram_4203581e(auStack_60,auStack_c0,param_3);
    if (iVar2 != 0) {
      FUN_ram_4203587a(param_2,(*(short *)(param_3 + 2) + 7) / 8,auStack_c0);
      FUN_ram_4203587a(param_1,(int)param_3[1],auStack_60);
      FUN_ram_4203587a(param_1 + param_3[1],(int)param_3[1],auStack_60 + *param_3 * 4);
      return 1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}


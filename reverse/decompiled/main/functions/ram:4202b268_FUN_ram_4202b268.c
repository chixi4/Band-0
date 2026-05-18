
undefined4
FUN_ram_4202b268(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_98 [16];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [5];
  undefined1 auStack_63 [16];
  undefined1 auStack_53 [16];
  undefined1 uStack_43;
  undefined1 auStack_42 [6];
  undefined1 uStack_3c;
  undefined1 auStack_3b [19];
  
  FUN_ram_4039c11e(auStack_68,&DAT_ram_3c0f52c8,0x35);
  FUN_ram_4202d766(param_1,0x20);
  FUN_ram_4202d766(param_2,0x10);
  FUN_ram_4202d766(param_3,0x10);
  (*(code *)&SUB_ram_40011acc)(auStack_88,param_1,0x20);
  iVar2 = FUN_ram_4202b176(&DAT_ram_3c0f5298,auStack_88,0x20,local_98);
  if (iVar2 == 0) {
    FUN_ram_4202d766(local_98,0x10);
    (*(code *)&SUB_ram_40011acc)(auStack_63,param_2,0x10);
    (*(code *)&SUB_ram_40011acc)(auStack_53,param_3,0x10);
    uStack_43 = param_4;
    (*(code *)&SUB_ram_40011acc)(auStack_42,param_5,6);
    uStack_3c = param_6;
    (*(code *)&SUB_ram_40011acc)(auStack_3b,param_7,6);
    iVar2 = FUN_ram_4202b176(local_98,auStack_68,0x35,param_8);
    if (iVar2 == 0) {
      FUN_ram_4202d766(param_8,0x10);
      (*(code *)&SUB_ram_40011ad0)(param_8,0x10);
      auStack_68[0] = 1;
      iVar2 = FUN_ram_4202b176(local_98,auStack_68,0x35,param_9);
      if (iVar2 == 0) {
        FUN_ram_4202d766(param_9,0x10);
        (*(code *)&SUB_ram_40011ad0)(param_9,0x10);
        uVar1 = 0;
        goto LAB_ram_4202b2ec;
      }
    }
  }
  uVar1 = 0x11;
LAB_ram_4202b2ec:
  (*(code *)&SUB_ram_40010488)(auStack_88,0,0x20);
  return uVar1;
}


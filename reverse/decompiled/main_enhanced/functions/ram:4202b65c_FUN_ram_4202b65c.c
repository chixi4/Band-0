
undefined4 FUN_ram_4202b65c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  do {
    uVar1 = FUN_ram_42035760();
    iVar2 = FUN_ram_420360cc(auStack_60,param_2,uVar1);
    if (iVar2 != 1) {
      return 0x11;
    }
    (*(code *)&SUB_ram_40011acc)(param_1,auStack_60,0x20);
    (*(code *)&SUB_ram_40011acc)(param_1 + 0x20,auStack_40);
    iVar2 = FUN_ram_4039c0e0(param_2,&DAT_ram_3c0f52a8,0x20);
  } while (iVar2 == 0);
  (*(code *)&SUB_ram_40011ad0)(param_2,0x20);
  return 0;
}


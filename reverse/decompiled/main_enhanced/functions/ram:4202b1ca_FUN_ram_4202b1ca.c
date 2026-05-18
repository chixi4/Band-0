
undefined4
FUN_ram_4202b1ca(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [32];
  undefined1 auStack_44 [32];
  undefined1 uStack_24;
  
  FUN_ram_4202d766(param_1,0x20);
  FUN_ram_4202d766(param_2,0x20);
  FUN_ram_4202d766(param_3,0x10);
  (*(code *)&SUB_ram_40011acc)(auStack_64,param_1,0x20);
  (*(code *)&SUB_ram_40011acc)(auStack_44,param_2,0x20);
  uStack_24 = param_4;
  (*(code *)&SUB_ram_40011acc)(auStack_74,param_3,0x10);
  iVar2 = FUN_ram_4202b176(auStack_74,auStack_64,0x41,param_5);
  uVar1 = 0x11;
  if (iVar2 == 0) {
    (*(code *)&SUB_ram_40011ad0)(param_5,0x10);
    FUN_ram_4202d766(param_5,0x10);
    uVar1 = 0;
  }
  return uVar1;
}


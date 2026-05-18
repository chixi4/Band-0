
undefined4
FUN_ram_4202b3c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8,
                undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uStack_82;
  undefined1 auStack_81 [13];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [3];
  undefined1 uStack_31;
  undefined1 auStack_30 [6];
  undefined1 uStack_2a;
  undefined1 auStack_29 [13];
  
  uStack_82 = param_8;
  auStack_81[0] = param_6;
  FUN_ram_4202d766(param_1,0x10);
  FUN_ram_4202d766(param_2,0x10);
  FUN_ram_4202d766(param_3,0x10);
  FUN_ram_4202d766(param_4,0x10);
  FUN_ram_4202d766(param_5,3);
  FUN_ram_4202d766(auStack_81,1);
  FUN_ram_4202d766(param_7,6);
  FUN_ram_4202d766(&uStack_82,1);
  FUN_ram_4202d766(param_9,6);
  (*(code *)&SUB_ram_40011acc)(auStack_64,param_2,0x10);
  (*(code *)&SUB_ram_40011acc)(auStack_54,param_3,0x10);
  (*(code *)&SUB_ram_40011acc)(auStack_44,param_4,0x10);
  (*(code *)&SUB_ram_40011acc)(auStack_34,param_5,3);
  uStack_31 = auStack_81[0];
  (*(code *)&SUB_ram_40011acc)(auStack_30,param_7,6);
  uStack_2a = uStack_82;
  (*(code *)&SUB_ram_40011acc)(auStack_29,param_9,6);
  (*(code *)&SUB_ram_40011acc)(&uStack_74,param_1,0x10);
  iVar2 = FUN_ram_4202b176(&uStack_74,auStack_64,0x41,param_10);
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uVar1 = 0x11;
  if (iVar2 == 0) {
    FUN_ram_4202d766(param_10,0x10);
    (*(code *)&SUB_ram_40011ad0)(param_10,0x10);
    uVar1 = 0;
  }
  return uVar1;
}


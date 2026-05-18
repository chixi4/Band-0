
undefined4
FUN_ram_4202b4f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                uint *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [24];
  
  FUN_ram_4202d766(param_1,0x20);
  FUN_ram_4202d766(param_2,0x20);
  FUN_ram_4202d766(param_3,0x10);
  FUN_ram_4202d766(param_4,0x10);
  (*(code *)&SUB_ram_40011acc)(auStack_70,param_1,0x20);
  (*(code *)&SUB_ram_40011acc)(auStack_50,param_2,0x20);
  (*(code *)&SUB_ram_40011acc)(auStack_30,param_4,0x10);
  (*(code *)&SUB_ram_40011acc)(auStack_80,param_3,0x10);
  iVar2 = FUN_ram_4202b176(auStack_80,auStack_70,0x50,auStack_80);
  uVar1 = 0x11;
  if (iVar2 == 0) {
    FUN_ram_4202d766(auStack_80,0x10);
    uVar3 = (*(code *)&SUB_ram_40011930)(auStack_74);
    *param_5 = uVar3 % 1000000;
    uVar1 = 0;
  }
  return uVar1;
}


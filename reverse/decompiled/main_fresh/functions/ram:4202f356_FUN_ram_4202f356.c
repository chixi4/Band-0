
void FUN_ram_4202f356(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined4 uStack_134;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  undefined2 uStack_118;
  undefined1 auStack_114 [4];
  undefined2 *puStack_110;
  undefined2 *puStack_10c;
  undefined2 uStack_108;
  
  uStack_13c = *(undefined2 *)(param_1 + 3);
  uStack_13a = *(undefined2 *)(param_1 + 5);
  uStack_138 = *(undefined2 *)(param_1 + 7);
  uStack_136 = *(undefined2 *)(param_1 + 9);
  uStack_134 = 0;
  FUN_ram_4039c11e(&uStack_130,&uStack_13c,0xc);
  uVar1 = *(undefined2 *)(param_1 + 1);
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 4;
  puStack_110 = &uStack_13c;
  puStack_10c = &uStack_130;
  uStack_108 = uVar1;
  iVar2 = FUN_ram_4202e186(auStack_114,uVar1);
  uStack_124 = uVar1;
  if (iVar2 == 0) {
    uStack_122 = uStack_130;
    uStack_120 = uStack_12e;
    uStack_11e = uStack_12c;
    uStack_11c = uStack_12a;
    uStack_11a = uStack_128;
    uStack_118 = uStack_126;
    iVar2 = FUN_ram_420332b4(0x2020,&uStack_124,0xe,0,0);
    if (iVar2 != 0) {
      thunk_FUN_ram_4202b7dc();
      uVar3 = FUN_ram_4202e0c4(uVar1);
      thunk_FUN_ram_4202b7f6();
      FUN_ram_4202e1c6(uVar3);
      FUN_ram_4202ef8a(uVar1,iVar2);
    }
  }
  else {
    uStack_122 = CONCAT11(uStack_122._1_1_,(char)iVar2);
    FUN_ram_420332b4(0x2021,&uStack_124,3,0,0);
  }
  return;
}


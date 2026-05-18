
undefined4 FUN_ram_420a69e2(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [16];
  
  FUN_ram_4039c11e(auStack_20,*(undefined4 *)(param_1 + 0x58),0x10);
  FUN_ram_420a69c6(param_1);
  puVar1 = (undefined4 *)FUN_ram_4206d7ce(1,0x2282);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x101;
  }
  else {
    puVar1[1] = 0x227a;
    *puVar1 = 0;
    FUN_ram_420a68fc(param_1,puVar1 + 2);
    FUN_ram_4039c11e(*(undefined4 *)(param_1 + 0x5c),auStack_20,8);
    FUN_ram_4039c11e(*(undefined4 *)(param_1 + 0x68),auStack_18);
    uVar2 = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x58) + -8) = 2;
  }
  return uVar2;
}


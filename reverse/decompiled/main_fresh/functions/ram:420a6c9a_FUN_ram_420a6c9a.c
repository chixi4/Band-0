
undefined4 FUN_ram_420a6c9a(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  iVar3 = *(int *)(param_1 + 0x58);
  if ((((iVar3 != 0) && (*(int *)(iVar3 + -8) != 2)) &&
      ((*(uint *)(param_1 + 0x80) == 0 || (*(uint *)(param_1 + 0x78) <= *(uint *)(param_1 + 0x80))))
      ) && ((*(int *)(iVar3 + -8) != 1 && (*(int *)(param_1 + 0x74) != 0)))) {
    FUN_ram_4039c11e(auStack_20,*(undefined4 *)(param_1 + 0x5c),8);
    FUN_ram_4039c11e(auStack_18,*(undefined4 *)(param_1 + 0x68));
    FUN_ram_420a6940(iVar3);
    FUN_ram_420a68fc(param_1,0);
    puVar1 = (undefined4 *)FUN_ram_4206d7ce(1,0x18);
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffff8100;
    }
    puVar1[1] = 0x10;
    *puVar1 = 0;
    uVar2 = FUN_ram_4039c11e(puVar1 + 2,auStack_20);
    FUN_ram_420a68fc(param_1,uVar2);
    *(undefined4 *)(*(int *)(param_1 + 0x58) + -8) = 1;
  }
  return 0;
}


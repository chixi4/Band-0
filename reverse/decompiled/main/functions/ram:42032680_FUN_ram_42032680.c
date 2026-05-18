
void FUN_ram_42032680(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 auStack_38 [7];
  undefined1 uStack_31;
  undefined1 auStack_30 [8];
  undefined2 uStack_28;
  ushort uStack_26;
  byte bStack_24;
  
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420365de(param_1);
  FUN_ram_4039c11e(auStack_30,iVar2 + 8,7);
  auStack_30[0] = thunk_FUN_ram_420315b6(*(undefined1 *)(iVar2 + 8));
  iVar3 = iVar2;
  for (iVar5 = 0; iVar5 < *(int *)(iVar2 + 0x60); iVar5 = iVar5 + 1) {
    puVar4 = (undefined2 *)(*(int *)(iVar2 + 0x5c) + iVar5 * 4);
    bVar1 = *(byte *)(puVar4 + 1);
    if (bVar1 != 0) {
      uStack_28 = *puVar4;
      uStack_26 = (ushort)bVar1;
      bStack_24 = bStack_24 & 0xfe;
      thunk_FUN_ram_4202b7f6();
      FUN_ram_4202cf0a(auStack_30);
      thunk_FUN_ram_4202b7dc();
      iVar3 = FUN_ram_420365de(param_1);
    }
  }
  FUN_ram_4039c11e(auStack_38,iVar3 + 8,7);
  auStack_38[0] = thunk_FUN_ram_420315b6(*(undefined1 *)(iVar3 + 8));
  uStack_31 = *(undefined1 *)(iVar3 + 0x66);
  thunk_FUN_ram_4202b7f6();
  FUN_ram_4202cf24(auStack_38);
  thunk_FUN_ram_4202b7dc();
  FUN_ram_420365de(param_1);
  thunk_FUN_ram_4202b7f6();
  return;
}



void FUN_ram_4202efe4(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_124 [4];
  undefined4 uStack_120;
  undefined1 auStack_11c [260];
  
  (*(code *)&SUB_ram_40010488)(auStack_124,0,0x104);
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420365de(param_1);
  if (iVar2 == 0) {
    thunk_FUN_ram_4202b7f6();
    return;
  }
  FUN_ram_4202e00a(iVar2,auStack_11c);
  uVar3 = *(undefined4 *)(iVar2 + 0x74);
  uVar4 = *(undefined4 *)(iVar2 + 0x78);
  thunk_FUN_ram_4202b7f6();
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_4202e0c4(param_1);
  thunk_FUN_ram_4202b7f6();
  if (iVar2 != 0) {
    FUN_ram_4202ef8a(param_1,param_2);
    FUN_ram_4202e1c6(iVar2);
  }
  FUN_ram_4202ddd4(param_1,param_2);
  FUN_ram_4202926a(param_1);
  FUN_ram_42031fda(param_1);
  FUN_ram_42030596(param_1);
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420365de(param_1);
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x34) & 1) == 0)) {
    if ((*(byte *)(iVar2 + 5) & 1) == 0) {
      thunk_FUN_ram_4202b7f6();
      if ((*(byte *)(iVar2 + 0x34) & 1) == 0) {
        FUN_ram_4202e40e(param_1,1);
      }
      bVar1 = false;
      goto LAB_ram_4202f0a0;
    }
    *(byte *)(iVar2 + 5) = *(byte *)(iVar2 + 5) & 0xfe;
  }
  thunk_FUN_ram_4202b7f6();
  bVar1 = true;
LAB_ram_4202f0a0:
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420365de(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  thunk_FUN_ram_4202b7f6();
  FUN_ram_42036cce(param_1);
  auStack_124[0] = 1;
  if (bVar1) {
    uStack_120 = param_2;
    FUN_ram_4202e1e0(auStack_124);
    FUN_ram_4202e156(auStack_124,uVar3,uVar4);
  }
  return;
}


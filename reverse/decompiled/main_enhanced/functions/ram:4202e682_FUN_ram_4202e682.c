
void FUN_ram_4202e682(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 auStack_114 [6];
  undefined2 uStack_10e;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined2 uStack_108;
  
  uVar1 = *(undefined2 *)(param_1 + 1);
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 0x22;
  uStack_10e = *(undefined2 *)(param_1 + 3);
  uStack_10a = *(undefined2 *)(param_1 + 7);
  uStack_10c = *(undefined2 *)(param_1 + 5);
  uStack_108 = *(undefined2 *)(param_1 + 9);
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420365de(uVar1);
  if (iVar2 != 0) {
    *(undefined2 *)(iVar2 + 0x24) = uStack_10e;
    *(undefined2 *)(iVar2 + 0x26) = uStack_10a;
    *(undefined2 *)(iVar2 + 0x28) = uStack_10c;
    *(undefined2 *)(iVar2 + 0x2a) = uStack_108;
  }
  thunk_FUN_ram_4202b7f6();
  FUN_ram_4202e1e0(auStack_114);
  FUN_ram_4202e186(auStack_114,uVar1);
  return;
}


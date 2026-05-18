
bool FUN_ram_42098e0e(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,
                     undefined1 param_5)

{
  bool bVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_34 [32];
  
  uVar2 = 0;
  if (param_4 == 0) {
    uVar2 = FUN_ram_42098dc6(param_1,auStack_34,0x14);
  }
  FUN_ram_4207faaa(2,auStack_34,uVar2,0);
  puVar3 = (undefined4 *)FUN_ram_4039c08e(1,0x16);
  bVar1 = true;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 1;
    *(undefined1 *)(puVar3 + 1) = param_5;
    FUN_ram_4039c11e(puVar3 + 3,param_2,6);
    puVar3[2] = 2;
    *(undefined2 *)((int)puVar3 + 0x12) = param_3;
    iVar4 = FUN_ram_4207fcf6(puVar3);
    thunk_FUN_ram_40390634(puVar3);
    bVar1 = iVar4 != 0;
  }
  return bVar1;
}


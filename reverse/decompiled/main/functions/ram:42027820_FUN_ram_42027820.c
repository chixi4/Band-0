
void FUN_ram_42027820(int param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [20];
  
  uVar1 = *(undefined2 *)(param_1 + 10);
  FUN_ram_4039c11e(auStack_20,param_1 + 0x5e,0x10);
  uStack_42 = 0;
  uStack_4a = 0;
  uStack_48 = 0;
  uStack_46 = 0;
  uStack_44 = 0;
  uStack_4c = uVar1;
  FUN_ram_4039c11e(auStack_40,auStack_20);
  iVar2 = FUN_ram_420332b4(0x2019,&uStack_4c,0x1c,0,0);
  if (iVar2 != 0) {
    *(undefined1 *)(param_2 + 1) = 8;
    *param_2 = iVar2;
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
  }
  return;
}


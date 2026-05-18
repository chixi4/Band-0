
void FUN_ram_40392986(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_50 [16];
  int iStack_40;
  int iStack_3c;
  int iStack_30;
  int iStack_2c;
  
  iVar3 = param_1[0x1d];
  uVar5 = *param_2;
  *(undefined4 *)(iVar3 + 0x98) = *param_1;
  FUN_ram_403925f2();
  (*(code *)&SUB_ram_40010488)(auStack_50,0,0x2c);
  FUN_ram_40392466(param_1,param_2,auStack_50);
  iVar4 = iVar3 + 0x20;
  FUN_ram_40398688(iVar4,param_1 + 0xf,auStack_50);
  if (*(char *)(*(int *)(iVar3 + 0x9c) + 0x40) == '\0') {
    FUN_ram_40398abe(iVar4,auStack_50);
  }
  else {
    puVar1 = *(undefined4 **)(iVar3 + 0xa0);
    if (iStack_2c != 0) {
      FUN_ram_403923e8(puVar1[8],iStack_2c,(iStack_3c + 7) / 8,1);
      FUN_ram_40393862(puVar1[1]);
      FUN_ram_4039890e(*(undefined4 *)(iVar3 + 0x20));
      FUN_ram_403938aa(puVar1[1],puVar1[8]);
    }
    if (iStack_30 != 0) {
      FUN_ram_403923e8(puVar1[7],iStack_30,(iStack_40 + 7) / 8,0);
      FUN_ram_40393862(*puVar1);
      FUN_ram_40398938(*(undefined4 *)(iVar3 + 0x20));
      FUN_ram_403938aa(*puVar1,puVar1[7]);
    }
  }
  if (((*(byte *)(param_1 + 0x1c) & 2) != 0) || (bVar2 = true, iStack_2c == 0)) {
    bVar2 = iStack_30 != 0;
  }
  FUN_ram_403988e8(*(undefined4 *)(iVar3 + 0x20),bVar2,iStack_2c != 0);
  if ((code *)param_1[0xd] != (code *)0x0) {
    (*(code *)param_1[0xd])(uVar5);
  }
  FUN_ram_4039895e(iVar4);
  return;
}


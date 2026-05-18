
void FUN_ram_420582f2(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  ushort uVar5;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  uVar5 = 0x1c;
  if (*(ushort *)(param_1 + 8) < 0x1d) {
    uVar5 = *(ushort *)(param_1 + 8);
  }
  iVar4 = FUN_ram_42051d86(0x22,uVar5 + 8,0x280);
  if (iVar4 != 0) {
    puVar1 = *(undefined1 **)(iVar4 + 4);
    iVar2 = *(int *)(param_1 + 4);
    *puVar1 = 3;
    puVar1[1] = param_2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    FUN_ram_42051fc2(iVar4,param_1,uVar5,8);
    uStack_28 = *(undefined4 *)(iVar2 + 0xc);
    auStack_24[0] = *(undefined4 *)(iVar2 + 0x10);
    iVar2 = FUN_ram_42058ae0(auStack_24,&uStack_28);
    if (iVar2 != 0) {
      uVar3 = *(undefined2 *)(iVar4 + 10);
      puVar1[2] = 0;
      puVar1[3] = 0;
      uVar3 = FUN_ram_4205b3ae(puVar1,uVar3);
      puVar1[2] = (char)uVar3;
      puVar1[3] = (char)((ushort)uVar3 >> 8);
      FUN_ram_42058fe2(iVar4,0,&uStack_28,0x40,0,1,iVar2);
    }
    FUN_ram_42051d02(iVar4);
  }
  return;
}


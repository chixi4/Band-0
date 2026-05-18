
void FUN_ram_4205b0d4(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  uVar5 = 0x1c;
  if (*(ushort *)(param_1 + 8) < 0x1d) {
    uVar5 = *(ushort *)(param_1 + 8);
  }
  iVar3 = FUN_ram_42053b52(0x22,uVar5 + 8,0x280);
  if (iVar3 != 0) {
    if (*(ushort *)(iVar3 + 10) < (ushort)(uVar5 + 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    puVar1 = *(undefined1 **)(iVar3 + 4);
    iVar4 = *(int *)(param_1 + 4);
    *puVar1 = 3;
    puVar1[1] = param_2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    FUN_ram_42053e10(iVar3,param_1,uVar5,8);
    uStack_28 = *(undefined4 *)(iVar4 + 0xc);
    auStack_24[0] = *(undefined4 *)(iVar4 + 0x10);
    iVar4 = FUN_ram_4205b904(auStack_24,&uStack_28);
    if (iVar4 != 0) {
      uVar2 = *(undefined2 *)(iVar3 + 10);
      puVar1[2] = 0;
      puVar1[3] = 0;
      uVar2 = FUN_ram_4205e8cc(puVar1,uVar2);
      puVar1[2] = (char)uVar2;
      puVar1[3] = (char)((ushort)uVar2 >> 8);
      FUN_ram_4205be20(iVar3,0,&uStack_28,0x40,0,1,iVar4);
    }
    FUN_ram_42053ac4(iVar3);
  }
  return;
}


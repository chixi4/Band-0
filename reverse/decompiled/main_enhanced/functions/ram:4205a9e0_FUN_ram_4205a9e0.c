
void FUN_ram_4205a9e0(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  int iStack_28;
  int aiStack_24 [3];
  
  if (param_2 == 0) {
    return;
  }
  psVar3 = *(short **)(param_1 + 4);
  if (*psVar3 == 0x100) {
    if ((char)psVar3[2] == '\x06') {
      if (*(char *)((int)psVar3 + 5) == '\x04') {
        if (psVar3[1] == 8) {
          FUN_ram_4205cb32(param_2,psVar3);
          FUN_ram_4039c11e(&iStack_28,psVar3 + 7,4);
          FUN_ram_4039c11e(aiStack_24,psVar3 + 0xc,4);
          iVar5 = *(int *)(param_2 + 4);
          psVar6 = psVar3 + 4;
          bVar1 = false;
          if ((iVar5 == 0) || (bVar1 = iStack_28 == iVar5, iVar5 != aiStack_24[0])) {
            bVar2 = false;
            uVar4 = 2;
          }
          else {
            bVar2 = true;
            uVar4 = 1;
          }
          FUN_ram_4205a844(param_2,&iStack_28,psVar6,uVar4);
          if (((psVar3[3] == 0x100) && (bVar2)) && (!bVar1)) {
            FUN_ram_4205a5a6(param_2,param_2 + 0x32,psVar6,param_2 + 0x32,param_2 + 4,psVar6,
                             &iStack_28,2);
          }
          FUN_ram_42053ac4(param_1);
          return;
        }
      }
    }
  }
  FUN_ram_42053ac4(param_1);
  return;
}


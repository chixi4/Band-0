
void FUN_ram_42027d2c(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar7 = FUN_ram_4202d598(param_2,10);
  *param_3 = iVar7;
  if (iVar7 != 0) {
    *(undefined1 *)(param_3 + 1) = 8;
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
    return;
  }
  puVar6 = *(undefined1 **)*param_2;
  thunk_FUN_ram_4202b7dc();
  iVar7 = FUN_ram_420279b4(param_1,7,0xffffffff,0);
  if (iVar7 == 0) {
    *param_3 = 5;
    *(undefined1 *)(param_3 + 1) = 8;
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 0x10;
  }
  else {
    *(byte *)(iVar7 + 0xe) = *(byte *)(iVar7 + 0xe) & 0xfd;
    uVar1 = *puVar6;
    uVar2 = puVar6[6];
    *(byte *)(iVar7 + 0xc0) = *(byte *)(iVar7 + 0xc0) | 2;
    uVar3 = puVar6[3];
    *(ushort *)(iVar7 + 200) = CONCAT11(puVar6[1],uVar1);
    uVar1 = puVar6[7];
    uVar4 = puVar6[8];
    uVar5 = puVar6[9];
    *(uint *)(iVar7 + 0xd0) = CONCAT13(puVar6[5],CONCAT12(puVar6[4],CONCAT11(uVar3,puVar6[2])));
    *(uint *)(iVar7 + 0xd4) = CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar1,uVar2)));
    FUN_ram_420276c2(iVar7,param_3);
  }
  thunk_FUN_ram_4202b7f6();
  return;
}


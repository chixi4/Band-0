
void FUN_ram_4202d2ce(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  byte abStack_40 [16];
  undefined1 auStack_30 [24];
  
  FUN_ram_4202791e(param_1,&uStack_52,auStack_50,&uStack_51,auStack_48);
  uVar1 = FUN_ram_420283c8(param_1);
  iVar2 = FUN_ram_4202b040(param_1 + 0x1e,uVar1,param_1 + 0x10,param_1 + 0x17,uStack_52,uStack_51,
                           auStack_50,auStack_48,abStack_40);
  if (iVar2 == 0) {
    bVar6 = 0;
    iVar2 = 0;
    do {
      iVar4 = param_1 + iVar2;
      pbVar3 = abStack_40 + iVar2;
      iVar2 = iVar2 + 1;
      bVar6 = bVar6 | *(byte *)(iVar4 + 0x2e) ^ *pbVar3;
    } while (iVar2 != 0x10);
    if (bVar6 == 0) {
      iVar2 = FUN_ram_4202afcc(param_1 + 0x1e,param_1 + 0x4e,param_1 + 0x3e,auStack_30);
      if (iVar2 == 0) {
        uVar7 = (uint)*(byte *)(param_1 + 0xf);
        iVar2 = FUN_ram_4039c11e(param_1 + 0x5e,auStack_30,uVar7);
        (*(code *)&SUB_ram_40010488)(iVar2 + uVar7,0,0x10 - uVar7);
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          *(undefined1 *)(param_1 + 0xd) = 5;
        }
        bVar6 = *(byte *)(param_2 + 5) | 1;
        goto LAB_ram_4202d3a2;
      }
      goto LAB_ram_4202d354;
    }
    iVar2 = 0x404;
    uVar5 = 4;
  }
  else {
LAB_ram_4202d354:
    uVar5 = 8;
  }
  *(undefined1 *)(param_2 + 1) = uVar5;
  *param_2 = iVar2;
  bVar6 = *(byte *)(param_2 + 5) | 2;
LAB_ram_4202d3a2:
  *(byte *)(param_2 + 5) = bVar6;
  return;
}


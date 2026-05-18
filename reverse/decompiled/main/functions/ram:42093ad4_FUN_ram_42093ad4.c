
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42093ad4(uint param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  
  (*(code *)&SUB_ram_40010488)(0x3fcdfbf4,0,0x90);
  (*(code *)&SUB_ram_40010488)(0x3fcdfb54,0,0xa0);
  sVar1 = FUN_ram_42095ee4();
  if (sVar1 == 0) {
    sVar1 = 0x40;
  }
  *(short *)(gp + 0x6a0) = sVar1;
  FUN_ram_4207a038(6,1,3,&DAT_ram_3c10090c);
  if (_DAT_ram_3fcc302c == 0) {
    uVar4 = _DAT_ram_3fcc3030 & 0xffff;
    if (uVar4 == 0) {
      uVar4 = 10;
    }
    *(short *)(gp + 0x6b4) = (short)uVar4;
    iVar2 = FUN_ram_420939a4(8,uVar4,500);
    if (iVar2 != 0) goto LAB_ram_42093cca;
    uVar4 = (uint)*(ushort *)(gp + 0x6b4);
    puVar5 = &DAT_ram_3c100818;
  }
  else {
    uVar4 = _DAT_ram_3fcc3030 & 0xffff;
    if (uVar4 == 0) {
      uVar4 = 10;
    }
    *(short *)(gp + 0x6b4) = (short)uVar4;
    puVar5 = &DAT_ram_3c10083c;
  }
  FUN_ram_4207a038(6,1,3,puVar5,uVar4);
  sVar1 = FUN_ram_42095f2c();
  if (sVar1 == 0) {
    sVar1 = 0x20;
  }
  *(short *)(gp + 0x650) = sVar1;
  FUN_ram_4207a038(6,1,3,&DAT_ram_3c100860);
  iVar2 = FUN_ram_42095ef0();
  if (iVar2 == 0) {
    sVar1 = FUN_ram_42095f08();
    if (sVar1 == 0) {
      sVar1 = 0x20;
    }
    *(short *)(gp + 0x628) = sVar1;
    iVar2 = FUN_ram_420939a4(1,param_1,0x640 - (uint)*(byte *)(gp + 0x624));
    if (iVar2 != 0) goto LAB_ram_42093cca;
    puVar5 = &DAT_ram_3c100888;
  }
  else {
    param_1 = FUN_ram_42095efc();
    param_1 = param_1 & 0xffff;
    if (param_1 == 0) {
      param_1 = 0x20;
    }
    *(short *)(gp + 0x628) = (short)param_1;
    puVar5 = &DAT_ram_3c1008a8;
  }
  FUN_ram_4207a038(6,1,3,puVar5,param_1);
  iVar2 = (*(code *)&SUB_ram_40011d24)();
  if (iVar2 != 0) {
    uVar3 = FUN_ram_42095f14();
    iVar2 = FUN_ram_420939a4(9,uVar3,0x640 - (uint)*(byte *)(gp + 0x6c4));
    if (iVar2 != 0) goto LAB_ram_42093cca;
    uVar3 = FUN_ram_42095f14();
    FUN_ram_4207a038(6,1,3,&DAT_ram_3c1008c8,uVar3);
  }
  *(undefined2 *)(gp + 0x6dc) = 2;
  iVar2 = FUN_ram_420939a4(10,2,600);
  if (iVar2 == 0) {
    iVar2 = 0x3fcdfb54;
    iVar6 = 0x3fcdfbf4;
    FUN_ram_4207a038(6,1,3,&DAT_ram_3c1008e8,2);
    do {
      *(int *)(iVar2 + 0x24) = iVar6;
      *(undefined1 *)(iVar2 + 0x1a) = 5;
      iVar6 = iVar6 + 0x24;
      FUN_ram_4039de84(iVar2);
      iVar2 = iVar2 + 0x28;
    } while (iVar6 != 0x3fcdfc84);
    return 0;
  }
LAB_ram_42093cca:
  FUN_ram_42093ab2();
  return iVar2;
}


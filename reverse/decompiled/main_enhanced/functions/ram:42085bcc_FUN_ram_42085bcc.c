
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42085bcc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined1 auStack_30 [28];
  
  if (_DAT_ram_3fcc4014 == 0) {
    FUN_ram_4207a038(1,8,1,&DAT_ram_3c0fefe8);
    return 0xffffffff;
  }
  if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x01') {
    FUN_ram_4207a038(1,8,2,&DAT_ram_3c101ef0);
    return 0x3006;
  }
  FUN_ram_4208d7b6();
  DAT_ram_3fcc42f7 = 1;
  FUN_ram_4208d908(0);
  if (param_1 == (int *)0x0) {
    FUN_ram_4208d87c(1,0,0,2);
    FUN_ram_4208d852();
    FUN_ram_4208d860(0);
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fc924,0x78);
    uVar2 = FUN_ram_4208d92e(0);
    iVar3 = FUN_ram_4208b9e8();
    if ((iVar3 == 0) && ((*(uint *)(*(int *)(gp + -0xb4) + 0x518) & 1) != 0)) {
      uVar2 = FUN_ram_4208b96c(1);
    }
    FUN_ram_4208dcb0(0x20000,uVar2);
    uVar4 = 0x10f;
    goto LAB_ram_42085ca4;
  }
  puVar7 = (undefined *)*param_1;
  if (puVar7 == (undefined *)0x0) {
    puVar7 = &DAT_ram_3c0c39bc;
  }
  if (param_1[3] == 0) {
    pcVar8 = "r away first.";
  }
  else {
    pcVar8 = "irst.";
  }
  iVar6 = param_1[6];
  FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fc964,puVar7,(char)param_1[2],*(undefined1 *)((int)param_1 + 9)
                   ,pcVar8,param_1[4],param_1[5],iVar6);
  FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fc9a8,(char)param_1[7]);
  iVar3 = *param_1;
  if (iVar3 == 0) {
    uVar2 = 2;
    uVar1 = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = (*(code *)&SUB_ram_400104a8)(iVar3);
    uVar2 = 1;
  }
  FUN_ram_4208d87c(1,iVar3,uVar1,uVar2);
  puVar5 = (undefined1 *)param_1[1];
  if (puVar5 == (undefined1 *)0x0) {
    FUN_ram_4208d852();
  }
  else {
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fc9d4,*puVar5,puVar5[1],puVar5[2],puVar5[3],puVar5[4],
                     puVar5[5],iVar6);
    FUN_ram_4208d826(param_1[1]);
  }
  if ((char)param_1[2] == '\0') {
LAB_ram_42085d64:
    if (((short)param_1[8] != 0) || (param_1[9] != 0)) {
      iVar3 = FUN_ram_4208dd84();
      uVar4 = 0x40000;
      if (iVar3 == 0) goto LAB_ram_42085da6;
    }
LAB_ram_42085ea2:
    uVar4 = 0x10f;
  }
  else {
    iVar3 = FUN_ram_42079332();
    if (iVar3 == 0) {
      if ((char)param_1[2] == '\0') goto LAB_ram_42085d64;
      FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fca08);
      goto LAB_ram_42085ea2;
    }
    FUN_ram_4208defa((char)param_1[2]);
    uVar4 = 0x8000;
  }
LAB_ram_42085da6:
  FUN_ram_4208d860(*(char *)((int)param_1 + 9) != '\0');
  *(char *)(_DAT_ram_3fcdfb20 + 0x119) = (char)param_1[10];
  iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar3 != 0) {
    if (param_1[3] == 0) {
      if ((param_1[4] == 0) && ((param_1[5] == 0 || (param_1[5] == 0x78)))) goto LAB_ram_42085e20;
      FUN_ram_4207a038(1,8,2,&DAT_ram_3c101f24);
    }
    if (((param_1[3] == 1) && (param_1[6] != 0)) && (param_1[6] != 0x168)) {
      FUN_ram_4207a038(1,8,2,&DAT_ram_3c101f88);
    }
  }
LAB_ram_42085e20:
  FUN_ram_4039c11e(auStack_30,param_1 + 4,0xc);
  FUN_ram_4208d43c(auStack_30,(char)param_1[7]);
  if (param_1[3] != 0) {
    if (param_1[3] == 1) {
      uVar4 = uVar4 | 0x4000;
    }
    else {
      FUN_ram_4207a038(1,8,2,"89ABCDEF");
    }
  }
  if ((uVar4 & 0x48000) == 0) {
    uVar2 = FUN_ram_4208d92e(*param_1);
    iVar3 = FUN_ram_4208b9e8();
    if ((iVar3 == 0) && ((*(uint *)(*(int *)(gp + -0xb4) + 0x518) & 1) != 0)) {
      uVar2 = FUN_ram_4208b96c(1);
    }
    FUN_ram_4208dcb0(0x20000,uVar2);
  }
LAB_ram_42085ca4:
  uVar2 = FUN_ram_4208d622(uVar4,3,param_2,param_3);
  return uVar2;
}


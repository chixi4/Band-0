
void FUN_ram_420351bc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_ram_4203511c(param_1,param_2,8);
  uStack_34 = *(undefined4 *)(param_2 + 0x2c);
  uStack_30 = *(undefined4 *)(param_2 + 0x30);
  uStack_2c = *(undefined4 *)(param_2 + 0x34);
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_28 = *(undefined4 *)(param_2 + 0x38);
  local_40 = 0;
  uStack_24 = *(undefined4 *)(param_2 + 0x3c);
  iVar1 = FUN_ram_42034ee8(&local_40,&local_40,&local_40,8);
  iVar2 = FUN_ram_42034ee8(param_1,param_1,&local_40,8);
  uStack_34 = *(undefined4 *)(param_2 + 0x30);
  uStack_30 = *(undefined4 *)(param_2 + 0x34);
  uStack_2c = *(undefined4 *)(param_2 + 0x38);
  uStack_24 = 0;
  uStack_28 = *(undefined4 *)(param_2 + 0x3c);
  iVar3 = FUN_ram_42034ee8(&local_40,&local_40,&local_40,8);
  iVar4 = FUN_ram_42034ee8(param_1,param_1,&local_40,8);
  local_40 = *(undefined4 *)(param_2 + 0x20);
  uStack_3c = *(undefined4 *)(param_2 + 0x24);
  uStack_38 = *(undefined4 *)(param_2 + 0x28);
  uStack_2c = 0;
  uStack_28 = *(undefined4 *)(param_2 + 0x38);
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_24 = *(undefined4 *)(param_2 + 0x3c);
  iVar5 = FUN_ram_42034ee8(param_1,param_1,&local_40,8);
  local_40 = *(undefined4 *)(param_2 + 0x24);
  uStack_30 = *(undefined4 *)(param_2 + 0x38);
  uStack_3c = *(undefined4 *)(param_2 + 0x28);
  uStack_2c = *(undefined4 *)(param_2 + 0x3c);
  uStack_38 = *(undefined4 *)(param_2 + 0x2c);
  uStack_34 = *(undefined4 *)(param_2 + 0x34);
  uStack_24 = *(undefined4 *)(param_2 + 0x20);
  uStack_28 = uStack_34;
  iVar6 = FUN_ram_42034ee8(param_1,param_1,&local_40,8);
  local_40 = *(undefined4 *)(param_2 + 0x2c);
  uStack_3c = *(undefined4 *)(param_2 + 0x30);
  uStack_38 = *(undefined4 *)(param_2 + 0x34);
  uStack_2c = 0;
  uStack_28 = *(undefined4 *)(param_2 + 0x20);
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_24 = *(undefined4 *)(param_2 + 0x28);
  iVar7 = FUN_ram_42035170(param_1,param_1,&local_40,8);
  local_40 = *(undefined4 *)(param_2 + 0x30);
  uStack_3c = *(undefined4 *)(param_2 + 0x34);
  uStack_38 = *(undefined4 *)(param_2 + 0x38);
  uStack_34 = *(undefined4 *)(param_2 + 0x3c);
  uStack_28 = *(undefined4 *)(param_2 + 0x24);
  uStack_24 = *(undefined4 *)(param_2 + 0x2c);
  iVar8 = FUN_ram_42035170(param_1,param_1,&local_40,8);
  local_40 = *(undefined4 *)(param_2 + 0x34);
  uStack_3c = *(undefined4 *)(param_2 + 0x38);
  uStack_38 = *(undefined4 *)(param_2 + 0x3c);
  uStack_28 = 0;
  uStack_34 = *(undefined4 *)(param_2 + 0x20);
  uStack_30 = *(undefined4 *)(param_2 + 0x24);
  uStack_2c = *(undefined4 *)(param_2 + 0x28);
  uStack_24 = *(undefined4 *)(param_2 + 0x30);
  iVar9 = FUN_ram_42035170(param_1,param_1,&local_40,8);
  local_40 = *(undefined4 *)(param_2 + 0x38);
  uStack_3c = *(undefined4 *)(param_2 + 0x3c);
  uStack_34 = *(undefined4 *)(param_2 + 0x24);
  uStack_38 = 0;
  uStack_30 = *(undefined4 *)(param_2 + 0x28);
  uStack_2c = *(undefined4 *)(param_2 + 0x2c);
  uStack_24 = *(undefined4 *)(param_2 + 0x34);
  iVar10 = FUN_ram_42035170(param_1,param_1,&local_40,8);
  iVar10 = ((((iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6) - iVar7) - iVar8) - iVar9) - iVar10;
  if (iVar10 < 0) {
    do {
      iVar1 = FUN_ram_42034ee8(param_1,param_1,&DAT_ram_3c0f5540,8);
      iVar10 = iVar10 + iVar1;
    } while (iVar10 < 0);
  }
  else {
    while ((iVar10 != 0 || (iVar1 = FUN_ram_4203513c(&DAT_ram_3c0f5540,param_1,8), iVar1 != 1))) {
      iVar1 = FUN_ram_42035170(param_1,param_1,&DAT_ram_3c0f5540,8);
      iVar10 = iVar10 - iVar1;
    }
  }
  return;
}


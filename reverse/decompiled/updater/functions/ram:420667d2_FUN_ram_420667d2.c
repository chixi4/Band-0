
undefined4
FUN_ram_420667d2(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_48 [3];
  undefined4 uStack_3c;
  undefined1 auStack_38 [16];
  
  FUN_ram_40399daa(local_48,param_4,8);
  FUN_ram_40399daa(param_5,param_4 + 8,param_3 * 8);
  iVar1 = FUN_ram_42021c5e(param_1,param_2);
  if (iVar1 == 0) {
LAB_ram_420668ea:
    uVar2 = 0xffffffff;
  }
  else {
    param_5 = param_5 + param_3 * 8 + -8;
    iVar4 = param_3 * 5;
    iVar7 = 6;
    iVar5 = param_3;
    iVar6 = param_5;
    do {
      for (; 0 < iVar5; iVar5 = iVar5 + -1) {
        iVar3 = iVar5 + iVar4;
        local_48[2] = local_48[0];
        uStack_3c = CONCAT31(CONCAT21(CONCAT11((byte)((uint)local_48[1] >> 0x18) ^ (byte)iVar3,
                                               (byte)((uint)local_48[1] >> 0x10) ^
                                               (byte)((uint)iVar3 >> 8)),
                                      (byte)((uint)local_48[1] >> 8) ^ (byte)((uint)iVar3 >> 0x10)),
                             (byte)local_48[1] ^ (byte)((uint)iVar3 >> 0x18));
        FUN_ram_40399daa(auStack_38,iVar6,8);
        FUN_ram_42021cb6(iVar1,local_48 + 2);
        local_48[0] = local_48[2];
        local_48[1] = uStack_3c;
        FUN_ram_40399daa(iVar6,auStack_38,8);
        iVar6 = iVar6 + -8;
      }
      iVar7 = iVar7 + -1;
      iVar4 = iVar4 - param_3;
      iVar5 = param_3;
      iVar6 = param_5;
    } while (iVar7 != 0);
    FUN_ram_42021cc0(iVar1);
    iVar1 = 0;
    do {
      if (*(char *)((int)local_48 + iVar1) != -0x5a) goto LAB_ram_420668ea;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 8);
    uVar2 = 0;
  }
  return uVar2;
}


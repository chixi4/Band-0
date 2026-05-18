
undefined4
FUN_ram_42062d74(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                uint param_10)

{
  undefined4 uVar1;
  int iVar2;
  uint local_40;
  int iStack_3c;
  
  if ((param_3 < 0x41) &&
     ((((param_10 & 0x30000) == 0 || (param_5 != 0)) &&
      (iVar2 = FUN_ram_40399d1a(1,0x80), iVar2 != 0)))) {
    FUN_ram_40399daa(iVar2 + 0x14,param_2,param_3);
    *(uint *)(iVar2 + 0x54) = param_3;
    if (param_4 == 0) {
      if ((param_10 != 0x20000) && ((param_10 & 0x30000) == 0)) {
        FUN_ram_420624dc(param_2,param_3,param_7,param_8,iVar2 + 4,param_10);
      }
    }
    else {
      FUN_ram_40399daa(iVar2 + 4,param_4,0x10);
    }
    FUN_ram_420221d2(&local_40);
    *(uint *)(iVar2 + 0x58) = local_40 + 0x7fffffff;
    *(uint *)(iVar2 + 0x74) = (uint)(local_40 + 0x59999978 < local_40) + iStack_3c;
    *(uint *)(iVar2 + 0x5c) = (uint)(local_40 + 0x7fffffff < local_40) + iStack_3c;
    *(uint *)(iVar2 + 0x70) = local_40 + 0x59999978;
    *(uint *)(iVar2 + 0x60) = param_10;
    FUN_ram_40399daa(iVar2 + 100,param_7,6);
    *(undefined4 *)(iVar2 + 0x78) = param_9;
    uVar1 = FUN_ram_42062c52(param_1,iVar2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


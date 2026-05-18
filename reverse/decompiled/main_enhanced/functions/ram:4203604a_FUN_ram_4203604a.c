
undefined4 FUN_ram_4203604a(int param_1,byte *param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (param_2 != (byte *)0x0) {
      iVar4 = *(int *)(param_2 + 0x44);
      if (iVar4 == 0x10) {
        pbVar3 = param_2 + 0x10;
      }
      else {
        thunk_EXT_FUN_ram_40010488(param_2 + iVar4 + 0x30,0,0x10 - iVar4);
        pbVar3 = param_2 + 0x20;
        param_2[*(int *)(param_2 + 0x44) + 0x30] = 0x80;
      }
      iVar4 = 0;
      pbVar5 = param_2;
      do {
        pbVar2 = pbVar3 + iVar4;
        iVar4 = iVar4 + 1;
        *pbVar5 = *pbVar5 ^ pbVar5[0x30] ^ *pbVar2;
        pbVar5 = pbVar5 + 1;
      } while (iVar4 != 0x10);
      FUN_ram_42035c8e(param_1,param_2,*(undefined4 *)(param_2 + 0x48));
      FUN_ram_42035e90(param_2);
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}


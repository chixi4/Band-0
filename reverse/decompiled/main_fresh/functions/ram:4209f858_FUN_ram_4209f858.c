
undefined4
FUN_ram_4209f858(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [20];
  
  (*(code *)&SUB_ram_40010488)(param_5,0xa6,8);
  FUN_ram_4039c11e(param_5 + 8,param_4,param_3 << 3);
  iVar2 = FUN_ram_4205fd96(param_1,param_2);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar6 = 1;
    iVar7 = 6;
    do {
      iVar1 = iVar6;
      for (iVar4 = 1; iVar5 = iVar4 * 8 + param_5, iVar4 <= param_3; iVar4 = iVar4 + 1) {
        FUN_ram_4039c11e(auStack_40,param_5,8);
        FUN_ram_4039c11e(auStack_38,iVar5);
        FUN_ram_4205fdee(iVar2,auStack_40,auStack_40);
        FUN_ram_4039c11e(param_5,auStack_40,8);
        *(byte *)(param_5 + 7) = *(byte *)(param_5 + 7) ^ (byte)iVar1;
        *(byte *)(param_5 + 6) = *(byte *)(param_5 + 6) ^ (byte)((uint)iVar1 >> 8);
        *(byte *)(param_5 + 5) = *(byte *)(param_5 + 5) ^ (byte)((uint)iVar1 >> 0x10);
        *(byte *)(param_5 + 4) = *(byte *)(param_5 + 4) ^ (byte)((uint)iVar1 >> 0x18);
        FUN_ram_4039c11e(iVar5,auStack_38);
        iVar1 = iVar1 + 1;
      }
      iVar7 = iVar7 + -1;
      iVar6 = iVar6 + param_3;
    } while (iVar7 != 0);
    FUN_ram_4205fdf8(iVar2);
    uVar3 = 0;
  }
  return uVar3;
}


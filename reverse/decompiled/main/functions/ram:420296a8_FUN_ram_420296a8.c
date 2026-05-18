
undefined4
FUN_ram_420296a8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined1 *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_22 [14];
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  if (param_4 < (int)(uVar1 + 4)) {
    uVar3 = 0;
  }
  else {
    (*(code *)&SUB_ram_40011aac)(auStack_22);
    iVar2 = FUN_ram_403a3150(param_1,auStack_22,2);
    if (iVar2 == 0) {
      (*(code *)&SUB_ram_40011aac)(auStack_22,param_3);
      iVar2 = FUN_ram_403a3150(param_1,auStack_22,2);
      if (iVar2 == 0) {
        return 1;
      }
    }
    (*(code *)&SUB_ram_400119dc)(param_1,(uint)uVar1 - (uint)*(ushort *)(param_1 + 0x10));
    *param_5 = 0x11;
    uVar3 = 6;
  }
  return uVar3;
}


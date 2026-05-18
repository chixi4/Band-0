
int FUN_ram_42029834(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                    ushort *param_5,undefined1 *param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_4202d4ec();
  if (iVar2 == 0) {
    iVar3 = 6;
  }
  else {
    iVar3 = FUN_ram_420295b0(param_1,param_2,0,iVar2,param_6);
    if (iVar3 == 0) {
      uVar1 = *(ushort *)(iVar2 + 0x10);
      if (param_3 < uVar1) {
        *param_6 = 0xe;
        iVar3 = 4;
      }
      else {
        (*(code *)&SUB_ram_400119f4)(iVar2,0,(uint)uVar1,param_4);
        *param_5 = uVar1;
      }
    }
  }
  (*(code *)&SUB_ram_40011a08)(iVar2);
  return iVar3;
}


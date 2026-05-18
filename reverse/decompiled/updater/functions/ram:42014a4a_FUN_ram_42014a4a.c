
int FUN_ram_42014a4a(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  if ((param_2 == (undefined4 *)0x0) || (param_1 == 0)) {
    return 0x102;
  }
  if ((param_3 & 8) != 0) {
    iVar1 = FUN_ram_420148f4();
    return iVar1;
  }
  iVar1 = 0;
  if (param_2[0xb] != 0) {
    iVar1 = FUN_ram_40390448(0x40,0x1000);
    if (iVar1 == 0) {
      iVar3 = 0;
      iVar2 = 0;
      goto LAB_ram_42014b64;
    }
    FUN_ram_40399daa(iVar1,param_2[0xb],0x40);
  }
  iVar2 = 0;
  if (param_2[0xc] != 0) {
    iVar2 = FUN_ram_40390448(0x1c,0x1000);
    if (iVar2 == 0) {
      iVar3 = 0;
      goto LAB_ram_42014b64;
    }
    FUN_ram_40399daa(iVar2,param_2[0xc],0x1c);
  }
  iVar3 = 0;
  if (param_2[0xd] != 0) {
    iVar3 = FUN_ram_40390448(0x18,0x1000);
    if (iVar3 == 0) goto LAB_ram_42014b64;
    FUN_ram_40399daa(iVar3,param_2[0xd],0x18);
  }
  uStack_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  uStack_58 = param_2[4];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  uStack_48 = param_2[8];
  uStack_44 = param_2[9];
  uStack_40 = param_2[10];
  iStack_3c = iVar1;
  iStack_38 = iVar2;
  iStack_34 = iVar3;
  iVar4 = FUN_ram_40390448(0x38,0x1000);
  if (iVar4 != 0) {
    FUN_ram_40399daa(iVar4,&uStack_68,0x38);
    iVar1 = FUN_ram_420148f4(param_1,iVar4,param_3,param_4,0);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_ram_420148be(iVar4);
    return iVar1;
  }
LAB_ram_42014b64:
  thunk_FUN_ram_40390608(iVar1);
  thunk_FUN_ram_40390608(iVar2);
  thunk_FUN_ram_40390608(iVar3);
  return 0x101;
}


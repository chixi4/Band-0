
undefined4
FUN_ram_4209caa8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,uint param_7)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  short asStack_78 [2];
  undefined2 auStack_74 [2];
  short *psStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 *puStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [40];
  
  psStack_70 = asStack_78;
  uStack_60 = 2;
  uStack_6c = param_3;
  uStack_5c = (*(code *)&SUB_ram_400104a8)(param_3);
  uVar4 = param_7 + 7 >> 3;
  puStack_64 = auStack_74;
  uStack_54 = 2;
  auStack_74[0] = (undefined2)param_7;
  uVar1 = 0;
  sVar5 = 1;
  uStack_68 = param_4;
  uStack_58 = param_5;
  do {
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
      if (uVar1 != 0) {
LAB_ram_4209cb80:
        if ((param_7 & 7) != 0) {
          pbVar2 = (byte *)(param_6 + (uVar4 - 1));
          *pbVar2 = (byte)(0xff << (8 - (param_7 & 7) & 0x1f)) & *pbVar2;
        }
      }
      thunk_FUN_ram_4206d7da(auStack_50,0x20);
      return 0;
    }
    asStack_78[0] = sVar5;
    if (uVar1 == (uVar4 & 0xffffffe0)) {
      iVar3 = FUN_ram_4205fd2c(param_1,param_2,4,&psStack_70,&uStack_60,auStack_50);
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      FUN_ram_4039c11e(param_6 + uVar1,auStack_50,uVar4 - uVar1);
      goto LAB_ram_4209cb80;
    }
    iVar3 = FUN_ram_4205fd2c(param_1,param_2,4,&psStack_70,&uStack_60,param_6 + uVar1);
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    sVar5 = sVar5 + 1;
    uVar1 = uVar1 + 0x20;
  } while( true );
}

